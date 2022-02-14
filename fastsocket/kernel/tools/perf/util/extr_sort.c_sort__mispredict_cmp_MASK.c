
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct hist_entry {TYPE_2__* branch_info; } ;
typedef int int64_t ;
struct TYPE_3__ {scalar_t__ mispred; scalar_t__ predicted; } ;
struct TYPE_4__ {TYPE_1__ flags; } ;



__attribute__((used)) static int64_t
FUNC_0(struct hist_entry *VAR_0, struct hist_entry *VAR_1)
{
 const unsigned char VAR_2 = VAR_0->branch_info->flags.mispred !=
     VAR_1->branch_info->flags.mispred;
 const unsigned char VAR_3 = VAR_0->branch_info->flags.predicted !=
     VAR_1->branch_info->flags.predicted;

 return VAR_2 || VAR_3;
}
