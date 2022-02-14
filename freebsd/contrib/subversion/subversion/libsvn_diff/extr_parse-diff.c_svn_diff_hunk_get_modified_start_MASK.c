
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int svn_linenum_t ;
struct TYPE_5__ {int modified_start; int original_start; TYPE_1__* patch; } ;
typedef TYPE_2__ svn_diff_hunk_t ;
struct TYPE_4__ {scalar_t__ reverse; } ;



svn_linenum_t
FUNC_0(const svn_diff_hunk_t *VAR_0)
{
  return VAR_0->patch->reverse ? VAR_0->original_start : VAR_0->modified_start;
}
