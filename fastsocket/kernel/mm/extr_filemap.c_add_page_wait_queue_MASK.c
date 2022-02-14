
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int wait_queue_t ;
struct TYPE_4__ {int lock; } ;
typedef TYPE_1__ wait_queue_head_t ;
struct page {int dummy; } ;


 int FUNC_0 (TYPE_1__*,int *) ;
 TYPE_1__* FUNC_1 (struct page*) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;

void FUNC_4(struct page *VAR_0, wait_queue_t *VAR_1)
{
 wait_queue_head_t *VAR_2 = FUNC_1(VAR_0);
 unsigned long VAR_3;

 FUNC_2(&VAR_2->lock, VAR_3);
 FUNC_0(VAR_2, VAR_1);
 FUNC_3(&VAR_2->lock, VAR_3);
}
