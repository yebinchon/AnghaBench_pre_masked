
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vector_read_cmd {size_t size; size_t capacity; struct read_cmd_item* r_container; } ;
struct read_cmd_item {int cmd; void* data; } ;
typedef enum read_cmd { ____Placeholder_read_cmd } read_cmd ;


 size_t VAR_0 ;
 int FUNC_0 (struct read_cmd_item*) ;
 struct read_cmd_item* FUNC_1 (int) ;

__attribute__((used)) static int
FUNC_2(struct vector_read_cmd *VAR_1, enum read_cmd VAR_2, void *VAR_3)
{
 struct read_cmd_item *VAR_4;
 size_t VAR_5;
 size_t VAR_6;

 if (VAR_1 == ((void*)0))
  return (0);

 if (VAR_1->size == VAR_1->capacity) {
  VAR_5 = VAR_1->capacity * VAR_0;
  if ((VAR_4 = FUNC_1(sizeof(*VAR_4) * VAR_5)) == ((void*)0))
   return (0);
  for (VAR_6 = 0; VAR_6 < VAR_1->size; ++VAR_6)
   VAR_4[VAR_6] = VAR_1->r_container[VAR_6];
  FUNC_0(VAR_1->r_container);
  VAR_1->r_container = VAR_4;
  VAR_1->capacity = VAR_5;
 }

 VAR_1->r_container[VAR_1->size].cmd = VAR_2;
 VAR_1->r_container[VAR_1->size].data = VAR_3;
 ++VAR_1->size;

 return (1);
}
