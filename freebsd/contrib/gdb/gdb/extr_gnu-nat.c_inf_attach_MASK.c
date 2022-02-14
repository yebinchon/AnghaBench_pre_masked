
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inf {scalar_t__ pid; } ;


 int FUNC_0 (struct inf*,char*,int) ;
 int FUNC_1 (struct inf*) ;
 int FUNC_2 (struct inf*,int) ;

void
FUNC_3 (struct inf *VAR_0, int VAR_1)
{
  FUNC_0 (VAR_0, "attaching: %d", VAR_1);

  if (VAR_0->pid)
    FUNC_1 (VAR_0);

  FUNC_2 (VAR_0, VAR_1);
}
