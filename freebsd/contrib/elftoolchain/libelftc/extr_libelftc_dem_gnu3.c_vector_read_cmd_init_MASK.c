
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vector_read_cmd {int capacity; int * r_container; scalar_t__ size; } ;


 int VAR_0 ;
 int * FUNC_0 (int) ;

__attribute__((used)) static int
FUNC_1(struct vector_read_cmd *VAR_1)
{

 if (VAR_1 == ((void*)0))
  return (0);

 VAR_1->size = 0;
 VAR_1->capacity = VAR_0;

 if ((VAR_1->r_container = FUNC_0(sizeof(*VAR_1->r_container) * VAR_1->capacity))
     == ((void*)0))
  return (0);

 return (1);
}
