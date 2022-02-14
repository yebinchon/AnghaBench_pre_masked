
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (int,size_t) ;
 void* FUNC_1 (int) ;

void *
FUNC_2(size_t VAR_0, size_t VAR_1)
{
 void *VAR_2, *VAR_3;

 if (VAR_1 < sizeof(void *))
  VAR_1 = sizeof(void *);

 VAR_2 = FUNC_1(VAR_0 + sizeof(void *) + VAR_1 - 1);
 VAR_3 = (void *)FUNC_0((uintptr_t)VAR_2 + sizeof(void *), VAR_1);
 *(void **)((uintptr_t)VAR_3 - sizeof(void *)) = VAR_2;
 return (VAR_3);
}
