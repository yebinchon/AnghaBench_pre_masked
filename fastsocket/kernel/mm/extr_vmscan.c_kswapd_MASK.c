
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct task_struct {int flags; struct reclaim_state* reclaim_state; } ;
struct reclaim_state {int reclaimed_slab; } ;
struct cpumask {int dummy; } ;
struct TYPE_5__ {unsigned long kswapd_max_order; int node_id; int kswapd_wait; } ;
typedef TYPE_1__ pg_data_t ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (TYPE_1__*,unsigned long) ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct cpumask const*) ;
 struct cpumask* FUNC_4 (int ) ;
 struct task_struct* VAR_10 ;
 int FUNC_5 (int *,int *) ;
 int FUNC_6 (struct task_struct*) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int *,int *,int ) ;
 int FUNC_9 () ;
 long FUNC_10 (int) ;
 int FUNC_11 (struct task_struct*,struct cpumask const*) ;
 int FUNC_12 () ;
 int FUNC_13 (TYPE_1__*,int ) ;
 int FUNC_14 (TYPE_1__*,unsigned long,long) ;
 int FUNC_15 (int ) ;
 int FUNC_16 (int ,unsigned long) ;
 int FUNC_17 () ;
 int VAR_11 ;

__attribute__((used)) static int FUNC_18(void *VAR_12)
{
 unsigned long VAR_13;
 pg_data_t *VAR_14 = (pg_data_t*)VAR_12;
 struct task_struct *VAR_15 = VAR_10;
 FUNC_0(VAR_11);
 struct reclaim_state VAR_16 = {
  .reclaimed_slab = 0,
 };
 const struct cpumask *VAR_17 = FUNC_4(VAR_14->node_id);

 FUNC_7(VAR_0);

 if (!FUNC_3(VAR_17))
  FUNC_11(VAR_15, VAR_17);
 VAR_10->reclaim_state = &VAR_16;
 VAR_15->flags |= VAR_5 | VAR_6 | VAR_4;
 FUNC_12();

 VAR_13 = 0;
 for ( ; ; ) {
  unsigned long VAR_18;

  FUNC_8(&VAR_14->kswapd_wait, &VAR_11, VAR_7);
  VAR_18 = VAR_14->kswapd_max_order;
  VAR_14->kswapd_max_order = 0;
  if (VAR_13 < VAR_18) {




   VAR_13 = VAR_18;
  } else {
   if (!FUNC_6(VAR_10)) {
    long VAR_19 = 0;


    if (!FUNC_14(VAR_14, VAR_13, VAR_19)) {
     VAR_19 = FUNC_10(VAR_1/10);
     FUNC_5(&VAR_14->kswapd_wait, &VAR_11);
     FUNC_8(&VAR_14->kswapd_wait, &VAR_11, VAR_7);
    }






    if (!FUNC_14(VAR_14, VAR_13, VAR_19)) {
     FUNC_15(VAR_14->node_id);
     FUNC_13(VAR_14,
      VAR_8);

     FUNC_9();
     FUNC_13(VAR_14,
      VAR_9);
    } else {
     if (VAR_19)
      FUNC_2(VAR_3);
     else
      FUNC_2(VAR_2);
    }
   }

   VAR_13 = VAR_14->kswapd_max_order;
  }
  FUNC_5(&VAR_14->kswapd_wait, &VAR_11);

  if (!FUNC_17()) {



   FUNC_16(VAR_14->node_id, VAR_13);
   FUNC_1(VAR_14, VAR_13);
  }
 }
 return 0;
}
