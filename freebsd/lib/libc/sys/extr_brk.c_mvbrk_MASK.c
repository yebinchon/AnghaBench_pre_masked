
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 void* FUNC_0 (void*) ;
 uintptr_t VAR_1 ;
 int VAR_2 ;
 uintptr_t VAR_3 ;

__attribute__((used)) static void *
FUNC_1(void *VAR_4)
{
 uintptr_t VAR_5;

 if ((uintptr_t)VAR_4 < VAR_3) {

  VAR_2 = VAR_0;
  return ((void *)-1);
 }
 if (FUNC_0(VAR_4) == (void *)-1)
  return ((void *)-1);
 VAR_5 = VAR_1;
 VAR_1 = (uintptr_t)VAR_4;
 return ((void *)VAR_5);
}
