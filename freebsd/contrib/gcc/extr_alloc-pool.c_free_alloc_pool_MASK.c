
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct alloc_pool_descriptor {int current; } ;
typedef TYPE_1__* alloc_pool_list ;
typedef TYPE_1__* alloc_pool ;
struct TYPE_7__ {scalar_t__ block_size; struct TYPE_7__* next; struct TYPE_7__* block_list; int name; } ;


 struct alloc_pool_descriptor* FUNC_0 (int ) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*,int,int) ;

void
FUNC_4 (alloc_pool VAR_0)
{
  alloc_pool_list VAR_1, VAR_2;




  FUNC_2 (VAR_0);


  for (VAR_1 = VAR_0->block_list; VAR_1 != ((void*)0); VAR_1 = VAR_2)
    {
      VAR_2 = VAR_1->next;
      FUNC_1 (VAR_1);



    }




  FUNC_1 (VAR_0);
}
