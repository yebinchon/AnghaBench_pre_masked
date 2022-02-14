
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
typedef int prop_buf ;
struct TYPE_6__ {TYPE_2__* ocs; } ;
typedef TYPE_1__ ocs_xport_t ;
struct TYPE_7__ {int auto_xfer_rdy_size; int desc; int hw; } ;
typedef TYPE_2__ ocs_t ;
typedef int int32_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_0 (char*,char*,int) ;
 int FUNC_1 (int *,int ,int*) ;
 scalar_t__ FUNC_2 (int *,int ,int) ;
 int FUNC_3 (TYPE_2__*,char*,int,int) ;
 int FUNC_4 (TYPE_2__*,char*,...) ;
 scalar_t__ FUNC_5 (char*) ;
 int FUNC_6 (char*,int ,int ) ;

__attribute__((used)) static int32_t
FUNC_7(ocs_xport_t *VAR_9)
{
 ocs_t *VAR_10 = VAR_9->ocs;
 uint32_t VAR_11;
 char VAR_12[32];
 uint32_t VAR_13 = 512;
 uint8_t VAR_14 = 0;

 FUNC_1(&VAR_10->hw, VAR_3, &VAR_11);
 if (!VAR_11) {
  VAR_10->auto_xfer_rdy_size = 0;
  FUNC_4(VAR_10, "Cannot enable auto xfer rdy for this port\n");
  return 0;
 }

 if (FUNC_2(&VAR_10->hw, VAR_6, VAR_10->auto_xfer_rdy_size)) {
  FUNC_4(VAR_10, "%s: Can't set auto xfer rdy mode\n", VAR_10->desc);
  return -1;
 }







 if (FUNC_0("p_type", VAR_12, sizeof(VAR_12)) == 0) {
  VAR_14 = FUNC_6(VAR_12, 0, 0);
 }
 if (FUNC_0("ramdisc_blocksize", VAR_12, sizeof(VAR_12)) == 0) {
  VAR_13 = FUNC_6(VAR_12, 0, 0);
 }
 if (FUNC_0("external_dif", VAR_12, sizeof(VAR_12)) == 0) {
  if(FUNC_5(VAR_12)) {
   if (VAR_14 == 0) {
    VAR_14 = 1;
   }
  }
 }

 if (VAR_14 != 0) {
  if (FUNC_2(&VAR_10->hw, VAR_7, VAR_8)) {
   FUNC_4(VAR_10, "%s: Can't set auto xfer rdy mode\n", VAR_10->desc);
   return -1;
  }
  if (FUNC_2(&VAR_10->hw, VAR_2, VAR_13)) {
   FUNC_4(VAR_10, "%s: Can't set auto xfer rdy blk size\n", VAR_10->desc);
   return -1;
  }
  if (FUNC_2(&VAR_10->hw, VAR_4, VAR_14)) {
   FUNC_4(VAR_10, "%s: Can't set auto xfer rdy mode\n", VAR_10->desc);
   return -1;
  }
  if (FUNC_2(&VAR_10->hw, VAR_5, VAR_8)) {
   FUNC_4(VAR_10, "%s: Can't set auto xfer rdy ref tag\n", VAR_10->desc);
   return -1;
  }
  if (FUNC_2(&VAR_10->hw, VAR_1, VAR_0)) {
   FUNC_4(VAR_10, "%s: Can't set auto xfer rdy app tag valid\n", VAR_10->desc);
   return -1;
  }
 }
 FUNC_3(VAR_10, "Auto xfer rdy is enabled, p_type=%d, blksize=%d\n",
  VAR_14, VAR_13);
 return 0;
}
