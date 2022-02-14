
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int references; int expanded_size; int chain_len; int shared; int uniques; int total; } ;
typedef TYPE_1__ svn_fs_fs__representation_stats_t ;
struct TYPE_7__ {int ref_count; int expanded_size; scalar_t__ chain_length; } ;
typedef TYPE_2__ rep_stats_t ;


 int FUNC_0 (int *,TYPE_2__*) ;

__attribute__((used)) static void
FUNC_1(svn_fs_fs__representation_stats_t *VAR_0,
              rep_stats_t *VAR_1)
{
  FUNC_0(&VAR_0->total, VAR_1);
  if (VAR_1->ref_count == 1)
    FUNC_0(&VAR_0->uniques, VAR_1);
  else
    FUNC_0(&VAR_0->shared, VAR_1);

  VAR_0->references += VAR_1->ref_count;
  VAR_0->expanded_size += VAR_1->ref_count * VAR_1->expanded_size;
  VAR_0->chain_len += VAR_1->chain_length;
}
