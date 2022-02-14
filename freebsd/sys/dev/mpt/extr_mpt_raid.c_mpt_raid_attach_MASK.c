
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef union ccb {int dummy; } ccb ;
struct mpt_softc {int path; int raid_timer; } ;
struct TYPE_5__ {scalar_t__ status; int func_code; } ;
struct ccb_setasync {TYPE_2__ ccb_h; struct mpt_softc* callback_arg; int callback; int event_enable; } ;
struct TYPE_4__ {int reply_handler; } ;
typedef TYPE_1__ mpt_handler_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct mpt_softc*) ;
 int FUNC_1 (struct mpt_softc*) ;
 int VAR_3 ;
 int FUNC_2 (struct mpt_softc*,int *) ;
 int FUNC_3 (struct mpt_softc*,char*) ;
 int VAR_4 ;
 int FUNC_4 (struct mpt_softc*) ;
 int VAR_5 ;
 int FUNC_5 (struct mpt_softc*) ;
 int FUNC_6 (struct mpt_softc*,int ,TYPE_1__,int *) ;
 int FUNC_7 (struct mpt_softc*) ;
 int VAR_6 ;
 int FUNC_8 (union ccb*) ;
 int FUNC_9 (TYPE_2__*,int ,int) ;

__attribute__((used)) static int
FUNC_10(struct mpt_softc *VAR_7)
{
 struct ccb_setasync VAR_8;
 mpt_handler_t VAR_9;
 int VAR_10;

 FUNC_2(VAR_7, &VAR_7->raid_timer);

 VAR_10 = FUNC_7(VAR_7);
 if (VAR_10 != 0) {
  FUNC_3(VAR_7, "Unable to spawn RAID thread!\n");
  goto cleanup;
 }

 FUNC_0(VAR_7);
 VAR_9.reply_handler = VAR_5;
 VAR_10 = FUNC_6(VAR_7, VAR_2, VAR_9,
         &VAR_6);
 if (VAR_10 != 0) {
  FUNC_3(VAR_7, "Unable to register RAID haandler!\n");
  goto cleanup;
 }

 FUNC_9(&VAR_8.ccb_h, VAR_7->path, 5);
 VAR_8.ccb_h.func_code = VAR_3;
 VAR_8.event_enable = VAR_0;
 VAR_8.callback = VAR_4;
 VAR_8.callback_arg = VAR_7;
 FUNC_8((union ccb *)&VAR_8);
 if (VAR_8.ccb_h.status != VAR_1) {
  FUNC_3(VAR_7, "mpt_raid_attach: Unable to register "
   "CAM async handler.\n");
 }
 FUNC_1(VAR_7);

 FUNC_5(VAR_7);
 return (0);
cleanup:
 FUNC_1(VAR_7);
 FUNC_4(VAR_7);
 return (VAR_10);
}
