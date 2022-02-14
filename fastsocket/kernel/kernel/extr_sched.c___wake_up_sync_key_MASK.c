
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int lock; } ;
typedef TYPE_1__ wait_queue_head_t ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*,unsigned int,int,int,void*) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;
 scalar_t__ FUNC_3 (int) ;

void FUNC_4(wait_queue_head_t *VAR_1, unsigned int VAR_2,
   int VAR_3, void *VAR_4)
{
 unsigned long VAR_5;
 int VAR_6 = VAR_0;

 if (FUNC_3(!VAR_1))
  return;

 if (FUNC_3(!VAR_3))
  VAR_6 = 0;

 FUNC_1(&VAR_1->lock, VAR_5);
 FUNC_0(VAR_1, VAR_2, VAR_3, VAR_6, VAR_4);
 FUNC_2(&VAR_1->lock, VAR_5);
}
