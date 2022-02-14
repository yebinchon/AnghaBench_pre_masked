
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef TYPE_2__* hx509_crypto ;
typedef int hx509_context ;
typedef int heim_octet_string ;
struct TYPE_6__ {TYPE_1__* cipher; } ;
struct TYPE_5__ {int (* get_params ) (int ,TYPE_2__*,int const*,int *) ;} ;


 int FUNC_0 (int ,TYPE_2__*,int const*,int *) ;

int
FUNC_1(hx509_context VAR_0,
   hx509_crypto VAR_1,
   const heim_octet_string *VAR_2,
   heim_octet_string *VAR_3)
{
    return (*VAR_1->cipher->get_params)(VAR_0, VAR_1, VAR_2, VAR_3);
}
