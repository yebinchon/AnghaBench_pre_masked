
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {TYPE_1__* bytes; } ;
typedef TYPE_2__ X509_NAME ;
struct TYPE_5__ {int length; int data; } ;
typedef int EVP_MD_CTX ;


 scalar_t__ FUNC_0 (int *,unsigned char*,int *) ;
 scalar_t__ FUNC_1 (int *,int ,int *) ;
 scalar_t__ FUNC_2 (int *,int ,int ) ;
 int VAR_0 ;
 int FUNC_3 (int *) ;
 int * FUNC_4 () ;
 int FUNC_5 (int *,int ) ;
 int FUNC_6 () ;
 int FUNC_7 (TYPE_2__*,int *) ;

unsigned long FUNC_8(X509_NAME *VAR_1)
{
    EVP_MD_CTX *VAR_2 = FUNC_4();
    unsigned long VAR_3 = 0;
    unsigned char VAR_4[16];

    if (VAR_2 == ((void*)0))
        return VAR_3;


    FUNC_7(VAR_1, ((void*)0));
    FUNC_5(VAR_2, VAR_0);
    if (FUNC_1(VAR_2, FUNC_6(), ((void*)0))
        && FUNC_2(VAR_2, VAR_1->bytes->data, VAR_1->bytes->length)
        && FUNC_0(VAR_2, VAR_4, ((void*)0)))
        VAR_3 = (((unsigned long)VAR_4[0]) | ((unsigned long)VAR_4[1] << 8L) |
               ((unsigned long)VAR_4[2] << 16L) | ((unsigned long)VAR_4[3] << 24L)
            ) & 0xffffffffL;
    FUNC_3(VAR_2);

    return VAR_3;
}
