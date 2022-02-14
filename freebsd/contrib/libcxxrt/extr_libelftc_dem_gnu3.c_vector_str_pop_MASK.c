
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vector_str {size_t size; int ** container; } ;


 int FUNC_0 (int *) ;

__attribute__((used)) static bool
FUNC_1(struct vector_str *VAR_0)
{

 if (VAR_0 == ((void*)0))
  return (0);

 if (VAR_0->size == 0)
  return (1);

 --VAR_0->size;

 FUNC_0(VAR_0->container[VAR_0->size]);
 VAR_0->container[VAR_0->size] = ((void*)0);

 return (1);
}
