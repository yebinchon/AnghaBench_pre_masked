
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (void*) ;

void
FUNC_1(void *VAR_0)
{
 void *VAR_1;
 uintptr_t VAR_2;

 if (VAR_0 == ((void*)0))
  return;
 VAR_2 = (uintptr_t)VAR_0;
 VAR_2 -= sizeof(void *);
 VAR_1 = *(void **)VAR_2;
 FUNC_0(VAR_1);
}
