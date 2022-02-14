
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ubifs_lprops {int flags; scalar_t__ free; scalar_t__ dirty; } ;
struct ubifs_info {scalar_t__ leb_size; scalar_t__ min_idx_node_sz; scalar_t__ dead_wm; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int) ;

int FUNC_1(const struct ubifs_info *VAR_9,
       const struct ubifs_lprops *VAR_10)
{
 if (VAR_10->flags & VAR_7)
  return VAR_8;

 if (VAR_10->free == VAR_9->leb_size) {
  FUNC_0(!(VAR_10->flags & VAR_6));
  return VAR_2;
 }

 if (VAR_10->free + VAR_10->dirty == VAR_9->leb_size) {
  if (VAR_10->flags & VAR_6)
   return VAR_3;
  else
   return VAR_5;
 }

 if (VAR_10->flags & VAR_6) {
  if (VAR_10->dirty + VAR_10->free >= VAR_9->min_idx_node_sz)
   return VAR_1;
 } else {
  if (VAR_10->dirty >= VAR_9->dead_wm &&
      VAR_10->dirty > VAR_10->free)
   return VAR_0;
  if (VAR_10->free > 0)
   return VAR_4;
 }

 return VAR_8;
}
