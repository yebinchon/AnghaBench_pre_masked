
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_41__ TYPE_9__ ;
typedef struct TYPE_40__ TYPE_8__ ;
typedef struct TYPE_39__ TYPE_7__ ;
typedef struct TYPE_38__ TYPE_6__ ;
typedef struct TYPE_37__ TYPE_5__ ;
typedef struct TYPE_36__ TYPE_4__ ;
typedef struct TYPE_35__ TYPE_3__ ;
typedef struct TYPE_34__ TYPE_2__ ;
typedef struct TYPE_33__ TYPE_23__ ;
typedef struct TYPE_32__ TYPE_1__ ;
typedef struct TYPE_31__ TYPE_17__ ;
typedef struct TYPE_30__ TYPE_10__ ;


struct stat {int dummy; } ;
struct TYPE_31__ {TYPE_5__* crl; TYPE_6__* x509; } ;
struct TYPE_35__ {TYPE_17__ data; scalar_t__ type; } ;
typedef TYPE_3__ X509_OBJECT ;
typedef int X509_NAME ;
typedef scalar_t__ X509_LOOKUP_TYPE ;
struct TYPE_36__ {TYPE_23__* store_ctx; scalar_t__ method_data; } ;
typedef TYPE_4__ X509_LOOKUP ;
struct TYPE_34__ {int * issuer; } ;
struct TYPE_37__ {TYPE_2__ crl; } ;
typedef TYPE_5__ X509_CRL ;
struct TYPE_32__ {int * subject; } ;
struct TYPE_38__ {TYPE_1__ cert_info; } ;
typedef TYPE_6__ X509 ;
struct TYPE_41__ {int lock; int dirs; } ;
struct TYPE_40__ {char* dir; scalar_t__ hashes; int dir_type; } ;
struct TYPE_39__ {unsigned long hash; int suffix; } ;
struct TYPE_33__ {int objs; } ;
struct TYPE_30__ {int data; int max; } ;
typedef TYPE_7__ BY_DIR_HASH ;
typedef TYPE_8__ BY_DIR_ENTRY ;
typedef TYPE_9__ BY_DIR ;
typedef TYPE_10__ BUF_MEM ;


 int FUNC_0 (int ,int ,char*,char*,char,...) ;
 int FUNC_1 (TYPE_10__*) ;
 int FUNC_2 (TYPE_10__*,int) ;
 TYPE_10__* FUNC_3 () ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_7 () ;
 int FUNC_8 (TYPE_7__*) ;
 TYPE_7__* FUNC_9 (int) ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 unsigned long FUNC_10 (int *) ;
 int VAR_5 ;
 int FUNC_11 (TYPE_23__*) ;
 int FUNC_12 (TYPE_23__*) ;
 scalar_t__ FUNC_13 (TYPE_4__*,int ,int ) ;
 scalar_t__ FUNC_14 (TYPE_4__*,int ,int ) ;
 int FUNC_15 (int ,int ) ;
 int FUNC_16 (TYPE_17__*,TYPE_17__*,int) ;
 int FUNC_17 (int ) ;
 TYPE_8__* FUNC_18 (int ,int) ;
 int FUNC_19 (scalar_t__,TYPE_7__*) ;
 int FUNC_20 (scalar_t__,TYPE_7__*) ;
 TYPE_7__* FUNC_21 (scalar_t__,int) ;
 int FUNC_22 (int ,TYPE_3__*) ;
 TYPE_3__* FUNC_23 (int ,int) ;
 scalar_t__ FUNC_24 (int ,struct stat*) ;
 int FUNC_25 (char*) ;

