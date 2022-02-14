
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ps_prochandle {int dummy; } ;
struct cleanup {int dummy; } ;
typedef int ps_err_e ;
typedef int prfpregset_t ;
typedef int lwpid_t ;
typedef int gdb_fpregset_t ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int FUNC_2 (struct cleanup*) ;
 int VAR_1 ;
 struct cleanup* FUNC_3 () ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int) ;

ps_err_e
FUNC_6 (struct ps_prochandle *VAR_2, lwpid_t VAR_3,
               const prfpregset_t *VAR_4)
{
  struct cleanup *VAR_5;

  VAR_5 = FUNC_3 ();
  VAR_1 = FUNC_0 (VAR_3, FUNC_1 (VAR_1));
  FUNC_4 ((gdb_fpregset_t *) VAR_4);
  FUNC_5 (-1);
  FUNC_2 (VAR_5);
  return VAR_0;
}
