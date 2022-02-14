
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int ip; } ;
struct TYPE_4__ {TYPE_1__ enabled; } ;
struct pt_event {TYPE_2__ variant; scalar_t__ ip_suppressed; scalar_t__ status_update; } ;
struct pt_insn_decoder {int enabled; int ip; struct pt_event event; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_0(struct pt_insn_decoder *VAR_3)
{
 struct pt_event *VAR_4;

 if (!VAR_3)
  return -VAR_1;

 VAR_4 = &VAR_3->event;


 if (VAR_4->status_update)
  return -VAR_0;


 if (VAR_4->ip_suppressed)
  return -VAR_2;


 if (VAR_3->enabled)
  return -VAR_0;

 VAR_3->ip = VAR_4->variant.enabled.ip;
 VAR_3->enabled = 1;

 return 0;
}
