
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_11__ {int iflags; } ;
struct TYPE_10__ {TYPE_1__* gp; } ;
struct TYPE_9__ {scalar_t__ (* scr_suspend ) (TYPE_2__*,int*) ;} ;
typedef TYPE_2__ SCR ;
typedef TYPE_3__ EXCMD ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ) ;
 int VAR_2 ;
 int FUNC_1 (TYPE_2__*,int *,int ) ;
 scalar_t__ FUNC_2 (TYPE_2__*,int ) ;
 scalar_t__ FUNC_3 (TYPE_2__*,int*) ;

int
FUNC_4(SCR *VAR_3, EXCMD *VAR_4)
{
 int VAR_5;


 if (!FUNC_0(VAR_4->iflags, VAR_1) && FUNC_2(VAR_3, VAR_2))
  return (1);

 if (VAR_3->gp->scr_suspend(VAR_3, &VAR_5))
  return (1);
 if (!VAR_5)
  FUNC_1(VAR_3, ((void*)0), VAR_0);
 return (0);
}
