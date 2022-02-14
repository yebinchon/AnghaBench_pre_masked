
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int mode; } ;
struct TYPE_4__ {TYPE_1__ exec_mode; } ;
struct pt_event {scalar_t__ status_update; TYPE_2__ variant; } ;
struct pt_block_decoder {scalar_t__ mode; scalar_t__ process_event; scalar_t__ enabled; } ;
typedef enum pt_exec_mode { ____Placeholder_pt_exec_mode } pt_exec_mode ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;

__attribute__((used)) static int FUNC_0(struct pt_block_decoder *VAR_3,
        const struct pt_event *VAR_4)
{
 enum pt_exec_mode VAR_5;

 if (!VAR_3 || !VAR_4)
  return -VAR_1;


 VAR_5 = VAR_4->variant.exec_mode.mode;
 if (VAR_4->status_update && VAR_3->enabled &&
     VAR_3->mode != VAR_2 && VAR_3->mode != VAR_5)
  return -VAR_0;

 VAR_3->mode = VAR_5;
 VAR_3->process_event = 0;

 return 0;
}
