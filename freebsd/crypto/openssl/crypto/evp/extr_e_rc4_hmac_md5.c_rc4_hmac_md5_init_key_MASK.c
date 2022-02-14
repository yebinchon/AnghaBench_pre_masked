
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int payload_length; int head; int md; int tail; int ks; } ;
typedef TYPE_1__ EVP_RC4_HMAC_MD5 ;
typedef int EVP_CIPHER_CTX ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int VAR_0 ;
 int FUNC_2 (int *,int ,unsigned char const*) ;
 TYPE_1__* FUNC_3 (int *) ;

__attribute__((used)) static int FUNC_4(EVP_CIPHER_CTX *VAR_1,
                                 const unsigned char *VAR_2,
                                 const unsigned char *VAR_3, int VAR_4)
{
    EVP_RC4_HMAC_MD5 *VAR_5 = FUNC_3(VAR_1);

    FUNC_2(&VAR_5->ks, FUNC_0(VAR_1), VAR_2);

    FUNC_1(&VAR_5->head);
    VAR_5->tail = VAR_5->head;
    VAR_5->md = VAR_5->head;

    VAR_5->payload_length = VAR_0;

    return 1;
}
