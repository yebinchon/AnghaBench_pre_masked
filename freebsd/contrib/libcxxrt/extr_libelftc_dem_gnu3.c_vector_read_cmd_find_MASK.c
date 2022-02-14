
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vector_read_cmd {size_t size; int* r_container; } ;
typedef enum read_cmd { ____Placeholder_read_cmd } read_cmd ;


 int VAR_0 ;

__attribute__((used)) static int
FUNC_0(struct vector_read_cmd *VAR_1, enum read_cmd VAR_2)
{
 size_t VAR_3;

 if (VAR_1 == ((void*)0) || VAR_2 == VAR_0)
  return (-1);

 for (VAR_3 = 0; VAR_3 < VAR_1->size; ++VAR_3)
  if (VAR_1->r_container[VAR_3] == VAR_2)
   return (1);

 return (0);
}
