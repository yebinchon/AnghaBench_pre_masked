
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int pem_password_cb ;
typedef int buf ;
struct TYPE_5__ {unsigned char* iv; int * cipher; } ;
struct TYPE_7__ {int enc_len; int * x509; TYPE_2__* x_pkey; TYPE_1__ enc_cipher; int * enc_data; } ;
typedef TYPE_3__ X509_INFO ;
struct TYPE_6__ {int dec_pkey; } ;
typedef int EVP_CIPHER ;
typedef int BIO ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ) ;
 char* FUNC_3 (int ) ;
 int FUNC_4 (char*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_5 (char*,char const*,int,char*) ;
 int FUNC_6 (char*,int ) ;
 int FUNC_7 (int *,int ,char*,unsigned char*,int) ;
 scalar_t__ FUNC_8 (int *,int ,int *,unsigned char*,int,int *,void*) ;
 scalar_t__ FUNC_9 (int *,int *) ;
 int FUNC_10 (int ,int ) ;
 int FUNC_11 (char const*) ;

int FUNC_12(BIO *VAR_6, X509_INFO *VAR_7, EVP_CIPHER *VAR_8,
                            unsigned char *VAR_9, int VAR_10,
                            pem_password_cb *VAR_11, void *VAR_12)
{
    int VAR_13, VAR_14 = 0;
    unsigned char *VAR_15 = ((void*)0);
    const char *VAR_16 = ((void*)0);
    char VAR_17[VAR_0];
    unsigned char *VAR_18 = ((void*)0);

    if (VAR_8 != ((void*)0)) {
        VAR_16 = FUNC_3(FUNC_1(VAR_8));
        if (VAR_16 == ((void*)0)




                || (FUNC_11(VAR_16) + 23 + 2 * FUNC_0(VAR_8) + 13)
                   > sizeof(VAR_17)) {
            FUNC_10(VAR_1, VAR_3);
            goto err;
        }
    }






    if (VAR_7->x_pkey != ((void*)0)) {
        if ((VAR_7->enc_data != ((void*)0)) && (VAR_7->enc_len > 0)) {
            if (VAR_8 == ((void*)0)) {
                FUNC_10(VAR_1, VAR_2);
                goto err;
            }


            VAR_18 = VAR_7->enc_cipher.iv;
            VAR_15 = (unsigned char *)VAR_7->enc_data;
            VAR_13 = VAR_7->enc_len;






            VAR_16 = FUNC_3(FUNC_1(VAR_7->enc_cipher.cipher));
            if (VAR_16 == ((void*)0)) {
                FUNC_10(VAR_1,
                       VAR_3);
                goto err;
            }


            VAR_17[0] = '\0';
            FUNC_6(VAR_17, VAR_5);
            FUNC_5(VAR_17, VAR_16, FUNC_0(VAR_8),
                         (char *)VAR_18);


            VAR_13 = FUNC_7(VAR_6, VAR_4, VAR_17, VAR_15, VAR_13);
            if (VAR_13 <= 0)
                goto err;
        } else {



            if (FUNC_8(VAR_6,
                                            FUNC_2(VAR_7->x_pkey->dec_pkey),
                                            VAR_8, VAR_9, VAR_10, VAR_11, VAR_12) <= 0)
                goto err;

        }
    }


    if ((VAR_7->x509 != ((void*)0)) && (FUNC_9(VAR_6, VAR_7->x509) <= 0))
        goto err;







    VAR_14 = 1;

 err:
    FUNC_4(VAR_17, VAR_0);
    return VAR_14;
}
