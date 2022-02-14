
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef void* uint16_t ;
struct TYPE_8__ {int update; int sendmarker; TYPE_1__* isp_devparam; } ;
typedef TYPE_2__ sdparam ;
struct TYPE_9__ {int* param; } ;
typedef TYPE_3__ mbreg_t ;
typedef int ispsoftc_t ;
struct TYPE_7__ {scalar_t__ dev_enable; int dev_refresh; int goal_flags; int goal_offset; int goal_period; int actv_flags; scalar_t__ dev_update; void* actv_offset; void* actv_period; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_0 (int *) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_1 (TYPE_3__*,int ,int ,int ) ;
 TYPE_2__* FUNC_2 (int *,int) ;
 int FUNC_3 (int *,int ,int,int) ;
 int FUNC_4 (int *,TYPE_3__*) ;
 int FUNC_5 (int *,int ,char*,int,int,...) ;

__attribute__((used)) static void
FUNC_6(ispsoftc_t *VAR_13, int VAR_14)
{
 int VAR_15;
 mbreg_t VAR_16;
 sdparam *VAR_17;

 if (FUNC_0(VAR_13)) {



  return;
 }
 VAR_17 = FUNC_2(VAR_13, VAR_14);
 VAR_17->update = 0;

 for (VAR_15 = 0; VAR_15 < VAR_8; VAR_15++) {
  uint16_t VAR_18, VAR_19, VAR_20;
  int VAR_21;

  if (VAR_17->isp_devparam[VAR_15].dev_enable == 0) {
   VAR_17->isp_devparam[VAR_15].dev_update = 0;
   VAR_17->isp_devparam[VAR_15].dev_refresh = 0;
   FUNC_5(VAR_13, VAR_7, "skipping target %d bus %d update", VAR_15, VAR_14);
   continue;
  }







  FUNC_1(&VAR_16, 0, VAR_9, 0);




  if (VAR_17->isp_devparam[VAR_15].dev_refresh) {
   VAR_16.param[0] = VAR_11;
   VAR_21 = 1;
  } else if (VAR_17->isp_devparam[VAR_15].dev_update) {
   VAR_16.param[0] = VAR_12;





   VAR_17->isp_devparam[VAR_15].goal_flags |= VAR_2;
   VAR_17->isp_devparam[VAR_15].goal_flags &= ~VAR_1;
   VAR_16.param[2] = VAR_17->isp_devparam[VAR_15].goal_flags;





   if ((VAR_16.param[2] & (VAR_3|VAR_5)) != 0) {
    VAR_16.param[2] |= VAR_0;
   }

   if (VAR_16.param[2] & VAR_3) {
    VAR_16.param[3] =
        (VAR_17->isp_devparam[VAR_15].goal_offset << 8) |
        (VAR_17->isp_devparam[VAR_15].goal_period);
   }
   VAR_17->isp_devparam[VAR_15].actv_flags &= ~VAR_4;
   VAR_17->isp_devparam[VAR_15].actv_flags |=
       (VAR_17->isp_devparam[VAR_15].goal_flags & VAR_4);
   FUNC_5(VAR_13, VAR_7, "bus %d set tgt %d flags 0x%x off 0x%x period 0x%x",
       VAR_14, VAR_15, VAR_16.param[2], VAR_16.param[3] >> 8, VAR_16.param[3] & 0xff);
   VAR_21 = 0;
  } else {
   continue;
  }
  VAR_16.param[1] = (VAR_14 << 15) | (VAR_15 << 8);
  FUNC_4(VAR_13, &VAR_16);
  if (VAR_16.param[0] != VAR_10) {
   continue;
  }
  if (VAR_21 == 0) {
   VAR_17->sendmarker = 1;
   VAR_17->isp_devparam[VAR_15].dev_update = 0;
   VAR_17->isp_devparam[VAR_15].dev_refresh = 1;
  } else {
   VAR_17->isp_devparam[VAR_15].dev_refresh = 0;
   VAR_18 = VAR_16.param[2];
   VAR_19 = VAR_16.param[3] & 0xff;
   VAR_20 = VAR_16.param[3] >> 8;
   VAR_17->isp_devparam[VAR_15].actv_flags = VAR_18;
   VAR_17->isp_devparam[VAR_15].actv_period = VAR_19;
   VAR_17->isp_devparam[VAR_15].actv_offset = VAR_20;
   FUNC_3(VAR_13, VAR_6, VAR_14, VAR_15);
  }
 }

 for (VAR_15 = 0; VAR_15 < VAR_8; VAR_15++) {
  if (VAR_17->isp_devparam[VAR_15].dev_update ||
      VAR_17->isp_devparam[VAR_15].dev_refresh) {
   VAR_17->update = 1;
   break;
  }
 }
}
