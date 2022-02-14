
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef TYPE_1__* basic_block ;
struct TYPE_4__ {void* aux; } ;



__attribute__((used)) static basic_block
FUNC_0 (basic_block VAR_0)
{
  basic_block VAR_1 = VAR_0, VAR_2;

  while ((basic_block) VAR_1->aux != VAR_1)
    VAR_1 = (basic_block) VAR_1->aux;


  while ((basic_block) VAR_0->aux != VAR_1)
    {
      VAR_2 = (basic_block) VAR_0->aux;
      VAR_0->aux = (void *) VAR_1;
      VAR_0 = VAR_2;
    }
  return VAR_1;
}
