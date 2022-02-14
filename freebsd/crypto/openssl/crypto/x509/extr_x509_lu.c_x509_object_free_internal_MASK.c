
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int crl; int x509; } ;
struct TYPE_5__ {int type; TYPE_1__ data; } ;
typedef TYPE_2__ X509_OBJECT ;


 int FUNC_0 (int ) ;



 int FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(X509_OBJECT *VAR_0)
{
    if (VAR_0 == ((void*)0))
        return;
    switch (VAR_0->type) {
    case 129:
        break;
    case 128:
        FUNC_1(VAR_0->data.x509);
        break;
    case 130:
        FUNC_0(VAR_0->data.crl);
        break;
    }
}
