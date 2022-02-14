
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int wait_queue_t ;
struct TYPE_4__ {int wait; int curr_nr; int lock; int pool_data; void* (* alloc ) (int,int ) ;} ;
typedef TYPE_1__ mempool_t ;
typedef int gfp_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int *,int *,int ) ;
 void* FUNC_6 (TYPE_1__*) ;
 int FUNC_7 () ;
 int FUNC_8 (int *,unsigned long) ;
 int FUNC_9 (int *,unsigned long) ;
 void* FUNC_10 (int,int ) ;

void * FUNC_11(mempool_t *VAR_7, gfp_t VAR_8)
{
 void *VAR_9;
 unsigned long VAR_10;
 wait_queue_t VAR_11;
 gfp_t VAR_12;

 FUNC_4(VAR_8 & VAR_6);

 VAR_8 |= VAR_3;
 VAR_8 |= VAR_4;
 VAR_8 |= VAR_5;

 VAR_12 = VAR_8 & ~(VAR_6|VAR_2);

repeat_alloc:

 VAR_9 = VAR_7->alloc(VAR_12, VAR_7->pool_data);
 if (FUNC_3(VAR_9 != ((void*)0)))
  return VAR_9;

 FUNC_8(&VAR_7->lock, VAR_10);
 if (FUNC_3(VAR_7->curr_nr)) {
  VAR_9 = FUNC_6(VAR_7);
  FUNC_9(&VAR_7->lock, VAR_10);
  return VAR_9;
 }
 FUNC_9(&VAR_7->lock, VAR_10);


 if (!(VAR_8 & VAR_6))
  return ((void*)0);


 VAR_12 = VAR_8;
 FUNC_1(&VAR_11);
 FUNC_5(&VAR_7->wait, &VAR_11, VAR_1);
 FUNC_7();
 if (!VAR_7->curr_nr) {




  FUNC_2(5*VAR_0);
 }
 FUNC_0(&VAR_7->wait, &VAR_11);

 goto repeat_alloc;
}
