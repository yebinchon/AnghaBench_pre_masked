
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scan_control {int gfp_mask; int may_writepage; int nr_scanned; int may_unmap; } ;
struct pagevec {int dummy; } ;
struct page {int lru; } ;
struct mem_cgroup_zone {scalar_t__ zone; } ;
struct list_head {int dummy; } ;
struct address_space {int dummy; } ;
typedef enum pageout_io { ____Placeholder_pageout_io } pageout_io ;
typedef enum page_references { ____Placeholder_page_references } page_references ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct page*) ;
 scalar_t__ FUNC_2 (struct page*) ;
 scalar_t__ FUNC_3 (struct page*) ;
 scalar_t__ FUNC_4 (struct page*) ;
 scalar_t__ FUNC_5 (struct page*) ;
 scalar_t__ FUNC_6 (struct page*) ;
 scalar_t__ FUNC_7 (struct page*) ;




 int FUNC_8 (struct page*) ;
 int FUNC_9 (struct page*) ;
 int VAR_3 ;
 int FUNC_10 (int) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_11 (struct page*) ;
 int FUNC_12 (struct pagevec*) ;
 int FUNC_13 (struct address_space*,struct page*) ;
 int FUNC_14 (struct page*) ;
 int FUNC_15 () ;
 int FUNC_16 (int ,int) ;
 int FUNC_17 () ;
 scalar_t__ FUNC_18 (struct scan_control*) ;
 int FUNC_19 (int *,int *) ;
 int FUNC_20 (int *) ;
 int FUNC_21 (struct list_head*) ;
 int FUNC_22 (int *,struct list_head*) ;
 struct page* FUNC_23 (struct list_head*) ;
 int FUNC_24 (struct page*,struct mem_cgroup_zone*,struct scan_control*) ;
 int FUNC_25 (struct page*) ;
 int FUNC_26 (struct page*,int *) ;
 scalar_t__ FUNC_27 (struct page*) ;
 scalar_t__ FUNC_28 (struct page*) ;
 scalar_t__ FUNC_29 (struct page*) ;
 struct address_space* FUNC_30 (struct page*) ;
 scalar_t__ FUNC_31 (struct page*) ;
 int FUNC_32 (struct page*,struct address_space*,int) ;
 int FUNC_33 (struct pagevec*,struct page*) ;
 scalar_t__ FUNC_34 (struct pagevec*) ;
 int FUNC_35 (struct pagevec*,int) ;
 int FUNC_36 (struct pagevec*) ;
 scalar_t__ FUNC_37 (struct page*) ;
 int FUNC_38 (struct page*) ;
 int VAR_7 ;
 int FUNC_39 (unsigned long) ;
 int FUNC_40 (struct page*) ;
 int FUNC_41 (struct page*,int) ;
 int FUNC_42 (struct page*,int ) ;
 int FUNC_43 (struct page*) ;
 scalar_t__ FUNC_44 (int) ;
 int FUNC_45 (struct page*) ;
 scalar_t__ FUNC_46 () ;
 int FUNC_47 (struct page*) ;
 int FUNC_48 (scalar_t__,int ) ;

