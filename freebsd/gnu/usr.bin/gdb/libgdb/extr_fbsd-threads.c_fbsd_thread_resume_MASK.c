
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {long ti_lid; } ;
typedef TYPE_1__ td_thrinfo_t ;
typedef int td_thrhandle_t ;
typedef int ptid_t ;
typedef long pid_t ;
typedef enum target_signal { ____Placeholder_target_signal } target_signal ;
typedef int caddr_t ;
struct TYPE_7__ {int (* to_resume ) (int ,int,int) ;} ;
struct TYPE_6__ {long pid; } ;


 long FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 TYPE_4__ VAR_9 ;
 int FUNC_3 (char*,...) ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_4 (char*) ;
 TYPE_3__ VAR_14 ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (int,long,int ,int ) ;
 int VAR_15 ;
 int FUNC_7 (int ,int,int) ;
 int VAR_16 ;
 int FUNC_8 (int) ;
 int FUNC_9 (int ,int ,int *) ;
 int FUNC_10 (int ,int ,int *,int ,int ,int ,int ) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *,TYPE_1__*) ;
 int FUNC_13 (int *,int) ;
 int VAR_17 ;
 int FUNC_14 (int) ;

__attribute__((used)) static void
FUNC_15 (ptid_t VAR_18, int VAR_19, enum target_signal VAR_20)
{
  td_thrhandle_t VAR_21;
  td_thrinfo_t VAR_22;
  ptid_t VAR_23;
  int VAR_24, VAR_25;
  long VAR_26, VAR_27 = 0;

  if (!VAR_10)
    {
      VAR_9.to_resume (VAR_18, VAR_19, VAR_20);
      return;
    }

  if (FUNC_1(VAR_18) != -1 && VAR_19 != 0)
    {
      VAR_24 = 0;
      VAR_23 = VAR_18;
    }
  else
    {
      VAR_24 = 1;
      VAR_23 = VAR_11;
    }

  VAR_26 = FUNC_0 (VAR_23);
  if (VAR_26 == 0)
    {

      VAR_25 = FUNC_9 (VAR_17, FUNC_2(VAR_23), &VAR_21);
      if (VAR_25)
        FUNC_3 (FUNC_14 (VAR_25));







      VAR_25 = FUNC_13 (&VAR_21, VAR_19);
      if (VAR_25)
        FUNC_3 (FUNC_14 (VAR_25));
      VAR_25 = FUNC_12 (&VAR_21, &VAR_22);
      if (VAR_25)
        FUNC_3 (FUNC_14 (VAR_25));
      VAR_27 = 1;
      VAR_26 = VAR_22.ti_lid;
    }

  if (VAR_26)
    {
      int VAR_28 = VAR_19 ? VAR_3 : VAR_0;
      if (FUNC_6 (VAR_28, (pid_t) VAR_26, (caddr_t) 1, FUNC_8(VAR_20)))
        FUNC_4 ("PT_SETSTEP/PT_CLEARSTEP");
    }

  if (!FUNC_5 (VAR_12, VAR_13))
    {
       VAR_25 = FUNC_10 (VAR_17, VAR_15, ((void*)0),
          VAR_6, VAR_8,
          VAR_5, VAR_7);
      if (VAR_25 != VAR_4)
        FUNC_3 ("resume error: %s", FUNC_14 (VAR_25));
    }

  if (!VAR_24)
    {
      VAR_25 = FUNC_10 (VAR_17, VAR_16, ((void*)0),
          VAR_6, VAR_8,
          VAR_5, VAR_7);
      if (VAR_25 != VAR_4)
        FUNC_3 ("suspend error: %s", FUNC_14 (VAR_25));
      VAR_12 = VAR_23;
    }
  else
    VAR_12 = VAR_13;

  if (VAR_27)
    {
      VAR_25 = FUNC_11 (&VAR_21);
      if (VAR_25 != VAR_4)
        FUNC_3 ("resume error: %s", FUNC_14 (VAR_25));
    }
  else
    {

      VAR_25 = FUNC_6(VAR_2, VAR_26, 0, 0);
    }


  if (FUNC_6 (VAR_1, VAR_14.pid , (caddr_t)1,
       FUNC_8(VAR_20)))
    FUNC_4 ("PT_CONTINUE");
}
