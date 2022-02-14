
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct printer {int type; int * f; } ;
typedef int * if_printer ;


 int VAR_0 ;
 int VAR_1 ;
 struct printer* VAR_2 ;

if_printer
FUNC_0(int VAR_3)
{
 const struct printer *VAR_4;

 for (VAR_4 = VAR_2; VAR_4->f; ++VAR_4)
  if (VAR_3 == VAR_4->type)
   return VAR_4->f;
 return ((void*)0);

}
