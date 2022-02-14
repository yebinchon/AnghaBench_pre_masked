
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int ;
typedef int ofwcell_t ;


 scalar_t__ FUNC_0 (int*) ;
 int FUNC_1 (char*,void*,size_t) ;
 scalar_t__ FUNC_2 (int*) ;

__attribute__((used)) static int
FUNC_3(void *VAR_0, size_t VAR_1, u_int VAR_2)
{
 ofwcell_t VAR_3[] = {
  (ofwcell_t)"claim",
  3,
  1,
  (ofwcell_t)VAR_0,
  VAR_1,
  VAR_2,
  0,
  0
 };

 if (FUNC_0)(VAR_3)) {
  FUNC_1("ofw_claim: virt=%p len=%u\n", VAR_0, VAR_1);
  return (1);
 }

 return (0);
}
