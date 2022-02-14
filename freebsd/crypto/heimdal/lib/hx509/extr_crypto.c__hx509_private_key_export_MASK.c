
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef TYPE_2__* hx509_private_key ;
typedef int hx509_key_format_t ;
typedef int hx509_context ;
typedef int heim_octet_string ;
struct TYPE_6__ {TYPE_1__* ops; } ;
struct TYPE_5__ {int (* export ) (int ,TYPE_2__* const,int ,int *) ;} ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,TYPE_2__* const,int ,int *) ;

int
FUNC_2(hx509_context VAR_1,
     const hx509_private_key VAR_2,
     hx509_key_format_t VAR_3,
     heim_octet_string *VAR_4)
{
    if (VAR_2->ops->export == ((void*)0)) {
 FUNC_0(VAR_1);
 return VAR_0;
    }
    return (*VAR_2->ops->export)(VAR_1, VAR_2, VAR_3, VAR_4);
}
