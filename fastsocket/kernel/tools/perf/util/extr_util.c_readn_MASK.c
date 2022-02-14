
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int,void*,size_t) ;

int FUNC_1(int VAR_0, void *VAR_1, size_t VAR_2)
{
 void *VAR_3 = VAR_1;

 while (VAR_2) {
  int VAR_4 = FUNC_0(VAR_0, VAR_1, VAR_2);

  if (VAR_4 <= 0)
   return VAR_4;

  VAR_2 -= VAR_4;
  VAR_1 += VAR_4;
 }

 return VAR_1 - VAR_3;
}
