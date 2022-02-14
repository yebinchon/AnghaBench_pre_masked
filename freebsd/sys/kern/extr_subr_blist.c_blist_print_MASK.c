
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uintmax_t ;
typedef TYPE_1__* blist_t ;
struct TYPE_5__ {scalar_t__ bm_bitmap; } ;
struct TYPE_4__ {int bl_radix; TYPE_2__* bl_root; scalar_t__ bl_cursor; scalar_t__ bl_avail; } ;


 int FUNC_0 (TYPE_2__*,int ,int ,int) ;
 int FUNC_1 (char*,...) ;

void
FUNC_2(blist_t VAR_0)
{
 FUNC_1("BLIST avail = %jd, cursor = %08jx {\n",
     (uintmax_t)VAR_0->bl_avail, (uintmax_t)VAR_0->bl_cursor);

 if (VAR_0->bl_root->bm_bitmap != 0)
  FUNC_0(VAR_0->bl_root, 0, VAR_0->bl_radix, 4);
 FUNC_1("}\n");
}
