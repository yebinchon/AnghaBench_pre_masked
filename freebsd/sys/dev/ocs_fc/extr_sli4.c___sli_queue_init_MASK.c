
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef size_t uint32_t ;
struct TYPE_8__ {int if_type; int os; } ;
typedef TYPE_1__ sli4_t ;
struct TYPE_10__ {TYPE_2__* virt; scalar_t__ size; } ;
struct TYPE_9__ {size_t size; size_t length; size_t type; size_t proc_limit; int posted_limit; int lock; TYPE_4__ dma; } ;
typedef TYPE_2__ sli4_queue_t ;
typedef int int32_t ;


 int VAR_0 ;
 int VAR_1 ;
 int * VAR_2 ;

 scalar_t__ FUNC_0 (int ,TYPE_4__*,size_t,size_t) ;
 int FUNC_1 (int ,TYPE_4__*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int *,char*,int ,int ,int *) ;
 int FUNC_4 (int ,char*,int ) ;
 int FUNC_5 (TYPE_2__*,int ,size_t) ;

int32_t
FUNC_6(sli4_t *VAR_3, sli4_queue_t *VAR_4, uint32_t VAR_5,
  size_t VAR_6, uint32_t VAR_7, uint32_t VAR_8)
{

 if ((VAR_4->dma.virt == ((void*)0)) || (VAR_6 != VAR_4->size) || (VAR_7 != VAR_4->length)) {
  if (VAR_4->dma.size) {
   FUNC_1(VAR_3->os, &VAR_4->dma);
  }

  FUNC_5(VAR_4, 0, sizeof(sli4_queue_t));

  if (FUNC_0(VAR_3->os, &VAR_4->dma, VAR_6 * VAR_7, VAR_8)) {
   FUNC_4(VAR_3->os, "%s allocation failed\n", VAR_2[VAR_5]);
   return -1;
  }

  FUNC_5(VAR_4->dma.virt, 0, VAR_6 * VAR_7);

  FUNC_3(VAR_3->os, &VAR_4->lock, "%s lock[%d:%p]",
   VAR_2[VAR_5], FUNC_2(VAR_3->os), &VAR_4->lock);

  VAR_4->type = VAR_5;
  VAR_4->size = VAR_6;
  VAR_4->length = VAR_7;


  VAR_4->proc_limit = VAR_7 / 2;

  switch(VAR_4->type) {
  case 128:
   VAR_4->posted_limit = VAR_4->length / 2;
   break;
  default:
   if ((VAR_3->if_type == VAR_0) ||
       (VAR_3->if_type == VAR_1)) {

    VAR_4->posted_limit = 8;
   } else {
    VAR_4->posted_limit = 64;
   }
   break;
  }
 }

 return 0;
}
