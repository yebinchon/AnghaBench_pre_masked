
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int VICMD ;
struct TYPE_6__ {TYPE_1__* gp; } ;
struct TYPE_5__ {int (* scr_refresh ) (TYPE_2__*,int) ;} ;
typedef TYPE_2__ SCR ;


 int FUNC_0 (TYPE_2__*,int) ;

int
FUNC_1(SCR *VAR_0, VICMD *VAR_1)
{
 return (VAR_0->gp->scr_refresh(VAR_0, 1));
}
