
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int ip; } ;
struct TYPE_4__ {TYPE_1__ enabled; } ;
struct pt_event {TYPE_2__ variant; scalar_t__ ip_suppressed; scalar_t__ status_update; } ;
struct pt_block_decoder {int enabled; scalar_t__ process_event; int ip; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_0(struct pt_block_decoder *VAR_3,
      const struct pt_event *VAR_4)
{
 if (!VAR_3 || !VAR_4)
  return -VAR_1;


 if (VAR_4->status_update)
  return -VAR_0;


 if (VAR_4->ip_suppressed)
  return -VAR_2;


 if (VAR_3->enabled)
  return -VAR_0;

 VAR_3->ip = VAR_4->variant.enabled.ip;
 VAR_3->enabled = 1;
 VAR_3->process_event = 0;

 return 0;
}
