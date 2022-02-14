
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ps_prochandle {int pid; } ;
struct cleanup {int dummy; } ;
typedef int ps_err_e ;
typedef int paddr_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct cleanup*) ;
 int VAR_2 ;
 int FUNC_1 (int ) ;
 struct cleanup* FUNC_2 () ;
 int FUNC_3 (int ,char*,size_t) ;
 int FUNC_4 (int ,char*,size_t) ;

__attribute__((used)) static ps_err_e
FUNC_5 (const struct ps_prochandle *VAR_3, paddr_t VAR_4,
  char *VAR_5, size_t VAR_6, int VAR_7)
{
  struct cleanup *VAR_8 = FUNC_2 ();
  int VAR_9;

  VAR_2 = FUNC_1 (VAR_3->pid);

  if (VAR_7)
    VAR_9 = FUNC_4 (VAR_4, VAR_5, VAR_6);
  else
    VAR_9 = FUNC_3 (VAR_4, VAR_5, VAR_6);

  FUNC_0 (VAR_8);

  return (VAR_9 == 0 ? VAR_1 : VAR_0);
}
