
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vector_read_cmd {struct read_cmd_item* r_container; scalar_t__ size; } ;
struct read_cmd_item {int cmd; } ;
typedef enum read_cmd { ____Placeholder_read_cmd } read_cmd ;


 int VAR_0 ;

__attribute__((used)) static struct read_cmd_item *
FUNC_0(struct vector_read_cmd *VAR_1, enum read_cmd VAR_2)
{
 int VAR_3;

 if (VAR_1 == ((void*)0) || VAR_2 == VAR_0)
  return (((void*)0));

 for (VAR_3 = (int) VAR_1->size - 1; VAR_3 >= 0; VAR_3--)
  if (VAR_1->r_container[VAR_3].cmd == VAR_2)
   return (&VAR_1->r_container[VAR_3]);

 return (((void*)0));
}
