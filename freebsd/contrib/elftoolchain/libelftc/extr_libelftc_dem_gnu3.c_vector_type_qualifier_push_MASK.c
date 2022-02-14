
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vector_type_qualifier {size_t size; size_t capacity; int* q_container; } ;
typedef enum type_qualifier { ____Placeholder_type_qualifier } type_qualifier ;


 size_t VAR_0 ;
 int FUNC_0 (int*) ;
 int* FUNC_1 (int) ;

__attribute__((used)) static int
FUNC_2(struct vector_type_qualifier *VAR_1,
    enum type_qualifier VAR_2)
{
 enum type_qualifier *VAR_3;
 size_t VAR_4;
 size_t VAR_5;

 if (VAR_1 == ((void*)0))
  return (0);

 if (VAR_1->size == VAR_1->capacity) {
  VAR_4 = VAR_1->capacity * VAR_0;
  if ((VAR_3 = FUNC_1(sizeof(enum type_qualifier) * VAR_4))
      == ((void*)0))
   return (0);
  for (VAR_5 = 0; VAR_5 < VAR_1->size; ++VAR_5)
   VAR_3[VAR_5] = VAR_1->q_container[VAR_5];
  FUNC_0(VAR_1->q_container);
  VAR_1->q_container = VAR_3;
  VAR_1->capacity = VAR_4;
 }

 VAR_1->q_container[VAR_1->size] = VAR_2;
 ++VAR_1->size;

 return (1);
}
