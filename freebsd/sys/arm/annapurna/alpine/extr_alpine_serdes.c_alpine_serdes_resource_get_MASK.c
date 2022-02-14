
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t uint32_t ;


 size_t VAR_0 ;
 int * VAR_1 ;
 scalar_t__* VAR_2 ;

void *
FUNC_0(uint32_t VAR_3)
{
 void *VAR_4;

 VAR_4 = ((void*)0);
 if (VAR_3 >= VAR_0)
  return (((void*)0));

 if (VAR_1 != ((void*)0))
  VAR_4 = (void *)((uintptr_t)VAR_1 +
      VAR_2[VAR_3]);

 return (VAR_4);
}
