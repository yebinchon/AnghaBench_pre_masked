
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 size_t FUNC_0 (void*,size_t,size_t) ;

__attribute__((used)) static inline size_t
FUNC_1 (void *VAR_0, void **VAR_1, size_t VAR_2, size_t VAR_3)
{
  size_t VAR_4 = FUNC_0 (VAR_0, VAR_2, VAR_3);
  while (1)
    {
      if (VAR_1[VAR_4] == VAR_0 || VAR_1[VAR_4] == 0)
 return VAR_4;
      else
 {
   ++VAR_4;
   if (VAR_4 == VAR_2)
     VAR_4 = 0;
 }
    }
}
