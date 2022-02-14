
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vector_str {size_t size; size_t capacity; int ** container; } ;


 int * FUNC_0 (int) ;
 int FUNC_1 (int *,size_t,char*,char const*) ;
 int FUNC_2 (struct vector_str*) ;

__attribute__((used)) static bool
FUNC_3(struct vector_str *VAR_0, const char *VAR_1, size_t VAR_2)
{

 if (VAR_0 == ((void*)0) || VAR_1 == ((void*)0))
  return (0);

 if (VAR_0->size == VAR_0->capacity && FUNC_2(VAR_0) == 0)
  return (0);

 if ((VAR_0->container[VAR_0->size] = FUNC_0(sizeof(char) * (VAR_2 + 1))) == ((void*)0))
  return (0);

 FUNC_1(VAR_0->container[VAR_0->size], VAR_2 + 1, "%s", VAR_1);

 ++VAR_0->size;

 return (1);
}
