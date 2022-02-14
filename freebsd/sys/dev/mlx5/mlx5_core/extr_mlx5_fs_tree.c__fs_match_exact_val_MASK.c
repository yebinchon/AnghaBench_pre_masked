
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;



__attribute__((used)) static bool FUNC_0(void *VAR_0, void *VAR_1, void *VAR_2, size_t VAR_3)
{
 unsigned int VAR_4;


 for (VAR_4 = 0; VAR_4 < VAR_3; VAR_4++, VAR_0++, VAR_1++, VAR_2++)
  if ((*((u8 *)VAR_1) & (*(u8 *)VAR_0)) !=
      ((*(u8 *)VAR_2) & (*(u8 *)VAR_0)))
   return 0;

 return 1;
}
