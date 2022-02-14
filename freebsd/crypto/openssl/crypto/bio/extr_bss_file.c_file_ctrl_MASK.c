
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int p ;
struct TYPE_5__ {int flags; int shutdown; int init; int * ptr; } ;
typedef int FILE ;
typedef TYPE_1__ BIO ;


 int VAR_0 ;
 int VAR_1 ;
 long VAR_2 ;
 long VAR_3 ;
 long VAR_4 ;
 long VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (TYPE_1__*,int) ;
 int FUNC_1 (int ,int ) ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_2 (int,char*,...) ;
 int FUNC_3 (char*,char*,int) ;
 int FUNC_4 (char*,char*,int) ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_5 (int ,int ) ;
 scalar_t__ FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 scalar_t__ FUNC_8 (int *,long,int ) ;
 int FUNC_9 (int *,char) ;
 long FUNC_10 (int *) ;
 void* VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int,int ) ;
 scalar_t__ FUNC_13 (int *) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (TYPE_1__*) ;
 int FUNC_16 (int *) ;
 scalar_t__ FUNC_17 (int *,long,int ) ;
 long FUNC_18 (int *) ;
 int FUNC_19 () ;
 int FUNC_20 (int) ;
 int * FUNC_21 (void*,char*) ;
 int FUNC_22 (int,int ) ;
 void* VAR_18 ;
 void* VAR_19 ;
 void* VAR_20 ;

__attribute__((used)) static long FUNC_23(BIO *VAR_21, int VAR_22, long VAR_23, void *VAR_24)
{
    long VAR_25 = 1;
    FILE *VAR_26 = (FILE *)VAR_21->ptr;
    FILE **VAR_27;
    char VAR_28[4];
    int VAR_29;

    switch (VAR_22) {
    case 132:
    case 135:
        if (VAR_21->flags & VAR_1)
            VAR_25 = (long)FUNC_8(VAR_21->ptr, VAR_23, 0);
        else
            VAR_25 = (long)FUNC_17(VAR_26, VAR_23, 0);
        break;
    case 142:
        if (VAR_21->flags & VAR_1)
            VAR_25 = (long)FUNC_6(VAR_26);
        else
            VAR_25 = (long)FUNC_13(VAR_26);
        break;
    case 131:
    case 139:
        if (VAR_21->flags & VAR_1)
            VAR_25 = FUNC_10(VAR_21->ptr);
        else
            VAR_25 = FUNC_18(VAR_26);
        break;
    case 128:
        FUNC_15(VAR_21);
        VAR_21->shutdown = (int)VAR_23 & VAR_0;
        VAR_21->ptr = VAR_24;
        VAR_21->init = 1;
        {
        }
        break;
    case 129:
        FUNC_15(VAR_21);
        VAR_21->shutdown = (int)VAR_23 & VAR_0;
        if (VAR_23 & VAR_2) {
            if (VAR_23 & VAR_3)
                FUNC_4(VAR_28, "a+", sizeof(VAR_28));
            else
                FUNC_4(VAR_28, "a", sizeof(VAR_28));
        } else if ((VAR_23 & VAR_3) && (VAR_23 & VAR_5))
            FUNC_4(VAR_28, "r+", sizeof(VAR_28));
        else if (VAR_23 & VAR_5)
            FUNC_4(VAR_28, "w", sizeof(VAR_28));
        else if (VAR_23 & VAR_3)
            FUNC_4(VAR_28, "r", sizeof(VAR_28));
        else {
            FUNC_1(VAR_6, VAR_7);
            VAR_25 = 0;
            break;
        }
        VAR_26 = FUNC_21(VAR_24, VAR_28);
        if (VAR_26 == ((void*)0)) {
            FUNC_5(VAR_14, FUNC_19());
            FUNC_2(5, "fopen('", VAR_24, "','", VAR_28, "')");
            FUNC_1(VAR_6, VAR_9);
            VAR_25 = 0;
            break;
        }
        VAR_21->ptr = VAR_26;
        VAR_21->init = 1;
        FUNC_0(VAR_21, VAR_1);

        break;
    case 130:

        if (VAR_24 != ((void*)0)) {
            VAR_27 = (FILE **)VAR_24;
            *VAR_27 = (FILE *)VAR_21->ptr;
        }
        break;
    case 140:
        VAR_25 = (long)VAR_21->shutdown;
        break;
    case 134:
        VAR_21->shutdown = (int)VAR_23;
        break;
    case 141:
        VAR_29 = VAR_21->flags & VAR_1
                ? FUNC_7(VAR_21->ptr) : FUNC_14((FILE *)VAR_21->ptr);
        if (VAR_29 == VAR_8) {
            FUNC_5(VAR_13, FUNC_19());
            FUNC_2(1, "fflush()");
            FUNC_1(VAR_6, VAR_9);
            VAR_25 = 0;
        }
        break;
    case 143:
        VAR_25 = 1;
        break;

    case 133:
    case 138:
    case 136:
    case 137:
    default:
        VAR_25 = 0;
        break;
    }
    return VAR_25;
}
