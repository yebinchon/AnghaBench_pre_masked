
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uintmax_t ;
typedef scalar_t__ daddr_t ;
typedef TYPE_1__* blist_t ;
struct TYPE_3__ {scalar_t__ bl_blocks; int bl_avail; int bl_radix; int bl_root; } ;


 int FUNC_0 (int,char*) ;
 int FUNC_1 (int ,scalar_t__,scalar_t__,int ) ;

void
FUNC_2(blist_t VAR_0, daddr_t VAR_1, daddr_t VAR_2)
{

 FUNC_0(VAR_1 >= 0 && VAR_1 + VAR_2 <= VAR_0->bl_blocks,
     ("freeing invalid range: blkno %jx, count %d, blocks %jd",
     (uintmax_t)VAR_1, (int)VAR_2, (uintmax_t)VAR_0->bl_blocks));
 FUNC_1(VAR_0->bl_root, VAR_1, VAR_2, VAR_0->bl_radix);
 VAR_0->bl_avail += VAR_2;
}
