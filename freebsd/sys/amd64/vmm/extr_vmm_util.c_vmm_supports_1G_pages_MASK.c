
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (int,unsigned int*) ;

bool
FUNC_1(void)
{
 unsigned int VAR_1[4];






 if (VAR_0 >= 0x80000001) {
  FUNC_0(0x80000001, VAR_1);
  if (VAR_1[3] & (1 << 26))
   return (1);
 }
 return (0);
}
