
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int reg ;
typedef int phandle_t ;
typedef int pcell_t ;


 int FUNC_0 (int) ;
 int FUNC_1 (char*) ;
 scalar_t__ FUNC_2 (int,char*,int*,int) ;
 int FUNC_3 (int) ;

__attribute__((used)) static phandle_t
FUNC_4(int VAR_0)
{
 phandle_t VAR_1;
 pcell_t VAR_2;

 VAR_1 = FUNC_1("/cpus");
 if (VAR_1 == -1)
  return (VAR_1);

 for (VAR_1 = FUNC_0(VAR_1); VAR_1 != 0; VAR_1 = FUNC_3(VAR_1)) {
  if (FUNC_2(VAR_1, "reg", &VAR_2, sizeof(VAR_2)) <= 0)
   continue;
  if (VAR_2 == VAR_0)
   return (VAR_1);
 }
 return (-1);
}
