
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gss_krb5_enctype {int etype; } ;


 int VAR_0 ;
 struct gss_krb5_enctype const* VAR_1 ;

__attribute__((used)) static const struct gss_krb5_enctype *
FUNC_0(int VAR_2)
{
 int VAR_3;
 for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3++)
  if (VAR_1[VAR_3].etype == VAR_2)
   return &VAR_1[VAR_3];
 return ((void*)0);
}
