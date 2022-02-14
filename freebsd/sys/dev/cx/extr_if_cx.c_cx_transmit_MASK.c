
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {TYPE_4__* ifp; scalar_t__ timeout; int intr_action; TYPE_1__* tty; scalar_t__ atimeout; } ;
typedef TYPE_2__ drv_t ;
struct TYPE_9__ {scalar_t__ mode; TYPE_2__* sys; } ;
typedef TYPE_3__ cx_chan_t ;
struct TYPE_10__ {int if_drv_flags; } ;
struct TYPE_7__ {int t_state; scalar_t__ t_dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_4__*,int ,int) ;
 int FUNC_2 (int ,int ) ;

__attribute__((used)) static void FUNC_3 (cx_chan_t *VAR_8, void *VAR_9, int VAR_10)
{
 drv_t *VAR_11 = VAR_8->sys;

 if (!VAR_11)
  return;

 if (VAR_8->mode == VAR_4 && VAR_11->tty) {
  VAR_11->tty->t_state &= ~(VAR_5 | VAR_6);
  VAR_11->atimeout = 0;
  if (VAR_11->tty->t_dev) {
   VAR_11->intr_action |= VAR_0;
   VAR_3 = 1;
   FUNC_2 (VAR_7, 0);
  }
  return;
 }
 VAR_11->timeout = 0;

 FUNC_1(VAR_11->ifp, VAR_1, 1);
 VAR_11->ifp->if_drv_flags &= ~VAR_2;

 FUNC_0 (VAR_11);
}
