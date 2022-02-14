
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct hx509_private_key_ops {int (* get_spki ) (int ,TYPE_1__*,int *) ;} ;
typedef TYPE_1__* hx509_private_key ;
typedef int hx509_context ;
struct TYPE_4__ {struct hx509_private_key_ops* ops; } ;
typedef int SubjectPublicKeyInfo ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int,char*) ;
 int FUNC_1 (int ,TYPE_1__*,int *) ;

int
FUNC_2(hx509_context VAR_1,
   hx509_private_key VAR_2,
   SubjectPublicKeyInfo *VAR_3)
{
    const struct hx509_private_key_ops *VAR_4 = VAR_2->ops;
    if (VAR_4 == ((void*)0) || VAR_4->get_spki == ((void*)0)) {
 FUNC_0(VAR_1, 0, VAR_0,
          "Private key have no key2SPKI function");
 return VAR_0;
    }
    return (*VAR_4->get_spki)(VAR_1, VAR_2, VAR_3);
}
