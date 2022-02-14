
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (void const*) ;
 void const* FUNC_1 (void const*,int) ;
 int FUNC_2 (void const*) ;
 unsigned int FUNC_3 (void const*) ;
 int FUNC_4 (void const*) ;

const void *FUNC_5(const void *VAR_0, int VAR_1, unsigned int VAR_2)
{
 unsigned VAR_3 = VAR_1 + FUNC_0(VAR_0);

 if ((VAR_3 < VAR_1)
     || ((VAR_3 + VAR_2) < VAR_3)
     || (VAR_3 + VAR_2) > FUNC_3(VAR_0))
  return ((void*)0);

 if (FUNC_4(VAR_0) >= 0x11)
  if (((VAR_1 + VAR_2) < VAR_1)
      || ((VAR_1 + VAR_2) > FUNC_2(VAR_0)))
   return ((void*)0);

 return FUNC_1(VAR_0, VAR_1);
}
