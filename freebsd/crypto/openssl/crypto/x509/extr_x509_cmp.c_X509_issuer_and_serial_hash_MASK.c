
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ length; scalar_t__ data; } ;
struct TYPE_6__ {TYPE_1__ serialNumber; int issuer; } ;
struct TYPE_7__ {TYPE_2__ cert_info; } ;
typedef TYPE_3__ X509 ;
typedef int EVP_MD_CTX ;


 int FUNC_0 (int *,unsigned char*,int *) ;
 int FUNC_1 (int *,int ,int *) ;
 int FUNC_2 (int *,unsigned char*,unsigned long) ;
 int FUNC_3 (int *) ;
 int * FUNC_4 () ;
 int FUNC_5 () ;
 int FUNC_6 (char*) ;
 char* FUNC_7 (int ,int *,int ) ;
 unsigned long FUNC_8 (char*) ;

unsigned long FUNC_9(X509 *VAR_0)
{
    unsigned long VAR_1 = 0;
    EVP_MD_CTX *VAR_2 = FUNC_4();
    unsigned char VAR_3[16];
    char *VAR_4;

    if (VAR_2 == ((void*)0))
        goto err;
    VAR_4 = FUNC_7(VAR_0->cert_info.issuer, ((void*)0), 0);
    if (!FUNC_1(VAR_2, FUNC_5(), ((void*)0)))
        goto err;
    if (!FUNC_2(VAR_2, (unsigned char *)VAR_4, FUNC_8(VAR_4)))
        goto err;
    FUNC_6(VAR_4);
    if (!FUNC_2
        (VAR_2, (unsigned char *)VAR_0->cert_info.serialNumber.data,
         (unsigned long)VAR_0->cert_info.serialNumber.length))
        goto err;
    if (!FUNC_0(VAR_2, &(VAR_3[0]), ((void*)0)))
        goto err;
    VAR_1 = (((unsigned long)VAR_3[0]) | ((unsigned long)VAR_3[1] << 8L) |
           ((unsigned long)VAR_3[2] << 16L) | ((unsigned long)VAR_3[3] << 24L)
        ) & 0xffffffffL;
 err:
    FUNC_3(VAR_2);
    return VAR_1;
}
