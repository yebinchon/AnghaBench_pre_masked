
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int td_thr_events_t ;
typedef int td_notify_t ;
typedef scalar_t__ td_err_e ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (int ,int ,scalar_t__*) ;
 int FUNC_1 () ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *) ;
 int * VAR_5 ;
 int * VAR_6 ;
 scalar_t__ FUNC_4 (int ,int *) ;
 int * VAR_7 ;
 int VAR_8 ;
 int FUNC_5 (scalar_t__) ;
 int FUNC_6 (char*,int ) ;

__attribute__((used)) static void
FUNC_7 (void)
{
  td_thr_events_t VAR_9;
  td_notify_t VAR_10;
  td_err_e VAR_11;



  if (VAR_5 == ((void*)0) || &FUNC_4 == ((void*)0)
      || VAR_6 == ((void*)0) || VAR_7 == ((void*)0))
    return;


  FUNC_3 (&VAR_9);
  FUNC_2 (&VAR_9, VAR_0);







  VAR_11 = FUNC_4 (VAR_8, &VAR_9);
  if (VAR_11 != VAR_2)
    {
      FUNC_6 ("Unable to set global thread event mask: %s",
        FUNC_5 (VAR_11));
      return;
    }


  FUNC_1 ();
  VAR_3 = 0;
  VAR_4 = 0;


  VAR_11 = FUNC_0 (VAR_8, VAR_0, &VAR_3);
  if (VAR_11 != VAR_2)
    {
      FUNC_6 ("Unable to get location for thread creation breakpoint: %s",
        FUNC_5 (VAR_11));
      return;
    }


  VAR_11 = FUNC_0 (VAR_8, VAR_1, &VAR_4);
  if (VAR_11 != VAR_2)
    {
      FUNC_6 ("Unable to get location for thread death breakpoint: %s",
        FUNC_5 (VAR_11));
      return;
    }
}
