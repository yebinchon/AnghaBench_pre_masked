
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {TYPE_3__* ifp; scalar_t__ timeout; } ;
typedef TYPE_1__ drv_t ;
struct TYPE_7__ {TYPE_1__* sys; } ;
typedef TYPE_2__ cp_chan_t ;
struct TYPE_8__ {int if_drv_flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_3__*,int ,int) ;

__attribute__((used)) static void FUNC_2 (cp_chan_t *VAR_2, void *VAR_3, int VAR_4)
{
 drv_t *VAR_5 = VAR_2->sys;

 VAR_5->timeout = 0;

 FUNC_1(VAR_5->ifp, VAR_0, 1);
 VAR_5->ifp->if_drv_flags &= ~VAR_1;

 FUNC_0 (VAR_5);
}
