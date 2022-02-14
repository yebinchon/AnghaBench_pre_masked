
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int tmap_info_t ;
struct TYPE_11__ {int fOptSet; } ;
typedef TYPE_1__ tOptions ;
struct TYPE_12__ {void* flags; } ;
typedef TYPE_2__ tOptState ;
typedef void* opt_state_mask_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (char) ;
 int VAR_2 ;
 char VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 TYPE_2__ FUNC_1 (int ) ;
 void* VAR_6 ;
 void* VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 char* FUNC_2 (char*) ;
 scalar_t__ FUNC_3 (char*) ;
 char* FUNC_4 (TYPE_1__*,TYPE_2__*,char*,int) ;
 char* FUNC_5 (char*) ;
 char* FUNC_6 (TYPE_1__*,char*) ;
 char* FUNC_7 (TYPE_1__*,char*) ;
 char* FUNC_8 (TYPE_1__*,TYPE_2__*,char*,int) ;
 char* FUNC_9 (char*,char) ;
 char* FUNC_10 (char const*,int,int ,int *) ;
 int FUNC_11 (int *) ;

__attribute__((used)) static void
FUNC_12(tOptions * VAR_11, char const * VAR_12, int VAR_13)
{
    tmap_info_t VAR_14;
    tOptState VAR_15 = FUNC_1(VAR_8);
    opt_state_mask_t VAR_16 = VAR_15.flags;
    opt_state_mask_t VAR_17 = VAR_11->fOptSet;
    char * VAR_18 =
        FUNC_10(VAR_12, VAR_9|VAR_10, VAR_2, &VAR_14);

    if (FUNC_3(VAR_18))
        return;




    VAR_11->fOptSet &= ~VAR_4;

    if (VAR_13 == VAR_0) {
        VAR_16 = VAR_6;
        VAR_13 = VAR_1;
    }







    if ((VAR_11->fOptSet & VAR_5) == 0)
        VAR_16 = VAR_7;

    do {
        VAR_15.flags = VAR_16;
        VAR_18 = FUNC_2(VAR_18);

        if (FUNC_0(*VAR_18)) {
            VAR_18 = FUNC_4(VAR_11, &VAR_15, VAR_18, VAR_13);

        } else switch (*VAR_18) {
        case '<':
            if (FUNC_0(VAR_18[1]))
                VAR_18 = FUNC_8(VAR_11, &VAR_15, VAR_18, VAR_13);

            else switch (VAR_18[1]) {
            case '?':
                VAR_18 = FUNC_6(VAR_11, VAR_18);
                break;

            case '!':
                VAR_18 = FUNC_5(VAR_18);
                break;

            case '/':
                VAR_18 = FUNC_9(VAR_18 + 2, '>');
                if (VAR_18++ != ((void*)0))
                    break;

            default:
                VAR_18 = ((void*)0);
            }
            if (VAR_18 == ((void*)0))
                goto all_done;
            break;

        case '[':
            VAR_18 = FUNC_7(VAR_11, VAR_18);
            break;

        case '#':
            VAR_18 = FUNC_9(VAR_18 + 1, VAR_3);
            break;

        default:
            goto all_done;
        }
    } while (VAR_18 != ((void*)0));

 all_done:
    FUNC_11(&VAR_14);
    VAR_11->fOptSet = VAR_17;
}
