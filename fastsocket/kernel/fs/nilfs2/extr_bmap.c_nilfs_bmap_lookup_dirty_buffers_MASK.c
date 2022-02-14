
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nilfs_bmap {TYPE_1__* b_ops; } ;
struct list_head {int dummy; } ;
struct TYPE_2__ {int (* bop_lookup_dirty_buffers ) (struct nilfs_bmap*,struct list_head*) ;} ;


 int FUNC_0 (struct nilfs_bmap*,struct list_head*) ;

void FUNC_1(struct nilfs_bmap *VAR_0,
         struct list_head *VAR_1)
{
 if (VAR_0->b_ops->bop_lookup_dirty_buffers != ((void*)0))
  VAR_0->b_ops->bop_lookup_dirty_buffers(VAR_0, VAR_1);
}
