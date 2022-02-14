
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u_int ;
struct ext2fs_htree_lookup_info {size_t h_levels_num; TYPE_1__* h_levels; } ;
struct buf {int dummy; } ;
struct TYPE_2__ {struct buf* h_bp; } ;


 int FUNC_0 (struct buf*) ;

__attribute__((used)) static void
FUNC_1(struct ext2fs_htree_lookup_info *VAR_0)
{
 u_int VAR_1;

 for (VAR_1 = 0; VAR_1 < VAR_0->h_levels_num; VAR_1++) {
  struct buf *VAR_2 = VAR_0->h_levels[VAR_1].h_bp;

  if (VAR_2 != ((void*)0))
   FUNC_0(VAR_2);
 }
}
