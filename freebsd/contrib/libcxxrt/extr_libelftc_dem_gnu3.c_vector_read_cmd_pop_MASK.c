
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vector_read_cmd {size_t size; int * r_container; } ;


 int VAR_0 ;

__attribute__((used)) static int
FUNC_0(struct vector_read_cmd *VAR_1)
{

 if (VAR_1 == ((void*)0) || VAR_1->size == 0)
  return (0);

 --VAR_1->size;
 VAR_1->r_container[VAR_1->size] = VAR_0;

 return (1);
}
