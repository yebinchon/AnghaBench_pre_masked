
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int uint16_t ;
typedef int ib_net32_t ;
typedef int ib_net16_t ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;

int FUNC_2(ib_net32_t VAR_0, ib_net16_t VAR_1)
{
 uint32_t VAR_2;
 uint16_t VAR_3;

 VAR_3 = FUNC_0(VAR_1);
 if ((VAR_3 >= 0xc738 && VAR_3 <= 0xc73b) || VAR_3 == 0xcb20 ||
     VAR_3 == 0xcf08 || VAR_1 == 0x1b02)
  return 1;
 if (VAR_3 >= 0x1003 && VAR_3 <= 0x1017)
  return 1;

 VAR_2 = FUNC_1(VAR_0);
 if (VAR_2 == 0x119f) {

  if (VAR_3 == 0x1b02 || VAR_3 == 0x1b50)
   return 1;

  if (VAR_3 == 0x1ba0 ||
      (VAR_3 >= 0x1bd0 && VAR_3 <= 0x1bd5))
   return 1;

  if (VAR_3 == 0x1b33 || VAR_3 == 0x1b73 ||
      VAR_3 == 0x1b40 || VAR_3 == 0x1b41 ||
      VAR_3 == 0x1b60 || VAR_3 == 0x1b61)
   return 1;

  if (VAR_3 == 0x1b83 ||
      VAR_3 == 0x1b93 || VAR_3 == 0x1b94)
   return 1;

  if (VAR_3 == 0x1bb4 || VAR_3 == 0x1bb5 ||
      VAR_3 == 0x1bc4)
   return 1;
 }
 return 0;
}
