
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ daddr_t ;
typedef TYPE_1__* blist_t ;
struct TYPE_3__ {scalar_t__ bl_cursor; int bl_avail; scalar_t__ bl_blocks; int bl_radix; int bl_root; } ;


 int VAR_0 ;
 int FUNC_0 (int,char*) ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_1 (int ,scalar_t__,int*,int,int ) ;

daddr_t
FUNC_2(blist_t VAR_2, int *VAR_3, int VAR_4)
{
 daddr_t VAR_5, VAR_6;

 FUNC_0(*VAR_3 <= VAR_4,
     ("invalid parameters %d > %d", *VAR_3, VAR_4));
 FUNC_0(*VAR_3 <= VAR_0,
     ("minimum allocation too large: %d", *VAR_3));







 for (VAR_6 = VAR_2->bl_cursor;; VAR_6 = 0) {
  VAR_5 = FUNC_1(VAR_2->bl_root, VAR_6, VAR_3, VAR_4,
      VAR_2->bl_radix);
  if (VAR_5 != VAR_1) {
   VAR_2->bl_avail -= *VAR_3;
   VAR_2->bl_cursor = VAR_5 + *VAR_3;
   if (VAR_2->bl_cursor == VAR_2->bl_blocks)
    VAR_2->bl_cursor = 0;
   return (VAR_5);
  }
  if (VAR_6 == 0)
   return (VAR_1);
 }
}
