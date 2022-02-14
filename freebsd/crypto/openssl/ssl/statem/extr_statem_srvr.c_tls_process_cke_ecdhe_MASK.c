
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_9__ {TYPE_2__* s3; } ;
struct TYPE_7__ {int * pkey; } ;
struct TYPE_8__ {TYPE_1__ tmp; } ;
typedef TYPE_3__ SSL ;
typedef int PACKET ;
typedef int EVP_PKEY ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int *,int *) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 () ;
 scalar_t__ FUNC_3 (int *,unsigned char const*,unsigned int) ;
 int FUNC_4 (int *,unsigned int*) ;
 int FUNC_5 (int *,unsigned char const**,unsigned int) ;
 long FUNC_6 (int *) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_7 (TYPE_3__*,int ,int ,int ) ;
 scalar_t__ FUNC_8 (TYPE_3__*,int *,int *,int) ;

__attribute__((used)) static int FUNC_9(SSL *VAR_9, PACKET *VAR_10)
{

    EVP_PKEY *VAR_11 = VAR_9->s3->tmp.pkey;
    EVP_PKEY *VAR_12 = ((void*)0);
    int VAR_13 = 0;

    if (FUNC_6(VAR_10) == 0L) {

        FUNC_7(VAR_9, VAR_4, VAR_6,
                 VAR_8);
        goto err;
    } else {
        unsigned int VAR_14;
        const unsigned char *VAR_15;







        if (!FUNC_4(VAR_10, &VAR_14) || !FUNC_5(VAR_10, &VAR_15, VAR_14)
            || FUNC_6(VAR_10) != 0) {
            FUNC_7(VAR_9, VAR_3, VAR_6,
                     VAR_7);
            goto err;
        }
        if (VAR_11 == ((void*)0)) {
            FUNC_7(VAR_9, VAR_5, VAR_6,
                     VAR_8);
            goto err;
        }

        VAR_12 = FUNC_2();
        if (VAR_12 == ((void*)0) || FUNC_0(VAR_12, VAR_11) <= 0) {
            FUNC_7(VAR_9, VAR_5, VAR_6,
                     VAR_1);
            goto err;
        }
        if (FUNC_3(VAR_12, VAR_15, VAR_14) == 0) {
            FUNC_7(VAR_9, VAR_5, VAR_6,
                     VAR_0);
            goto err;
        }
    }

    if (FUNC_8(VAR_9, VAR_11, VAR_12, 1) == 0) {

        goto err;
    }

    VAR_13 = 1;
    FUNC_1(VAR_9->s3->tmp.pkey);
    VAR_9->s3->tmp.pkey = ((void*)0);
 err:
    FUNC_1(VAR_12);

    return VAR_13;






}
