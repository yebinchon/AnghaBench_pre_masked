
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint32_t ;
struct mmc_command {int flags; void* error; TYPE_4__* data; void** resp; } ;
struct aw_mmc_softc {int aw_resid; TYPE_3__* aw_req; TYPE_2__* ccb; } ;
struct TYPE_8__ {int len; } ;
struct TYPE_7__ {struct mmc_command* cmd; } ;
struct TYPE_5__ {struct mmc_command cmd; } ;
struct TYPE_6__ {TYPE_1__ mmcio; } ;


 void* FUNC_0 (struct aw_mmc_softc*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int) ;
 void* VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_2 (struct aw_mmc_softc*) ;

__attribute__((used)) static void
FUNC_3(struct aw_mmc_softc *VAR_9)
{
 int VAR_10;
 struct mmc_command *VAR_11;
 uint32_t VAR_12;

 VAR_10 = 1000;
 while (--VAR_10 > 0) {
  VAR_12 = FUNC_0(VAR_9, VAR_4);
  if ((VAR_12 & VAR_5) == 0)
   break;
  FUNC_1(1000);
 }



 VAR_11 = VAR_9->aw_req->cmd;

 if (VAR_10 == 0) {
  VAR_11->error = VAR_6;
  FUNC_2(VAR_9);
  return;
 }
 if (VAR_11->flags & VAR_8) {
  if (VAR_11->flags & VAR_7) {
   VAR_11->resp[0] = FUNC_0(VAR_9, VAR_3);
   VAR_11->resp[1] = FUNC_0(VAR_9, VAR_2);
   VAR_11->resp[2] = FUNC_0(VAR_9, VAR_1);
   VAR_11->resp[3] = FUNC_0(VAR_9, VAR_0);
  } else
   VAR_11->resp[0] = FUNC_0(VAR_9, VAR_0);
 }

 if (VAR_11->data != ((void*)0) && (VAR_9->aw_resid << 2) < VAR_11->data->len)
  VAR_11->error = VAR_6;
 FUNC_2(VAR_9);
}