__attribute__((used)) static int FUNC_26(X509_LOOKUP *VAR_6, X509_LOOKUP_TYPE VAR_7,
                               X509_NAME *VAR_8, X509_OBJECT *VAR_9)
{
    BY_DIR *VAR_10;
    union {
        X509 st_x509;
        X509_CRL crl;
    } VAR_11;
    int VAR_12 = 0;
    int VAR_13, VAR_14, VAR_15;
    unsigned long VAR_16;
    BUF_MEM *VAR_17 = ((void*)0);
    X509_OBJECT VAR_18, *VAR_19;
    const char *VAR_20 = "";

    if (VAR_8 == ((void*)0))
        return 0;

    VAR_18.type = VAR_7;
    if (VAR_7 == VAR_4) {
        VAR_11.st_x509.cert_info.subject = VAR_8;
        VAR_18.data.x509 = &VAR_11.st_x509;
        VAR_20 = "";
    } else if (VAR_7 == VAR_3) {
        VAR_11.crl.crl.issuer = VAR_8;
        VAR_18.data.crl = &VAR_11.crl;
        VAR_20 = "r";
    } else {
        FUNC_15(VAR_2, VAR_5);
        goto finish;
    }

    if ((VAR_17 = FUNC_3()) == ((void*)0)) {
        FUNC_15(VAR_2, VAR_0);
        goto finish;
    }

    VAR_10 = (BY_DIR *)VAR_6->method_data;

    VAR_16 = FUNC_10(VAR_8);
    for (VAR_13 = 0; VAR_13 < FUNC_17(VAR_10->dirs); VAR_13++) {
        BY_DIR_ENTRY *VAR_21;
        int VAR_22;
        BY_DIR_HASH VAR_23, *VAR_24;

        VAR_21 = FUNC_18(VAR_10->dirs, VAR_13);
        VAR_14 = FUNC_25(VAR_21->dir) + 1 + 8 + 6 + 1 + 1;
        if (!FUNC_2(VAR_17, VAR_14)) {
            FUNC_15(VAR_2, VAR_1);
            goto finish;
        }
        if (VAR_7 == VAR_3 && VAR_21->hashes) {
            VAR_23.hash = VAR_16;
            FUNC_4(VAR_10->lock);
            VAR_22 = FUNC_19(VAR_21->hashes, &VAR_23);
            if (VAR_22 >= 0) {
                VAR_24 = FUNC_21(VAR_21->hashes, VAR_22);
                VAR_15 = VAR_24->suffix;
            } else {
                VAR_24 = ((void*)0);
                VAR_15 = 0;
            }
            FUNC_5(VAR_10->lock);
        } else {
            VAR_15 = 0;
            VAR_24 = ((void*)0);
        }
        for (;;) {
            char VAR_25 = '/';
            if (VAR_25 == '\0') {




                FUNC_0(VAR_17->data, VAR_17->max,
                             "%s%08lx.%s%d", VAR_21->dir, VAR_16, VAR_20, VAR_15);
            } else {
                FUNC_0(VAR_17->data, VAR_17->max,
                             "%s%c%08lx.%s%d", VAR_21->dir, VAR_25, VAR_16, VAR_20, VAR_15);
            }




            {
                struct stat VAR_26;
                if (FUNC_24(VAR_17->data, &VAR_26) < 0)
                    break;
            }


            if (VAR_7 == VAR_4) {
                if ((FUNC_13(VAR_6, VAR_17->data, VAR_21->dir_type)) == 0)
                    break;
            } else if (VAR_7 == VAR_3) {
                if ((FUNC_14(VAR_6, VAR_17->data, VAR_21->dir_type)) == 0)
                    break;
            }

            VAR_15++;
        }




        FUNC_11(VAR_6->store_ctx);
        VAR_14 = FUNC_22(VAR_6->store_ctx->objs, &VAR_18);
        VAR_19 = FUNC_23(VAR_6->store_ctx->objs, VAR_14);
        FUNC_12(VAR_6->store_ctx);



        if (VAR_7 == VAR_3) {
            FUNC_6(VAR_10->lock);




            if (VAR_24 == ((void*)0)) {
                VAR_23.hash = VAR_16;
                VAR_22 = FUNC_19(VAR_21->hashes, &VAR_23);
                VAR_24 = FUNC_21(VAR_21->hashes, VAR_22);
            }
            if (VAR_24 == ((void*)0)) {
                VAR_24 = FUNC_9(sizeof(*VAR_24));
                if (VAR_24 == ((void*)0)) {
                    FUNC_5(VAR_10->lock);
                    FUNC_15(VAR_2, VAR_1);
                    VAR_12 = 0;
                    goto finish;
                }
                VAR_24->hash = VAR_16;
                VAR_24->suffix = VAR_15;
                if (!FUNC_20(VAR_21->hashes, VAR_24)) {
                    FUNC_5(VAR_10->lock);
                    FUNC_8(VAR_24);
                    FUNC_15(VAR_2, VAR_1);
                    VAR_12 = 0;
                    goto finish;
                }
            } else if (VAR_24->suffix < VAR_15) {
                VAR_24->suffix = VAR_15;
            }

            FUNC_5(VAR_10->lock);

        }

        if (VAR_19 != ((void*)0)) {
            VAR_12 = 1;
            VAR_9->type = VAR_19->type;
            FUNC_16(&VAR_9->data, &VAR_19->data, sizeof(VAR_9->data));





            FUNC_7();

            goto finish;
        }
    }
 finish:
    FUNC_1(VAR_17);
    return VAR_12;
}
