
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_5__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef TYPE_1__* alloc_pool_list ;
typedef TYPE_2__* alloc_pool ;
struct TYPE_9__ {scalar_t__ id; } ;
struct TYPE_8__ {int data; } ;
struct TYPE_7__ {scalar_t__ id; scalar_t__ elts_free; scalar_t__ elts_allocated; TYPE_1__* free_list; scalar_t__ elt_size; } ;
struct TYPE_6__ {struct TYPE_6__* next; } ;


 TYPE_5__* FUNC_0 (void*) ;
 int VAR_0 ;
 int FUNC_1 (int) ;
 int FUNC_2 (void*,int,scalar_t__) ;
 scalar_t__ FUNC_3 (int ,int ) ;
 TYPE_3__ VAR_1 ;

void
FUNC_4 (alloc_pool VAR_2, void *VAR_3)
{
  alloc_pool_list VAR_4;

  FUNC_1 (VAR_3);
  FUNC_1 (VAR_2->elts_free < VAR_2->elts_allocated);


  VAR_4 = (alloc_pool_list) VAR_3;
  VAR_4->next = VAR_2->free_list;
  VAR_2->free_list = VAR_4;
  VAR_2->elts_free++;
}
