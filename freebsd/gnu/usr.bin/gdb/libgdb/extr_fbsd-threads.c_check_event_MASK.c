
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int ti_tid; } ;
typedef TYPE_1__ td_thrinfo_t ;
struct TYPE_7__ {int event; scalar_t__ th_p; } ;
typedef TYPE_2__ td_event_msg_t ;
typedef scalar_t__ td_err_e ;
typedef int ptid_t ;
typedef scalar_t__ CORE_ADDR ;


 int FUNC_0 (int ,int ) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (int ) ;


 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_2 (int ,void*,TYPE_1__*,int) ;
 int FUNC_3 (int ,int) ;
 int FUNC_4 (char*,...) ;
 int FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (int ) ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_7 (int ,TYPE_2__*) ;
 scalar_t__ FUNC_8 (void*,TYPE_1__*) ;
 int VAR_5 ;
 int FUNC_9 (scalar_t__) ;

__attribute__((used)) static void
FUNC_10 (ptid_t VAR_6)
{
  td_event_msg_t VAR_7;
  td_thrinfo_t VAR_8;
  td_err_e VAR_9;
  CORE_ADDR VAR_10;
  int VAR_11 = 0;


  VAR_10 = FUNC_6 (VAR_6) - VAR_0;
  if (VAR_10 != VAR_3 && VAR_10 != VAR_4)
    return;
  VAR_11 = 1;

  do
    {
      VAR_9 = FUNC_7 (VAR_5, &VAR_7);
      if (VAR_9 != VAR_2)
        {
   if (VAR_9 == VAR_1)
     return;
          FUNC_4 ("Cannot get thread event message: %s",
   FUNC_9 (VAR_9));
        }
      VAR_9 = FUNC_8 ((void *)(uintptr_t)VAR_7.th_p, &VAR_8);
      if (VAR_9 != VAR_2)
        FUNC_4 ("Cannot get thread info: %s", FUNC_9 (VAR_9));
      VAR_6 = FUNC_0 (VAR_8.ti_tid, FUNC_1 (VAR_6));
      switch (VAR_7.event)
        {
        case 129:



          FUNC_2 (VAR_6, (void *)(uintptr_t)VAR_7.th_p, &VAR_8, 1);
          break;
       case 128:
         if (!FUNC_5 (VAR_6))
           FUNC_4 ("Spurious thread death event.");
         FUNC_3 (VAR_6, 1);
         break;
       default:
          FUNC_4 ("Spurious thread event.");
       }
    }
  while (VAR_11);
}
