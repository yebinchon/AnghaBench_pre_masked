
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int start; int current; } ;
struct TYPE_5__ {TYPE_1__ diff_text_range; } ;
typedef TYPE_2__ svn_diff_hunk_t ;



void
FUNC_0(svn_diff_hunk_t *VAR_0)
{
  VAR_0->diff_text_range.current = VAR_0->diff_text_range.start;
}
