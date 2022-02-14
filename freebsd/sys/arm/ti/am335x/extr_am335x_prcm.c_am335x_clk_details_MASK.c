
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct am335x_clk_details {scalar_t__ id; } ;
typedef scalar_t__ clk_ident_t ;


 scalar_t__ VAR_0 ;
 struct am335x_clk_details* VAR_1 ;

__attribute__((used)) static struct am335x_clk_details*
FUNC_0(clk_ident_t VAR_2)
{
 struct am335x_clk_details *VAR_3;

 for (VAR_3 = VAR_1; VAR_3->id != VAR_0; VAR_3++) {
  if (VAR_2 == VAR_3->id)
   return (VAR_3);
 }

 return ((void*)0);
}
