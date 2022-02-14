
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct zone {int dummy; } ;
struct scan_control {int gfp_mask; unsigned long order; unsigned long nr_reclaimed; } ;




 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct zone*,unsigned long) ;
 int FUNC_1 (int,struct scan_control*) ;
 scalar_t__ VAR_3 ;
 unsigned long FUNC_2 (struct zone*,int ) ;

__attribute__((used)) static inline bool FUNC_3(struct zone *VAR_4,
     unsigned long VAR_5,
     unsigned long VAR_6,
     int VAR_7,
     struct scan_control *VAR_8)
{
 unsigned long VAR_9;
 unsigned long VAR_10;


 if (!FUNC_1(VAR_7, VAR_8))
  return 0;


 if (VAR_8->gfp_mask & VAR_2) {






  if (!VAR_5 && !VAR_6)
   return 0;
 } else {
  if (!VAR_5)
   return 0;
 }





 VAR_9 = (2UL << VAR_8->order);
 VAR_10 = FUNC_2(VAR_4, VAR_1);
 if (VAR_3 > 0)
  VAR_10 += FUNC_2(VAR_4, VAR_0);
 if (VAR_8->nr_reclaimed < VAR_9 &&
   VAR_10 > VAR_9)
  return 1;


 switch (FUNC_0(VAR_4, VAR_8->order)) {
 case 128:
 case 129:
  return 0;
 default:
  return 1;
 }
}
