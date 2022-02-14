
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ td_err_e ;
struct objfile {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 () ;
 scalar_t__ FUNC_1 (int *,int *) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (struct objfile*) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (char*,int ) ;

void
FUNC_5 (struct objfile *VAR_6)
{
  td_err_e VAR_7;

  if (!VAR_6)
    {
      VAR_5 = 0;
      goto quit;
    }


  if (!VAR_4)
    goto quit;





  VAR_7 = FUNC_0 ();
  if (VAR_7 != VAR_1)
    {
      FUNC_4 ("sol_thread_new_objfile: td_init: %s", FUNC_3 (VAR_7));
      goto quit;
    }

  VAR_7 = FUNC_1 (&VAR_2, &VAR_3);
  if (VAR_7 == VAR_0)
    goto quit;
  else if (VAR_7 != VAR_1)
    {
      FUNC_4 ("sol_thread_new_objfile: td_ta_new: %s", FUNC_3 (VAR_7));
      goto quit;
    }

  VAR_5 = 1;
quit:

  if (&FUNC_2)
    FUNC_2 (VAR_6);
}
