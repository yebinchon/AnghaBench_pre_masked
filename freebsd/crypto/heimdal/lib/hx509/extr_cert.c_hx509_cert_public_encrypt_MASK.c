
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int hx509_context ;
typedef TYPE_1__* hx509_cert ;
typedef int heim_oid ;
typedef int heim_octet_string ;
struct TYPE_3__ {int data; } ;


 int FUNC_0 (int ,int const*,int ,int *,int *) ;

int
FUNC_1(hx509_context VAR_0,
      const heim_octet_string *VAR_1,
      const hx509_cert VAR_2,
      heim_oid *VAR_3,
      heim_octet_string *VAR_4)
{
    return FUNC_0(VAR_0,
     VAR_1, VAR_2->data,
     VAR_3, VAR_4);
}
