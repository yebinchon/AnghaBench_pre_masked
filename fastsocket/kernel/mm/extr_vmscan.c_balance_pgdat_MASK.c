
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct zone {int present_pages; int pages_scanned; int prev_priority; } ;
struct scan_control {int may_unmap; int may_swap; int order; int nr_reclaimed; int may_writepage; int gfp_mask; scalar_t__ nr_scanned; int * target_mem_cgroup; int swappiness; int nr_to_reclaim; } ;
struct reclaim_state {scalar_t__ reclaimed_slab; } ;
struct TYPE_5__ {int nr_zones; int node_id; struct zone* node_zones; } ;
typedef TYPE_1__ pg_data_t ;
struct TYPE_6__ {struct reclaim_state* reclaim_state; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_0 (struct zone*,struct scan_control*,int) ;
 int FUNC_1 (struct zone*,int,int ,int ,int*) ;
 int FUNC_2 () ;
 int FUNC_3 (int ,int) ;
 int FUNC_4 (int ) ;
 TYPE_3__* VAR_13 ;
 int FUNC_5 () ;
 scalar_t__ FUNC_6 (struct zone*) ;
 int VAR_14 ;
 int FUNC_7 (struct zone*) ;
 int FUNC_8 (struct zone*,int,int ,int,int) ;
 unsigned long FUNC_9 (int ,int) ;
 scalar_t__ FUNC_10 (struct zone*) ;
 int FUNC_11 (struct zone*,int) ;
 int FUNC_12 (struct zone*) ;
 int FUNC_13 (scalar_t__,int ,unsigned long) ;
 int FUNC_14 (int,struct zone*,struct scan_control*) ;
 int FUNC_15 (TYPE_1__*,unsigned long) ;
 int FUNC_16 () ;
 int VAR_15 ;
 int FUNC_17 (struct zone*,int ) ;
 int FUNC_18 (struct zone*) ;
 scalar_t__ FUNC_19 (struct zone*) ;
 int FUNC_20 (struct zone*) ;
 int FUNC_21 (struct zone*,int ) ;
 int FUNC_22 (struct zone*,int,scalar_t__,int,int ) ;
 int FUNC_23 (struct zone*,int,scalar_t__,int,int ) ;

__attribute__((used)) static unsigned long FUNC_24(pg_data_t *VAR_16, int VAR_17)
{
 int VAR_18;
 int VAR_19;
 int VAR_20;
 unsigned long VAR_21;
 unsigned long VAR_22 = 0;
 struct reclaim_state *VAR_23 = VAR_13->reclaim_state;
 struct scan_control VAR_24 = {
  .gfp_mask = VAR_2,
  .may_unmap = 1,
  .may_swap = 1,




  .nr_to_reclaim = VAR_10,
  .swappiness = VAR_15,
  .order = VAR_17,
  .target_mem_cgroup = ((void*)0),
 };





 int VAR_25[VAR_6];

loop_again:
 VAR_21 = 0;
 VAR_24.nr_reclaimed = 0;
 VAR_24.may_writepage = !VAR_14;
 FUNC_4(VAR_7);

 for (VAR_20 = 0; VAR_20 < VAR_16->nr_zones; VAR_20++)
  VAR_25[VAR_20] = VAR_1;

 for (VAR_19 = VAR_1; VAR_19 >= 0; VAR_19--) {
  int VAR_26 = 0;
  unsigned long VAR_27 = 0;
  int VAR_28 = 0;


  if (!VAR_19)
   FUNC_5();

  VAR_18 = 1;





  for (VAR_20 = VAR_16->nr_zones - 1; VAR_20 >= 0; VAR_20--) {
   struct zone *VAR_29 = VAR_16->node_zones + VAR_20;

   if (!FUNC_12(VAR_29))
    continue;

   if (FUNC_19(VAR_29) &&
       VAR_19 != VAR_1)
    continue;





   FUNC_0(VAR_29, &VAR_24, VAR_19);

   if (!FUNC_23(VAR_29, VAR_17,
     FUNC_6(VAR_29), 0, 0)) {
    VAR_26 = VAR_20;
    break;
   }
  }
  if (VAR_20 < 0)
   goto out;

  for (VAR_20 = 0; VAR_20 <= VAR_26; VAR_20++) {
   struct zone *VAR_30 = VAR_16->node_zones + VAR_20;

   VAR_27 += FUNC_20(VAR_30);
  }
  for (VAR_20 = 0; VAR_20 <= VAR_26; VAR_20++) {
   struct zone *VAR_31 = VAR_16->node_zones + VAR_20;
   int VAR_32;
   int VAR_33, VAR_34;
   unsigned long VAR_35;
   bool VAR_36 = 0;

   if (!FUNC_12(VAR_31))
    continue;

   if (FUNC_19(VAR_31) &&
     VAR_19 != VAR_1)
    continue;

   if (!FUNC_22(VAR_31, VAR_17,
     FUNC_6(VAR_31), VAR_26, 0))
    VAR_18 = 0;
   VAR_25[VAR_20] = VAR_19;
   VAR_24.nr_scanned = 0;
   FUNC_11(VAR_31, VAR_19);

   VAR_33 = VAR_16->node_id;
   VAR_34 = FUNC_18(VAR_31);




   FUNC_8(VAR_31, VAR_17, VAR_24.gfp_mask,
       VAR_33, VAR_34);
   VAR_35 = FUNC_9(FUNC_7(VAR_31),
    (VAR_31->present_pages +
     VAR_5-1) /
    VAR_5);
   if (!FUNC_23(VAR_31, VAR_17,
     FUNC_6(VAR_31) + VAR_35,
     VAR_26, 0))
    FUNC_14(VAR_19, VAR_31, &VAR_24);
   VAR_23->reclaimed_slab = 0;
   VAR_32 = FUNC_13(VAR_24.nr_scanned, VAR_2,
      VAR_27);
   VAR_24.nr_reclaimed += VAR_23->reclaimed_slab;
   VAR_21 += VAR_24.nr_scanned;

   if (FUNC_19(VAR_31))
    continue;
   if (VAR_32 == 0 && VAR_31->pages_scanned >=
     (FUNC_20(VAR_31) * 6))
     FUNC_21(VAR_31,
            VAR_11);





   if (VAR_21 > VAR_9 * 2 &&
       VAR_21 > VAR_24.nr_reclaimed + VAR_24.nr_reclaimed / 2)
    VAR_24.may_writepage = 1;






   if (VAR_24.order > VAR_8)
    FUNC_1(VAR_31, VAR_24.order, VAR_24.gfp_mask, 0,
      &VAR_36);

   if (!FUNC_23(VAR_31, VAR_17,
     FUNC_6(VAR_31), VAR_26, 0)) {




    if (!FUNC_23(VAR_31, VAR_17,
         FUNC_10(VAR_31), VAR_26, 0))
     VAR_28 = 1;
   } else {







    FUNC_17(VAR_31, VAR_12);
                        }


  }
  VAR_22 += VAR_24.nr_reclaimed;
  if (VAR_18)
   break;




  if (VAR_21 && (VAR_19 < VAR_1 - 2)) {
   if (VAR_28)
    FUNC_4(VAR_4);
   else
    FUNC_3(VAR_0, VAR_3/10);
  }







  if (VAR_24.nr_reclaimed >= VAR_9)
   break;
  FUNC_2();
 }
out:





 for (VAR_20 = 0; VAR_20 < VAR_16->nr_zones; VAR_20++) {
  struct zone *VAR_37 = VAR_16->node_zones + VAR_20;

  VAR_37->prev_priority = VAR_25[VAR_20];
 }
 if (!VAR_18) {
  FUNC_2();

  FUNC_16();
  if (VAR_24.nr_reclaimed < VAR_9)
   VAR_17 = VAR_24.order = 0;

  goto loop_again;
 }

 FUNC_15(VAR_16, VAR_22);
 return VAR_24.nr_reclaimed;
}
