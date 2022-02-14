
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 void* FUNC_0 (size_t) ;

void *
FUNC_1(size_t *VAR_0, size_t VAR_1, size_t VAR_2)
{
 void *VAR_3;
 size_t VAR_4 = VAR_2;

 while (!(VAR_3 = FUNC_0(VAR_4))) {
  if ((VAR_4 >>= 1) <= VAR_1)
   VAR_4 = VAR_1;
 }
 if (VAR_3)
  *VAR_0 = VAR_4;
 return VAR_3;
}
