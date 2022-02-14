
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int X509 ;
struct TYPE_3__ {int * signer; int pkey; } ;
typedef TYPE_1__ CMS_SignerInfo ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

void FUNC_4(CMS_SignerInfo *VAR_0, X509 *VAR_1)
{
    if (VAR_1) {
        FUNC_3(VAR_1);
        FUNC_0(VAR_0->pkey);
        VAR_0->pkey = FUNC_2(VAR_1);
    }
    FUNC_1(VAR_0->signer);
    VAR_0->signer = VAR_1;
}
