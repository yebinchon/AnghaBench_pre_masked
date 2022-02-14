
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {TYPE_4__* desc; TYPE_4__* name; } ;
struct TYPE_8__ {TYPE_4__* pem_name; int blob; } ;
struct TYPE_9__ {int crl; int x509; int pkey; int params; TYPE_1__ name; TYPE_2__ embedded; } ;
struct TYPE_10__ {int type; TYPE_3__ _; } ;
typedef TYPE_4__ OSSL_STORE_INFO ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_4__*) ;






 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;

void FUNC_5(OSSL_STORE_INFO *VAR_0)
{
    if (VAR_0 != ((void*)0)) {
        switch (VAR_0->type) {
        case 131:
            FUNC_0(VAR_0->_.embedded.blob);
            FUNC_2(VAR_0->_.embedded.pem_name);
            break;
        case 130:
            FUNC_2(VAR_0->_.name.name);
            FUNC_2(VAR_0->_.name.desc);
            break;
        case 129:
            FUNC_1(VAR_0->_.params);
            break;
        case 128:
            FUNC_1(VAR_0->_.pkey);
            break;
        case 133:
            FUNC_4(VAR_0->_.x509);
            break;
        case 132:
            FUNC_3(VAR_0->_.crl);
            break;
        }
        FUNC_2(VAR_0);
    }
}
