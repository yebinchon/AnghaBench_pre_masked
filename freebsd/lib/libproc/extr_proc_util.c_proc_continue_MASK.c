
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct proc_handle {scalar_t__ status; int wstat; } ;
typedef int caddr_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct proc_handle*) ;
 scalar_t__ FUNC_2 (int ,int ,int ,int) ;

int
FUNC_3(struct proc_handle *VAR_4)
{
 int VAR_5;

 if (VAR_4 == ((void*)0))
  return (-1);

 if (VAR_4->status == VAR_1 && FUNC_0(VAR_4->wstat) != VAR_3)
  VAR_5 = FUNC_0(VAR_4->wstat);
 else
  VAR_5 = 0;
 if (FUNC_2(VAR_2, FUNC_1(VAR_4), (caddr_t)(uintptr_t)1,
     VAR_5) != 0)
  return (-1);

 VAR_4->status = VAR_0;

 return (0);
}
