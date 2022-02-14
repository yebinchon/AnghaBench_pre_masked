
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int overhead_size; int expanded_size; int packed_size; int count; } ;
typedef TYPE_1__ svn_fs_fs__rep_pack_stats_t ;
struct TYPE_6__ {scalar_t__ header_size; scalar_t__ expanded_size; scalar_t__ size; } ;
typedef TYPE_2__ rep_stats_t ;



__attribute__((used)) static void
FUNC_0(svn_fs_fs__rep_pack_stats_t *VAR_0,
                   rep_stats_t *VAR_1)
{
  VAR_0->count++;

  VAR_0->packed_size += VAR_1->size;
  VAR_0->expanded_size += VAR_1->expanded_size;
  VAR_0->overhead_size += VAR_1->header_size + 7 ;
}
