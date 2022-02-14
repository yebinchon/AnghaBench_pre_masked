
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef union ccb {int dummy; } ccb ;
struct vtscsi_softc {int vtscsi_sim; int vtscsi_path; } ;
struct TYPE_2__ {int status; int func_code; } ;
struct ccb_setasync {int event_enable; TYPE_1__ ccb_h; int callback_arg; int callback; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (union ccb*) ;
 int FUNC_1 (TYPE_1__*,int ,int) ;

__attribute__((used)) static int
FUNC_2(struct vtscsi_softc *VAR_4)
{
 struct ccb_setasync VAR_5;

 FUNC_1(&VAR_5.ccb_h, VAR_4->vtscsi_path, 5);
 VAR_5.ccb_h.func_code = VAR_2;
 VAR_5.event_enable = VAR_1 | VAR_0;
 VAR_5.callback = VAR_3;
 VAR_5.callback_arg = VAR_4->vtscsi_sim;

 FUNC_0((union ccb *) &VAR_5);

 return (VAR_5.ccb_h.status);
}
