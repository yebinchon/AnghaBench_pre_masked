
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {int start; int current; } ;
struct TYPE_7__ {int start; int current; } ;
struct TYPE_9__ {TYPE_3__ original_text_range; TYPE_2__ modified_text_range; TYPE_1__* patch; } ;
typedef TYPE_4__ svn_diff_hunk_t ;
struct TYPE_6__ {scalar_t__ reverse; } ;



void
FUNC_0(svn_diff_hunk_t *VAR_0)
{
  if (VAR_0->patch->reverse)
    VAR_0->modified_text_range.current = VAR_0->modified_text_range.start;
  else
    VAR_0->original_text_range.current = VAR_0->original_text_range.start;
}
