
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vector_str {int capacity; int * container; scalar_t__ size; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int * FUNC_1 (int) ;

__attribute__((used)) static bool
FUNC_2(struct vector_str *VAR_1)
{

 if (VAR_1 == ((void*)0))
  return (0);

 VAR_1->size = 0;
 VAR_1->capacity = VAR_0;

 FUNC_0(VAR_1->capacity > 0);

 if ((VAR_1->container = FUNC_1(sizeof(char *) * VAR_1->capacity)) == ((void*)0))
  return (0);

 FUNC_0(VAR_1->container != ((void*)0));

 return (1);
}
