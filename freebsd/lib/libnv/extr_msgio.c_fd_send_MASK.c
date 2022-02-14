
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int,int const*,unsigned int) ;

int
FUNC_1(int VAR_3, const int *VAR_4, size_t VAR_5)
{
 unsigned int VAR_6, VAR_7;
 int VAR_8;

 if (VAR_5 == 0 || VAR_4 == ((void*)0)) {
  VAR_2 = VAR_0;
  return (-1);
 }

 VAR_8 = VAR_6 = VAR_7 = 0;
 while (VAR_6 < VAR_5) {
  if (VAR_1 < VAR_5 - VAR_6)
   VAR_7 = VAR_1;
  else
   VAR_7 = VAR_5 - VAR_6;
  VAR_8 = FUNC_0(VAR_3, VAR_4 + VAR_6, VAR_7);
  if (VAR_8 != 0)
   break;
  VAR_6 += VAR_7;
 }

 return (VAR_8);
}