__attribute__((used)) static unsigned long FUNC_49(struct list_head *VAR_8,
     struct scan_control *VAR_9,
     struct mem_cgroup_zone *VAR_10,
     enum pageout_io VAR_11,
     int VAR_12,
     unsigned long *VAR_13,
     unsigned long *VAR_14)
{
 FUNC_0(VAR_7);
 struct pagevec VAR_15;
 int VAR_16 = 0;
 unsigned long VAR_17 = 0;
 unsigned long VAR_18 = 0;
 unsigned long VAR_19 = 0;
 unsigned long VAR_20 = 0;

 FUNC_15();

 FUNC_35(&VAR_15, 1);
 while (!FUNC_21(VAR_8)) {
  enum page_references VAR_21;
  struct address_space *VAR_22;
  struct page *VAR_23;
  int VAR_24;

  FUNC_15();

  VAR_23 = FUNC_23(VAR_8);
  FUNC_20(&VAR_23->lru);

  if (!FUNC_43(VAR_23))
   goto keep;

  FUNC_10(FUNC_1(VAR_23));
  FUNC_10(FUNC_31(VAR_23) != VAR_10->zone);

  VAR_9->nr_scanned++;

  if (FUNC_44(!FUNC_26(VAR_23, ((void*)0))))
   goto cull_mlocked;

  if (!VAR_9->may_unmap && FUNC_29(VAR_23))
   goto keep_locked;


  if (FUNC_29(VAR_23) || FUNC_5(VAR_23))
   VAR_9->nr_scanned++;

  VAR_24 = (VAR_9->gfp_mask & VAR_5) ||
   (FUNC_5(VAR_23) && (VAR_9->gfp_mask & VAR_6));

  if (FUNC_7(VAR_23)) {
   VAR_20++;






   if (VAR_11 == VAR_1 && VAR_24)
    FUNC_47(VAR_23);
   else
    goto keep_locked;
  }

  VAR_21 = FUNC_24(VAR_23, VAR_10, VAR_9);
  switch (VAR_21) {
  case 139:
   goto activate_locked;
  case 138:
   goto keep_locked;
  case 137:
  case 136:
   ;
  }





  if (FUNC_2(VAR_23) && !FUNC_5(VAR_23)) {
   if (!(VAR_9->gfp_mask & VAR_6))
    goto keep_locked;
   if (!FUNC_14(VAR_23))
    goto activate_locked;
   VAR_24 = 1;
  }

  VAR_22 = FUNC_30(VAR_23);





  if (FUNC_29(VAR_23) && VAR_22) {
   switch (FUNC_42(VAR_23, VAR_3)) {
   case 130:
    goto activate_locked;
   case 131:
    goto keep_locked;
   case 129:
    goto cull_mlocked;
   case 128:
    ;
   }
  }

  if (FUNC_3(VAR_23)) {
   VAR_17++;






   if (FUNC_28(VAR_23) &&
     (!FUNC_17() || VAR_12 >= VAR_0 - 2)) {






    FUNC_9(VAR_23);

    goto keep_locked;
   }

   if (VAR_21 == 136)
    goto keep_locked;
   if (!VAR_24)
    goto keep_locked;
   if (!VAR_9->may_writepage)
    goto keep_locked;


   switch (FUNC_32(VAR_23, VAR_22, VAR_11)) {
   case 133:
    VAR_18++;
    goto keep_locked;
   case 135:
    goto activate_locked;
   case 132:
    if (FUNC_7(VAR_23) || FUNC_3(VAR_23))
     goto keep;




    if (!FUNC_43(VAR_23))
     goto keep;
    if (FUNC_3(VAR_23) || FUNC_7(VAR_23))
     goto keep_locked;
    VAR_22 = FUNC_30(VAR_23);
   case 134:
    ;
   }
  }
  if (FUNC_27(VAR_23)) {
   if (!FUNC_41(VAR_23, VAR_9->gfp_mask))
    goto activate_locked;
   if (!VAR_22 && FUNC_25(VAR_23) == 1) {
    FUNC_45(VAR_23);
    if (FUNC_37(VAR_23))
     goto free_it;
    else {







     VAR_19++;
     continue;
    }
   }
  }

  if (!VAR_22 || !FUNC_13(VAR_22, VAR_23))
   goto keep_locked;
  FUNC_11(VAR_23);
free_it:
  VAR_19++;
  if (!FUNC_33(&VAR_15, VAR_23)) {
   FUNC_12(&VAR_15);
   FUNC_36(&VAR_15);
  }
  continue;

cull_mlocked:
  if (FUNC_5(VAR_23))
   FUNC_40(VAR_23);
  FUNC_45(VAR_23);
  FUNC_38(VAR_23);
  continue;

activate_locked:

  if (FUNC_5(VAR_23) && FUNC_46())
   FUNC_40(VAR_23);
  FUNC_10(FUNC_1(VAR_23));
  FUNC_8(VAR_23);
  VAR_16++;
keep_locked:
  FUNC_45(VAR_23);
keep:
  FUNC_19(&VAR_23->lru, &VAR_7);
  FUNC_10(FUNC_4(VAR_23) || FUNC_6(VAR_23));
 }







 if (VAR_17 && VAR_17 == VAR_18 && FUNC_18(VAR_9))
  FUNC_48(VAR_10->zone, VAR_4);

 FUNC_22(&VAR_7, VAR_8);
 if (FUNC_34(&VAR_15))
  FUNC_12(&VAR_15);
 FUNC_16(VAR_2, VAR_16);
 FUNC_39(VAR_19);
        *VAR_13 += VAR_17;
        *VAR_14 += VAR_20;
 return VAR_19;
}
