
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int ossl_uintmax_t ;
typedef int ossl_intmax_t ;
struct TYPE_5__ {int retval; } ;
struct TYPE_4__ {char* name; char valtype; int retval; } ;
typedef TYPE_1__ OPTIONS ;


 int FUNC_0 (int ,char*,int ,char*,...) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (char*) ;
 char* VAR_4 ;
 char** VAR_5 ;
 int VAR_6 ;
 char* VAR_7 ;
 char* VAR_8 ;
 int FUNC_2 (char*,int ,int*) ;
 int FUNC_3 (char*,int *) ;
 size_t VAR_9 ;
 int FUNC_4 (char*,int*) ;
 int FUNC_5 (char*,long*) ;
 int FUNC_6 (char*,unsigned long*) ;
 int FUNC_7 (char*,int *) ;
 TYPE_1__* VAR_10 ;
 int VAR_11 ;
 char* FUNC_8 (char*,char) ;
 scalar_t__ FUNC_9 (char*,char*) ;
 TYPE_2__* VAR_12 ;

int FUNC_10(void)
{
    char *VAR_13;
    const OPTIONS *VAR_14;
    int VAR_15;
    long VAR_16;
    unsigned long VAR_17;
    ossl_intmax_t VAR_18;
    ossl_uintmax_t VAR_19;


    VAR_4 = ((void*)0);
    VAR_13 = VAR_5[VAR_9];
    if (VAR_13 == ((void*)0))
        return 0;


    if (*VAR_13 != '-')
        return 0;


    VAR_9++;
    if (FUNC_9(VAR_13, "--") == 0)
        return 0;


    if (*++VAR_13 == '-')
        VAR_13++;
    VAR_8 = VAR_13 - 1;


    if ((VAR_4 = FUNC_8(VAR_13, '=')) != ((void*)0))
        *VAR_4++ = '\0';
    for (VAR_14 = VAR_10; VAR_14->name; ++VAR_14) {

        if (FUNC_9(VAR_13, VAR_14->name) != 0)
            continue;


        if (VAR_14->valtype == 0 || VAR_14->valtype == '-') {
            if (VAR_4) {
                FUNC_0(VAR_6,
                           "%s: Option -%s does not take a value\n", VAR_11, VAR_13);
                return -1;
            }
            return VAR_14->retval;
        }


        if (VAR_4 == ((void*)0)) {
            if (VAR_5[VAR_9] == ((void*)0)) {
                FUNC_0(VAR_6,
                           "%s: Option -%s needs a value\n", VAR_11, VAR_14->name);
                return -1;
            }
            VAR_4 = VAR_5[VAR_9++];
        }


        switch (VAR_14->valtype) {
        default:
        case 's':

            break;
        case '/':
            if (FUNC_1(VAR_4) > 0)
                break;
            FUNC_0(VAR_6, "%s: Not a directory: %s\n", VAR_11, VAR_4);
            return -1;
        case '<':

            break;
        case '>':

            break;
        case 'p':
        case 'n':
            if (!FUNC_4(VAR_4, &VAR_15)
                    || (VAR_14->valtype == 'p' && VAR_15 <= 0)) {
                FUNC_0(VAR_6,
                           "%s: Non-positive number \"%s\" for -%s\n",
                           VAR_11, VAR_4, VAR_14->name);
                return -1;
            }
            break;
        case 'M':
            if (!FUNC_3(VAR_4, &VAR_18)) {
                FUNC_0(VAR_6,
                           "%s: Invalid number \"%s\" for -%s\n",
                           VAR_11, VAR_4, VAR_14->name);
                return -1;
            }
            break;
        case 'U':
            if (!FUNC_7(VAR_4, &VAR_19)) {
                FUNC_0(VAR_6,
                           "%s: Invalid number \"%s\" for -%s\n",
                           VAR_11, VAR_4, VAR_14->name);
                return -1;
            }
            break;
        case 'l':
            if (!FUNC_5(VAR_4, &VAR_16)) {
                FUNC_0(VAR_6,
                           "%s: Invalid number \"%s\" for -%s\n",
                           VAR_11, VAR_4, VAR_14->name);
                return -1;
            }
            break;
        case 'u':
            if (!FUNC_6(VAR_4, &VAR_17)) {
                FUNC_0(VAR_6,
                           "%s: Invalid number \"%s\" for -%s\n",
                           VAR_11, VAR_4, VAR_14->name);
                return -1;
            }
            break;
        case 'c':
        case 'E':
        case 'F':
        case 'f':
            if (FUNC_2(VAR_4,
                           VAR_14->valtype == 'c' ? VAR_2 :
                           VAR_14->valtype == 'E' ? VAR_1 :
                           VAR_14->valtype == 'F' ? VAR_3
                           : VAR_0, &VAR_15))
                break;
            FUNC_0(VAR_6,
                       "%s: Invalid format \"%s\" for -%s\n",
                       VAR_11, VAR_4, VAR_14->name);
            return -1;
        }


        return VAR_14->retval;
    }
    if (VAR_12 != ((void*)0)) {
        VAR_7 = VAR_13;
        return VAR_12->retval;
    }
    FUNC_0(VAR_6, "%s: Option unknown option -%s\n", VAR_11, VAR_13);
    return -1;
}
