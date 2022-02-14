
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int td_thr_events_t ;
struct TYPE_4__ {scalar_t__ bptaddr; } ;
struct TYPE_5__ {TYPE_1__ u; } ;
typedef TYPE_2__ td_notify_t ;
typedef scalar_t__ td_err_e ;
typedef int CORE_ADDR ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int ,int ,TYPE_2__*) ;
 scalar_t__ FUNC_4 (int ,int *) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_5 (scalar_t__) ;
 int FUNC_6 (char*,int ) ;

__attribute__((used)) static int
FUNC_7 ()
{
  td_thr_events_t VAR_6;
  td_notify_t VAR_7;
  td_err_e VAR_8;


  FUNC_2 (&VAR_6);
  FUNC_1 (&VAR_6, VAR_0);







  VAR_8 = FUNC_4 (VAR_3, &VAR_6);
  if (VAR_8 != VAR_2)
    {
      FUNC_6 ("Unable to set global thread event mask: %s",
               FUNC_5 (VAR_8));
      return 0;
    }


  VAR_8 = FUNC_3 (VAR_3, VAR_0, &VAR_7);
  if (VAR_8 != VAR_2)
    {
      FUNC_6 ("Unable to get location for thread creation breakpoint: %s",
        FUNC_5 (VAR_8));
      return 0;
    }
  FUNC_0 ((CORE_ADDR) (unsigned long) VAR_7.u.bptaddr,
       VAR_4);
  return 1;
}
