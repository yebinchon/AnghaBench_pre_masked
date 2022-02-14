
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {struct TYPE_4__* enc_data; int x_pkey; int crl; int x509; } ;
typedef TYPE_1__ X509_INFO ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;

void FUNC_4(X509_INFO *VAR_0)
{
    if (VAR_0 == ((void*)0))
        return;

    FUNC_3(VAR_0->x509);
    FUNC_1(VAR_0->crl);
    FUNC_2(VAR_0->x_pkey);
    FUNC_0(VAR_0->enc_data);
    FUNC_0(VAR_0);
}
