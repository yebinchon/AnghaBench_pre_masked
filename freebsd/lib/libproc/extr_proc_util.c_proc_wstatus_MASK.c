
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct proc_handle {int status; int wstat; } ;


 int FUNC_0 (char*) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int) ;
 scalar_t__ FUNC_3 (int) ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_4 (struct proc_handle*) ;
 scalar_t__ FUNC_5 (int ,int*,int ) ;

int
FUNC_6(struct proc_handle *VAR_5)
{
 int VAR_6;

 if (VAR_5 == ((void*)0))
  return (-1);
 if (FUNC_5(FUNC_4(VAR_5), &VAR_6, VAR_3) < 0) {
  if (VAR_4 != VAR_0)
   FUNC_0("waitpid");
  return (-1);
 }
 if (FUNC_3(VAR_6))
  VAR_5->status = VAR_1;
 if (FUNC_1(VAR_6) || FUNC_2(VAR_6))
  VAR_5->status = VAR_2;
 VAR_5->wstat = VAR_6;

 return (VAR_5->status);
}
