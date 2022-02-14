
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct krb5_encryption_class {int ec_type; } ;


 struct krb5_encryption_class** VAR_0 ;

struct krb5_encryption_class *
FUNC_0(int VAR_1)
{
 int VAR_2;

 for (VAR_2 = 0; VAR_0[VAR_2]; VAR_2++) {
  if (VAR_0[VAR_2]->ec_type == VAR_1)
   return (VAR_0[VAR_2]);
 }
 return (((void*)0));
}
