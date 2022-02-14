
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {TYPE_1__* gp; } ;
struct TYPE_7__ {int (* scr_refresh ) (TYPE_2__*,int ) ;int (* scr_move ) (TYPE_2__*,int ,int ) ;} ;
typedef TYPE_2__ SCR ;


 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_2__*,int ,int ) ;
 int FUNC_2 (TYPE_2__*,int ) ;

void
FUNC_3(SCR *VAR_0)
{
 (void)VAR_0->gp->scr_move(VAR_0, FUNC_0(VAR_0), 0);
 (void)VAR_0->gp->scr_refresh(VAR_0, 0);
}
