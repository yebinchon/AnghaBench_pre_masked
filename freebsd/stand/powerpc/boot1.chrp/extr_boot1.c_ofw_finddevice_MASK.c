
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ofwh_t ;
typedef int ofwcell_t ;


 scalar_t__ FUNC_0 (int*) ;
 int FUNC_1 (char*,char const*) ;
 scalar_t__ FUNC_2 (int*) ;

__attribute__((used)) static ofwh_t
FUNC_3(const char *VAR_0)
{
 ofwcell_t VAR_1[] = {
  (ofwcell_t)"finddevice",
  1,
  1,
  (ofwcell_t)VAR_0,
  0
 };

 if (FUNC_0)(VAR_1)) {
  FUNC_1("ofw_finddevice: name=\"%s\"\n", VAR_0);
  return (1);
 }
 return (VAR_1[4]);
}
