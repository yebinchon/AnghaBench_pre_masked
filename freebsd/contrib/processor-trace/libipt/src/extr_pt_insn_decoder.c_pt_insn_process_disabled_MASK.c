
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pt_event {scalar_t__ status_update; } ;
struct pt_insn_decoder {scalar_t__ enabled; struct pt_event event; } ;


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





 VAR_2->enabled = 0;

 return 0;
}
