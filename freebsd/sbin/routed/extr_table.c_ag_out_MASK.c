
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ag_info {int ag_state; int ag_mask; int ag_dst_h; struct ag_info* ag_cors; } ;
typedef int naddr ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static void
FUNC_0(struct ag_info *VAR_3,
  void (*VAR_4)(struct ag_info *))
{
 struct ag_info *VAR_5;
 naddr VAR_6;



 if (VAR_3->ag_state & VAR_2)
  return;
 VAR_5 = VAR_3->ag_cors;
 if (VAR_5 != ((void*)0)
     && VAR_5->ag_mask == VAR_3->ag_mask<<1
     && VAR_5->ag_dst_h == (VAR_3->ag_dst_h & VAR_5->ag_mask)) {
  VAR_5->ag_state |= ((VAR_5->ag_dst_h == VAR_3->ag_dst_h)
          ? VAR_0
          : VAR_1);
 }






 if (VAR_3->ag_state & VAR_0) {
  if (VAR_3->ag_state & VAR_1)
   return;

  VAR_6 = (-VAR_3->ag_mask) >> 1;
  VAR_3->ag_dst_h |= VAR_6;
  VAR_3->ag_mask |= VAR_6;

 } else if (VAR_3->ag_state & VAR_1) {

  VAR_6 = (-VAR_3->ag_mask) >> 1;
  VAR_3->ag_mask |= VAR_6;
 }
 VAR_4(VAR_3);
}
