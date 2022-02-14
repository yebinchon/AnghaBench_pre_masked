
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int to; } ;
struct TYPE_4__ {TYPE_1__ async_branch; } ;
struct pt_event {TYPE_2__ variant; scalar_t__ status_update; } ;
struct pt_insn_decoder {int ip; int enabled; struct pt_event event; } ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_0(struct pt_insn_decoder *VAR_2)
{
 struct pt_event *VAR_3;

 if (!VAR_2)
  return -VAR_1;

 VAR_3 = &VAR_2->event;


 if (VAR_3->status_update)
  return -VAR_0;


 if (!VAR_2->enabled)
  return -VAR_0;

 VAR_2->ip = VAR_3->variant.async_branch.to;

 return 0;
}
