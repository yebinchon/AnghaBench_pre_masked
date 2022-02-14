
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct zonelist {int dummy; } ;
struct zone {int dummy; } ;
struct task_struct {int flags; int comm; } ;
struct page {int dummy; } ;
typedef int nodemask_t ;
typedef int gfp_t ;
typedef enum zone_type { ____Placeholder_zone_type } zone_type ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned int VAR_4 ;
 scalar_t__ VAR_5 ;
 unsigned int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 unsigned int VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (int) ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 struct page* FUNC_1 (int,unsigned int,struct zonelist*,int,int *,int,struct zone*,int,int,int*,int*,unsigned long*) ;
 struct page* FUNC_2 (int,unsigned int,struct zonelist*,int,int *,int,struct zone*,int,unsigned long*) ;
 struct page* FUNC_3 (int,unsigned int,struct zonelist*,int,int *,struct zone*,int) ;
 struct page* FUNC_4 (int,unsigned int,struct zonelist*,int,int *,struct zone*,int) ;
 struct task_struct* VAR_18 ;
 int FUNC_5 () ;
 struct page* FUNC_6 (int,int *,unsigned int,struct zonelist*,int,int,struct zone*,int) ;
 int FUNC_7 (int) ;
 scalar_t__ FUNC_8 () ;
 scalar_t__ VAR_19 ;
 int FUNC_9 (struct page*,unsigned int,int) ;
 scalar_t__ VAR_20 ;
 int FUNC_10 (char*,int ,unsigned int,int) ;
 scalar_t__ FUNC_11 () ;
 scalar_t__ FUNC_12 (int,unsigned int,unsigned long) ;
 int FUNC_13 () ;
 int FUNC_14 (unsigned int) ;
 scalar_t__ FUNC_15 (int ) ;
 int FUNC_16 (struct zone*,int ,int) ;
 int FUNC_17 (unsigned int,struct zonelist*,int) ;

__attribute__((used)) static inline struct page *
FUNC_18(gfp_t VAR_21, unsigned int VAR_22,
 struct zonelist *VAR_23, enum zone_type VAR_24,
 nodemask_t *VAR_25, struct zone *VAR_26,
 int VAR_27)
{
 const gfp_t VAR_28 = VAR_21 & VAR_17;
 struct page *VAR_29 = ((void*)0);
 int VAR_30;
 unsigned long VAR_31 = 0;
 unsigned long VAR_32;
 struct task_struct *VAR_33 = VAR_18;
 bool VAR_34 = 0;
 bool VAR_35 = 0;
 bool VAR_36 = 0;







 if (VAR_22 >= VAR_4) {
  FUNC_0(!(VAR_21 & VAR_15));
  return ((void*)0);
 }
 if (VAR_5 && (VAR_21 & VAR_2) == VAR_2)
  goto nopage;

restart:
 if (!(VAR_21 & VAR_16))
  FUNC_17(VAR_22, VAR_23, VAR_24);






 VAR_30 = FUNC_7(VAR_21);


 VAR_29 = FUNC_6(VAR_21, VAR_25, VAR_22, VAR_23,
   VAR_24, VAR_30 & ~VAR_0,
   VAR_26, VAR_27);
 if (VAR_29)
  goto got_pg;

rebalance:

 if (VAR_30 & VAR_0) {
  VAR_29 = FUNC_3(VAR_21, VAR_22,
    VAR_23, VAR_24, VAR_25,
    VAR_26, VAR_27);
  if (VAR_29)
   goto got_pg;
 }


 if (!VAR_28)
  goto nopage;


 if (VAR_33->flags & VAR_8)
  goto nopage;


 if (FUNC_15(VAR_10) && !(VAR_21 & VAR_12))
  goto nopage;





 VAR_29 = FUNC_1(VAR_21, VAR_22,
     VAR_23, VAR_24,
     VAR_25,
     VAR_30, VAR_26,
     VAR_27, VAR_34,
     &VAR_36,
     &VAR_35,
     &VAR_32);
 if (VAR_29)
  goto got_pg;
 VAR_34 = 1;







 if ((VAR_35 || VAR_36) &&
      (VAR_21 & VAR_16))
  goto nopage;


 VAR_29 = FUNC_2(VAR_21, VAR_22,
     VAR_23, VAR_24,
     VAR_25,
     VAR_30, VAR_26,
     VAR_27, &VAR_32);
 if (VAR_29)
  goto got_pg;





 if (!VAR_32) {
  if ((VAR_21 & VAR_11) && !(VAR_21 & VAR_14)) {
   if (VAR_20)
    goto nopage;
   VAR_29 = FUNC_4(VAR_21, VAR_22,
     VAR_23, VAR_24,
     VAR_25, VAR_26,
     VAR_27);
   if (VAR_29)
    goto got_pg;







   if (VAR_22 > VAR_6 &&
      !(VAR_21 & VAR_12))
    goto nopage;

   goto restart;
  }
 }


 VAR_31 += VAR_32;
 if (FUNC_12(VAR_21, VAR_22, VAR_31)) {

  FUNC_16(VAR_26, VAR_1, VAR_3/50);
  goto rebalance;
 } else {





  VAR_29 = FUNC_1(VAR_21, VAR_22,
     VAR_23, VAR_24,
     VAR_25,
     VAR_30, VAR_26,
     VAR_27, VAR_34,
     &VAR_36,
     &VAR_35,
     &VAR_32);
  if (VAR_29)
   goto got_pg;
 }

nopage:
 if (!(VAR_21 & VAR_15) && FUNC_11()) {
  unsigned int VAR_37 = VAR_9;






  if (!(VAR_21 & VAR_13))
   if (FUNC_15(VAR_10) ||
       (VAR_18->flags & (VAR_8 | VAR_7)))
    VAR_37 &= ~VAR_9;
  if (FUNC_8() || !VAR_28)
   VAR_37 &= ~VAR_9;

  FUNC_10("%s: page allocation failure. order:%d, mode:0x%x\n",
   VAR_33->comm, VAR_22, VAR_21);
  FUNC_5();
  if (!FUNC_13())
   FUNC_14(VAR_37);
 }
 return VAR_29;
got_pg:
 if (VAR_19)
  FUNC_9(VAR_29, VAR_22, VAR_21);
 return VAR_29;

}
