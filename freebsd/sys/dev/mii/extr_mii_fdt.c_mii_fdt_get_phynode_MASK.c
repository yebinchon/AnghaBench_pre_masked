
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int xref ;
typedef size_t u_int ;
typedef int phandle_t ;
typedef int pcell_t ;


 scalar_t__ FUNC_0 (int,char const*,int *,int) ;
 int FUNC_1 (int ) ;
 size_t FUNC_2 (char const**) ;

__attribute__((used)) static phandle_t
FUNC_3(phandle_t VAR_0)
{
 static const char *VAR_1[] = {
     "phy-handle", "phy", "phy-device"
 };
 pcell_t VAR_2;
 u_int VAR_3;

 for (VAR_3 = 0; VAR_3 < FUNC_2(VAR_1); ++VAR_3) {
  if (FUNC_0(VAR_0, VAR_1[VAR_3], &VAR_2, sizeof(VAR_2)) > 0)
   return (FUNC_1(VAR_2));
 }
 return (-1);
}
