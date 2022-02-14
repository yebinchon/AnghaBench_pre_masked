
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int lock; } ;
typedef TYPE_1__ wait_queue_head_t ;


 int FUNC_0 (TYPE_1__*,unsigned int,int,int ,void*) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;

void FUNC_3(wait_queue_head_t *VAR_0, unsigned int VAR_1,
   int VAR_2, void *VAR_3)
{
 unsigned long VAR_4;

 FUNC_1(&VAR_0->lock, VAR_4);
 FUNC_0(VAR_0, VAR_1, VAR_2, 0, VAR_3);
 FUNC_2(&VAR_0->lock, VAR_4);
}
