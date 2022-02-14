
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct cmd_list_element {int dummy; } ;
struct TYPE_2__ {int selected_thread_changed; int selected_frame_level_changed; int target_changed; int architecture_changed; int tracepoint_modify; int tracepoint_delete; int tracepoint_create; int breakpoint_modify; int breakpoint_delete; int breakpoint_create; } ;


 struct cmd_list_element* FUNC_0 (char*,int ,int ,char*,char*,int *) ;
 struct cmd_list_element* FUNC_1 (struct cmd_list_element*,int *) ;
 int VAR_0 ;
 int FUNC_2 (struct cmd_list_element*,char*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 TYPE_1__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;

void
FUNC_3 (void)
{
  struct cmd_list_element *VAR_18;
  VAR_18 = FUNC_0 ("eventdebug", VAR_0, VAR_17,
     (char *) (&VAR_1), "Set event debugging.\nWhen non-zero, event/notify debugging is enabled.", &VAR_14);

  FUNC_2 (VAR_18, "set debug event");
  FUNC_2 (FUNC_1 (VAR_18, &VAR_16), "show debug event");

  FUNC_1 (FUNC_0 ("event",
      VAR_0,
      VAR_17,
      (char *) (&VAR_1),
      "Set event debugging.\nWhen non-zero, event/notify debugging is enabled.", &VAR_13),

       &VAR_15);
}
