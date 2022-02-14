
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int type ;
typedef int phandle_t ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*,int*,int) ;
 int FUNC_1 (int ,char*) ;
 char* FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (char const*,char*) ;

__attribute__((used)) static int
FUNC_5(device_t VAR_2)
{
 const char *VAR_3;
 phandle_t VAR_4;
 int VAR_5;

 VAR_3 = FUNC_2(VAR_2);
 VAR_4 = FUNC_3(VAR_2);
 if (FUNC_4(VAR_3, "SUNW,ffb") == 0) {
  if (FUNC_0(VAR_4, "board_type", &VAR_5, sizeof(VAR_5)) == -1)
   return (VAR_1);
  switch (VAR_5 & 7) {
  case 0x0:
   FUNC_1(VAR_2, "Creator");
   break;
  case 0x3:
   FUNC_1(VAR_2, "Creator3D");
   break;
  default:
   return (VAR_1);
  }
 } else if (FUNC_4(VAR_3, "SUNW,afb") == 0)
  FUNC_1(VAR_2, "Elite3D");
 else
  return (VAR_1);
 return (VAR_0);
}
