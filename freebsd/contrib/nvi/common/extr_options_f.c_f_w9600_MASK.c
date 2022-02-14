
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u_long ;
struct TYPE_7__ {TYPE_1__* gp; } ;
struct TYPE_6__ {scalar_t__ (* scr_baud ) (TYPE_2__*,int*) ;} ;
typedef TYPE_2__ SCR ;
typedef int OPTION ;


 int FUNC_0 (TYPE_2__*,int *,char*,int*) ;
 scalar_t__ FUNC_1 (TYPE_2__*,int*) ;

int
FUNC_2(
 SCR *VAR_0,
 OPTION *VAR_1,
 char *VAR_2,
 u_long *VAR_3)
{
 u_long VAR_4;


 if (VAR_0->gp->scr_baud(VAR_0, &VAR_4))
  return (1);
 if (VAR_4 <= 4800)
  return (0);

 return (FUNC_0(VAR_0, VAR_1, VAR_2, VAR_3));
}
