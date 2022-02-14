
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u_daddr_t ;
struct sbuf {int dummy; } ;
struct gap_stats {int dummy; } ;
typedef size_t daddr_t ;
typedef TYPE_2__* blist_t ;
struct TYPE_5__ {size_t bl_radix; size_t bl_blocks; TYPE_1__* bl_root; } ;
struct TYPE_4__ {scalar_t__ bm_bitmap; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (struct gap_stats*,struct sbuf*) ;
 scalar_t__ FUNC_3 (struct gap_stats*) ;
 int FUNC_4 (struct gap_stats*) ;
 scalar_t__ FUNC_5 (size_t) ;
 int FUNC_6 (struct gap_stats*,size_t) ;

void
FUNC_7(blist_t VAR_3, struct sbuf *VAR_4)
{
 struct gap_stats VAR_5;
 struct gap_stats *VAR_6 = &VAR_5;
 daddr_t VAR_7, VAR_8, VAR_9;
 u_daddr_t VAR_10, VAR_11;
 int VAR_12;

 FUNC_4(VAR_6);
 VAR_8 = 0;
 VAR_7 = VAR_3->bl_radix;
 while (VAR_7 < VAR_3->bl_radix + VAR_3->bl_blocks) {



  VAR_9 = VAR_0;
  while (((VAR_7 / VAR_9) & VAR_1) == 0)
   VAR_9 *= VAR_2;




  while (VAR_9 > VAR_0) {
   if (VAR_3->bl_root[VAR_8].bm_bitmap == 0) {
    if (FUNC_3(VAR_6))
     FUNC_6(VAR_6, VAR_7);
    break;
   }




   VAR_8++;
   VAR_9 /= VAR_2;
  }
  if (VAR_9 == VAR_0) {



   VAR_11 = VAR_3->bl_root[VAR_8].bm_bitmap;
   VAR_10 = VAR_11 ^ (VAR_11 << 1);
   if (FUNC_3(VAR_6))
    VAR_10 ^= 1;
   while (VAR_10 != 0) {
    VAR_12 = FUNC_0(VAR_10);
    FUNC_6(VAR_6, VAR_7 + VAR_12);
    VAR_10 ^= FUNC_1(VAR_12, 1);
   }
  }
  VAR_8 += FUNC_5(VAR_9);
  VAR_7 += VAR_9;
 }
 FUNC_6(VAR_6, VAR_7);
 FUNC_2(VAR_6, VAR_4);
}
