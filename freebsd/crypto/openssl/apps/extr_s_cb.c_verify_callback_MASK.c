
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int X509_STORE_CTX ;
typedef int X509 ;
struct TYPE_2__ {int depth; int error; int quiet; int return_error; } ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,char*,...) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (int ,int ,int ,int ) ;
 int * FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int VAR_0 ;






 int VAR_1 ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int) ;
 int VAR_2 ;
 int FUNC_12 () ;
 int FUNC_13 (int *) ;
 TYPE_1__ VAR_3 ;

int FUNC_14(int VAR_4, X509_STORE_CTX *VAR_5)
{
    X509 *VAR_6;
    int VAR_7, VAR_8;

    VAR_6 = FUNC_4(VAR_5);
    VAR_7 = FUNC_5(VAR_5);
    VAR_8 = FUNC_6(VAR_5);

    if (!VAR_3.quiet || !VAR_4) {
        FUNC_1(VAR_2, "depth=%d ", VAR_8);
        if (VAR_6 != ((void*)0)) {
            FUNC_3(VAR_2,
                               FUNC_10(VAR_6),
                               0, FUNC_12());
            FUNC_2(VAR_2, "\n");
        } else {
            FUNC_2(VAR_2, "<no cert>\n");
        }
    }
    if (!VAR_4) {
        FUNC_1(VAR_2, "verify error:num=%d:%s\n", VAR_7,
                   FUNC_11(VAR_7));
        if (VAR_3.depth < 0 || VAR_3.depth >= VAR_8) {
            if (!VAR_3.return_error)
                VAR_4 = 1;
            VAR_3.error = VAR_7;
        } else {
            VAR_4 = 0;
            VAR_3.error = VAR_0;
        }
    }
    switch (VAR_7) {
    case 128:
        FUNC_2(VAR_2, "issuer= ");
        FUNC_3(VAR_2, FUNC_9(VAR_6),
                           0, FUNC_12());
        FUNC_2(VAR_2, "\n");
        break;
    case 132:
    case 130:
        FUNC_1(VAR_2, "notBefore=");
        FUNC_0(VAR_2, FUNC_8(VAR_6));
        FUNC_1(VAR_2, "\n");
        break;
    case 133:
    case 131:
        FUNC_1(VAR_2, "notAfter=");
        FUNC_0(VAR_2, FUNC_7(VAR_6));
        FUNC_1(VAR_2, "\n");
        break;
    case 129:
        if (!VAR_3.quiet)
            FUNC_13(VAR_5);
        break;
    }
    if (VAR_7 == VAR_1 && VAR_4 == 2 && !VAR_3.quiet)
        FUNC_13(VAR_5);
    if (VAR_4 && !VAR_3.quiet)
        FUNC_1(VAR_2, "verify return:%d\n", VAR_4);
    return VAR_4;
}
