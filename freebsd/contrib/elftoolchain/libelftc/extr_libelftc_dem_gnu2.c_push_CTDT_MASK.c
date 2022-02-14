
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vector_str {int size; int * container; } ;


 int FUNC_0 (struct vector_str*,int ) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct vector_str*,char const*,size_t) ;

__attribute__((used)) static bool
FUNC_3(const char *VAR_0, size_t VAR_1, struct vector_str *VAR_2)
{

 if (VAR_0 == ((void*)0) || VAR_1 == 0 || VAR_2 == ((void*)0))
  return (0);

 if (FUNC_2(VAR_2, VAR_0, VAR_1) == 0)
  return (0);

 FUNC_1(VAR_2->size > 1);

 return (FUNC_0(VAR_2, VAR_2->container[VAR_2->size - 2]));
}
