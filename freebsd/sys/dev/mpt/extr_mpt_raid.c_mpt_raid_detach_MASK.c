
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef union ccb {int dummy; } ccb ;
struct mpt_softc {int path; int raid_timer; } ;
struct TYPE_5__ {int func_code; } ;
struct ccb_setasync {struct mpt_softc* callback_arg; int callback; scalar_t__ event_enable; TYPE_2__ ccb_h; } ;
struct TYPE_4__ {int reply_handler; } ;
typedef TYPE_1__ mpt_handler_t ;


 int VAR_0 ;
 int FUNC_0 (struct mpt_softc*) ;
 int FUNC_1 (struct mpt_softc*) ;
 int VAR_1 ;
 int FUNC_2 (struct mpt_softc*,int *) ;
 int FUNC_3 (struct mpt_softc*,int ,TYPE_1__,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_4 (struct mpt_softc*) ;
 int VAR_4 ;
 int FUNC_5 (union ccb*) ;
 int FUNC_6 (TYPE_2__*,int ,int) ;

__attribute__((used)) static void
FUNC_7(struct mpt_softc *VAR_5)
{
 struct ccb_setasync VAR_6;
 mpt_handler_t VAR_7;

 FUNC_2(VAR_5, &VAR_5->raid_timer);

 FUNC_0(VAR_5);
 FUNC_4(VAR_5);
 VAR_7.reply_handler = VAR_3;
 FUNC_3(VAR_5, VAR_0, VAR_7,
          VAR_4);
 FUNC_6(&VAR_6.ccb_h, VAR_5->path, 5);
 VAR_6.ccb_h.func_code = VAR_1;
 VAR_6.event_enable = 0;
 VAR_6.callback = VAR_2;
 VAR_6.callback_arg = VAR_5;
 FUNC_5((union ccb *)&VAR_6);
 FUNC_1(VAR_5);
}
