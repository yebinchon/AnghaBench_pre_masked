
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (int) ;
 int VAR_2 ;
 int FUNC_1 (int,int*,unsigned int) ;

int
FUNC_2(int VAR_3, int *VAR_4, size_t VAR_5)
{
 unsigned int VAR_6, VAR_7, VAR_8;
 int VAR_9, VAR_10;

 if (VAR_5 == 0 || VAR_4 == ((void*)0)) {
  VAR_2 = VAR_0;
  return (-1);
 }

 VAR_9 = VAR_6 = VAR_7 = 0;
 while (VAR_6 < VAR_5) {
  if (VAR_1 < VAR_5 - VAR_6)
   VAR_7 = VAR_1;
  else
   VAR_7 = VAR_5 - VAR_6;
  VAR_9 = FUNC_1(VAR_3, VAR_4 + VAR_6, VAR_7);
  if (VAR_9 != 0) {

   VAR_10 = VAR_2;
   for (VAR_8 = 0; VAR_8 < VAR_6; VAR_8++)
    FUNC_0(VAR_4[VAR_8]);
   VAR_2 = VAR_10;
   break;
  }
  VAR_6 += VAR_7;
 }

 return (VAR_9);
}
