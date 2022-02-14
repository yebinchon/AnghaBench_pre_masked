
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vector_read_cmd {size_t size; TYPE_1__* r_container; } ;
struct TYPE_2__ {int * data; int cmd; } ;


 int VAR_0 ;

__attribute__((used)) static int
FUNC_0(struct vector_read_cmd *VAR_1)
{

 if (VAR_1 == ((void*)0) || VAR_1->size == 0)
  return (0);

 --VAR_1->size;
 VAR_1->r_container[VAR_1->size].cmd = VAR_0;
 VAR_1->r_container[VAR_1->size].data = ((void*)0);

 return (1);
}
