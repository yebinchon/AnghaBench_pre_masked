
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int uint16_t ;


 int VAR_0 ;
 int VAR_1 ;

int FUNC_0(uint32_t VAR_2,
        uint16_t VAR_3)
{
 if (VAR_1 & VAR_0) {

  if ((VAR_3 >= 0xc738 && VAR_3 <= 0xc73b) || VAR_3 == 0xcb20 || VAR_3 == 0xcf08 ||
      ((VAR_2 == 0x119f) &&

       (VAR_3 == 0x1b02 || VAR_3 == 0x1b50 ||

        VAR_3 == 0x1ba0 ||
        (VAR_3 >= 0x1bd0 && VAR_3 <= 0x1bd5))))
   return 1;
  if ((VAR_3 >= 0x1003 && VAR_3 <= 0x1017) ||
      ((VAR_2 == 0x119f) &&

       (VAR_3 == 0x1b33 || VAR_3 == 0x1b73 ||
        VAR_3 == 0x1b40 || VAR_3 == 0x1b41 ||
        VAR_3 == 0x1b60 || VAR_3 == 0x1b61 ||

        VAR_3 == 0x1b83 ||
        VAR_3 == 0x1b93 || VAR_3 == 0x1b94 ||

        VAR_3 == 0x1bb4 || VAR_3 == 0x1bb5 ||
        VAR_3 == 0x1bc4)))
   return 1;
 }

 return 0;
}
