
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int th_p; } ;
typedef TYPE_1__ td_event_msg_t ;
typedef scalar_t__ td_err_e ;
struct inferior_linux_data {int dummy; } ;
typedef int CORE_ADDR ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (int ,char*,...) ;
 struct inferior_linux_data* FUNC_2 (int ) ;
 int VAR_3 ;
 scalar_t__ FUNC_3 (int ,TYPE_1__*) ;
 int VAR_4 ;
 char* FUNC_4 (scalar_t__) ;

__attribute__((used)) static void
FUNC_5 (CORE_ADDR VAR_5)
{
  td_event_msg_t VAR_6;
  td_err_e VAR_7;
  struct inferior_linux_data *VAR_8;

  if (VAR_2)
    FUNC_1 (VAR_3, "Thread creation event.\n");

  VAR_8 = FUNC_2 (VAR_1);





  VAR_7 = FUNC_3 (VAR_4, &VAR_6);
  if (VAR_7 != VAR_0)
    FUNC_1 (VAR_3, "thread getmsg err: %s\n",
      FUNC_4 (VAR_7));



  FUNC_0 (VAR_6.th_p, ((void*)0));
}
