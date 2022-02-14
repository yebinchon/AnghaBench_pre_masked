
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_ofwh_t ;
typedef int ofwh_t ;
typedef int ofwcell_t ;


 scalar_t__ FUNC_0 (int*) ;
 int FUNC_1 (char*,int) ;
 scalar_t__ FUNC_2 (int*) ;

__attribute__((used)) static int
FUNC_3(ofwh_t VAR_0)
{
 ofwcell_t VAR_1[] = {
  (ofwcell_t)"close",
  1,
  0,
  (u_ofwh_t)VAR_0
 };

 if (FUNC_0)(VAR_1)) {
  FUNC_1("ofw_close: devh=0x%x\n", VAR_0);
  return (1);
 }
 return (0);
}
