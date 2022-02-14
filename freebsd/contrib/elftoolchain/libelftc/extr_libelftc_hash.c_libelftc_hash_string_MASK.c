
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 unsigned int VAR_0 ;
 unsigned int VAR_1 ;

unsigned int
FUNC_0(const char *VAR_2)
{
 char VAR_3;
 unsigned int VAR_4;

 for (VAR_4 = VAR_0; (VAR_3 = *VAR_2) != '\0'; VAR_2++) {
  VAR_4 ^= VAR_3;
  VAR_4 *= VAR_1;
 }

 return (VAR_4);
}
