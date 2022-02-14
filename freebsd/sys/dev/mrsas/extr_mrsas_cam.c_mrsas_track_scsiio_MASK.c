
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u_int32_t ;
typedef scalar_t__ target_id_t ;
struct mrsas_softc {int max_fw_cmds; int mrsas_dev; struct mrsas_mpt_cmd** mpt_cmd_list; } ;
struct mrsas_mpt_cmd {TYPE_3__* ccb_ptr; } ;
struct TYPE_5__ {int target_id; } ;
struct TYPE_4__ {int bus_id; } ;
struct TYPE_6__ {TYPE_2__ ccb_h; TYPE_1__ cpi; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*,scalar_t__) ;

__attribute__((used)) static int
FUNC_1(struct mrsas_softc *VAR_3, target_id_t VAR_4, u_int32_t VAR_5)
{
 int VAR_6;
 struct mrsas_mpt_cmd *VAR_7 = ((void*)0);

 for (VAR_6 = 0 ; VAR_6 < VAR_3->max_fw_cmds; VAR_6++) {
  VAR_7 = VAR_3->mpt_cmd_list[VAR_6];




 if (VAR_7->ccb_ptr) {

  if (VAR_5 == 1)
   VAR_4 = (VAR_7->ccb_ptr->ccb_h.target_id - (VAR_1 - 1));

   if (VAR_7->ccb_ptr->cpi.bus_id == VAR_5 &&
       VAR_7->ccb_ptr->ccb_h.target_id == VAR_4) {
    FUNC_0(VAR_3->mrsas_dev,
        "IO commands pending to target id %d\n", VAR_4);
    return VAR_0;
   }
  }
 }

 return VAR_2;
}
