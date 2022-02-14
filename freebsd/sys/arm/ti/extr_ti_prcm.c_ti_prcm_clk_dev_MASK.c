
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ti_clock_dev {scalar_t__ id; } ;
typedef scalar_t__ clk_ident_t ;




 scalar_t__ VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (char*,scalar_t__) ;
 struct ti_clock_dev* VAR_1 ;
 int FUNC_2 () ;
 struct ti_clock_dev* VAR_2 ;

__attribute__((used)) static struct ti_clock_dev *
FUNC_3(clk_ident_t VAR_3)
{
 struct ti_clock_dev *VAR_4;





 VAR_4 = ((void*)0);
 switch(FUNC_2()) {
 }
 if (VAR_4 == ((void*)0))
  FUNC_0("No clock devmap found");
 while (VAR_4->id != VAR_0) {
  if (VAR_4->id == VAR_3) {
   return (VAR_4);
  }
  VAR_4++;
 }


 FUNC_1("ti_prcm: Failed to find clock device (%d)\n", VAR_3);
 return (((void*)0));
}
