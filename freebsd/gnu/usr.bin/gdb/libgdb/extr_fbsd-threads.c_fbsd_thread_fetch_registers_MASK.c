
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int td_thrhandle_t ;
typedef scalar_t__ td_err_e ;
typedef int prgregset_t ;
typedef int prfpregset_t ;


 char* FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (char*,int ,char*,int ) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int ,int,char*) ;
 int VAR_2 ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int ) ;
 scalar_t__ FUNC_8 (int ,char*,int *) ;
 scalar_t__ FUNC_9 (int *,int *) ;
 scalar_t__ FUNC_10 (int *,int ) ;
 scalar_t__ FUNC_11 (int *,char*) ;
 int VAR_3 ;
 int FUNC_12 (scalar_t__) ;

__attribute__((used)) static void
FUNC_13 (int VAR_4)
{
  prgregset_t VAR_5;
  prfpregset_t VAR_6;
  td_thrhandle_t VAR_7;
  td_err_e VAR_8;




  if (!FUNC_1 (VAR_2))
    {
      FUNC_3 (VAR_4);
      return;
    }

  VAR_8 = FUNC_8 (VAR_3, FUNC_0 (VAR_2), &VAR_7);
  if (VAR_8 != VAR_0)
    FUNC_2 ("Cannot find thread %d: Thread ID=%ld, %s",
           FUNC_5 (VAR_2),
           FUNC_0 (VAR_2), FUNC_12 (VAR_8));

  VAR_8 = FUNC_10 (&VAR_7, VAR_5);
  if (VAR_8 != VAR_0)
    FUNC_2 ("Cannot fetch general-purpose registers for thread %d: Thread ID=%ld, %s",
           FUNC_5 (VAR_2),
           FUNC_0 (VAR_2), FUNC_12 (VAR_8));
      VAR_8 = FUNC_9 (&VAR_7, &VAR_6);
      if (VAR_8 != VAR_0)
 FUNC_2 ("Cannot get floating-point registers for thread %d: Thread ID=%ld, %s",
        FUNC_5 (VAR_2),
        FUNC_0 (VAR_2), FUNC_12 (VAR_8));
      FUNC_6 (&VAR_6);




  FUNC_7 (VAR_5);
}
