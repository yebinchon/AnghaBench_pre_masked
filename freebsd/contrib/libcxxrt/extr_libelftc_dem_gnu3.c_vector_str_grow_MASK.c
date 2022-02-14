
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vector_str {size_t capacity; size_t size; char** container; } ;


 size_t VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (char**) ;
 char** FUNC_2 (int) ;

__attribute__((used)) static bool
FUNC_3(struct vector_str *VAR_1)
{
 size_t VAR_2, VAR_3;
 char **VAR_4;

 if (VAR_1 == ((void*)0))
  return (0);

 FUNC_0(VAR_1->capacity > 0);

 VAR_3 = VAR_1->capacity * VAR_0;

 FUNC_0(VAR_3 > VAR_1->capacity);

 if ((VAR_4 = FUNC_2(sizeof(char *) * VAR_3)) == ((void*)0))
  return (0);

 for (VAR_2 = 0; VAR_2 < VAR_1->size; ++VAR_2)
  VAR_4[VAR_2] = VAR_1->container[VAR_2];

 FUNC_1(VAR_1->container);

 VAR_1->container = VAR_4;
 VAR_1->capacity = VAR_3;

 return (1);
}
