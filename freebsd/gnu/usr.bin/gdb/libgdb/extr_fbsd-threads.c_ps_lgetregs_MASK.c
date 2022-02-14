
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ps_prochandle {int dummy; } ;
struct cleanup {int dummy; } ;
typedef int ps_err_e ;
typedef int prgregset_t ;
typedef int lwpid_t ;


 int FUNC_0 (int ,int ) ;
 int VAR_0 ;
 int FUNC_1 (struct cleanup*) ;
 int FUNC_2 (int ,int) ;
 int VAR_1 ;
 struct cleanup* FUNC_3 () ;
 int FUNC_4 (int) ;

ps_err_e
FUNC_5 (struct ps_prochandle *VAR_2, lwpid_t VAR_3, prgregset_t VAR_4)
{
  struct cleanup *VAR_5;

  VAR_5 = FUNC_3 ();


  VAR_1 = FUNC_0 (0, VAR_3);

  FUNC_4 (-1);
  FUNC_2 (VAR_4, -1);
  FUNC_1 (VAR_5);
  return VAR_0;
}
