
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (void*,void const*,size_t) ;

void * FUNC_1(void *VAR_0, const void *VAR_1, size_t VAR_2)
{
 if (VAR_0 < VAR_1)
  FUNC_0(VAR_0, VAR_1, VAR_2);
 else {

  char *VAR_3 = (char *) VAR_0 + VAR_2;
  const char *VAR_4 = (const char *) VAR_1 + VAR_2;
  while (VAR_2--)
   *--VAR_3 = *--VAR_4;
 }
 return VAR_0;
}
