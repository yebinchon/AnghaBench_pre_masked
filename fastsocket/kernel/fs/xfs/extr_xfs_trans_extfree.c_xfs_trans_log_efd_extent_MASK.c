
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_12__ {int t_flags; } ;
typedef TYPE_4__ xfs_trans_t ;
typedef int xfs_fsblock_t ;
typedef int xfs_extlen_t ;
struct TYPE_13__ {int ext_len; int ext_start; } ;
typedef TYPE_5__ xfs_extent_t ;
struct TYPE_9__ {size_t efd_nextents; TYPE_5__* efd_extents; } ;
struct TYPE_11__ {TYPE_2__* li_desc; } ;
struct TYPE_14__ {size_t efd_next_extent; TYPE_1__ efd_format; TYPE_3__ efd_item; } ;
typedef TYPE_6__ xfs_efd_log_item_t ;
typedef size_t uint ;
struct TYPE_10__ {int lid_flags; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;

void
FUNC_1(xfs_trans_t *VAR_2,
    xfs_efd_log_item_t *VAR_3,
    xfs_fsblock_t VAR_4,
    xfs_extlen_t VAR_5)
{
 uint VAR_6;
 xfs_extent_t *VAR_7;

 VAR_2->t_flags |= VAR_1;
 VAR_3->efd_item.li_desc->lid_flags |= VAR_0;

 VAR_6 = VAR_3->efd_next_extent;
 FUNC_0(VAR_6 < VAR_3->efd_format.efd_nextents);
 VAR_7 = &(VAR_3->efd_format.efd_extents[VAR_6]);
 VAR_7->ext_start = VAR_4;
 VAR_7->ext_len = VAR_5;
 VAR_3->efd_next_extent++;
}
