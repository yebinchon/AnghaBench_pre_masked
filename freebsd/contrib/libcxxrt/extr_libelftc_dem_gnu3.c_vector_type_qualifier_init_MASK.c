
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vector_type_qualifier {int capacity; int * q_container; int ext_name; scalar_t__ size; } ;
typedef enum type_qualifier { ____Placeholder_type_qualifier } type_qualifier ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (int) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static int
FUNC_4(struct vector_type_qualifier *VAR_1)
{

 if (VAR_1 == ((void*)0))
  return (0);

 VAR_1->size = 0;
 VAR_1->capacity = VAR_0;

 if ((VAR_1->q_container = FUNC_2(sizeof(enum type_qualifier) * VAR_1->capacity))
     == ((void*)0))
  return (0);

 FUNC_0(VAR_1->q_container != ((void*)0));

 if (FUNC_3(&VAR_1->ext_name) == 0) {
  FUNC_1(VAR_1->q_container);
  return (0);
 }

 return (1);
}
