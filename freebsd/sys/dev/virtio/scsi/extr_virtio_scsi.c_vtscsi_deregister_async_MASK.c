
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef union ccb {int dummy; } ccb ;
struct vtscsi_softc {int vtscsi_sim; int vtscsi_path; } ;
struct TYPE_2__ {int func_code; } ;
struct ccb_setasync {int callback_arg; int callback; scalar_t__ event_enable; TYPE_1__ ccb_h; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (union ccb*) ;
 int FUNC_1 (TYPE_1__*,int ,int) ;

__attribute__((used)) static void
FUNC_2(struct vtscsi_softc *VAR_2)
{
 struct ccb_setasync VAR_3;

 FUNC_1(&VAR_3.ccb_h, VAR_2->vtscsi_path, 5);
 VAR_3.ccb_h.func_code = VAR_0;
 VAR_3.event_enable = 0;
 VAR_3.callback = VAR_1;
 VAR_3.callback_arg = VAR_2->vtscsi_sim;

 FUNC_0((union ccb *) &VAR_3);
}
