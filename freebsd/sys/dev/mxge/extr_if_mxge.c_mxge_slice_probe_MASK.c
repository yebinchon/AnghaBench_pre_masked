
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct mcp_slot {int dummy; } ;
struct TYPE_8__ {int num_slices; char* fw_name; int dev; } ;
typedef TYPE_1__ mxge_softc_t ;
struct TYPE_9__ {int data0; } ;
typedef TYPE_2__ mxge_cmd_t ;
typedef int mcp_dma_addr_t ;
typedef int cmd ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,char*,...) ;
 int FUNC_1 (TYPE_2__*,int ,int) ;
 int VAR_4 ;
 char* VAR_5 ;
 char* VAR_6 ;
 char* VAR_7 ;
 int FUNC_2 (TYPE_1__*,int ) ;
 int VAR_8 ;
 int FUNC_3 (TYPE_1__*,int ,TYPE_2__*) ;
 scalar_t__ VAR_9 ;
 int FUNC_4 (int ) ;

__attribute__((used)) static void
FUNC_5(mxge_softc_t *VAR_10)
{
 mxge_cmd_t VAR_11;
 char *VAR_12;
 int VAR_13, VAR_14, VAR_15;

 VAR_10->num_slices = 1;





 if (VAR_8 == 0 || VAR_8 == 1 || VAR_4 < 2)
  return;


 VAR_13 = FUNC_4(VAR_10->dev);
 if (VAR_13 < 2)
  return;


 VAR_12 = VAR_10->fw_name;
 if (VAR_12 == VAR_5)
  VAR_10->fw_name = VAR_6;
 else
  VAR_10->fw_name = VAR_7;
 VAR_14 = FUNC_2(VAR_10, 0);
 if (VAR_14 != 0) {
  FUNC_0(VAR_10->dev, "Falling back to a single slice\n");
  return;
 }



 FUNC_1(&VAR_11, 0, sizeof (VAR_11));
 VAR_14 = FUNC_3(VAR_10, VAR_2, &VAR_11);
 if (VAR_14 != 0) {
  FUNC_0(VAR_10->dev, "failed reset\n");
  goto abort_with_fw;
 }


 VAR_14 = FUNC_3(VAR_10, VAR_1, &VAR_11);
 if (VAR_14 != 0) {
  FUNC_0(VAR_10->dev, "Cannot determine rx ring size\n");
  goto abort_with_fw;
 }
 VAR_15 = 2 * (VAR_11.data0 / sizeof (mcp_dma_addr_t));


 VAR_11.data0 = VAR_15 * sizeof (struct mcp_slot);
 VAR_14 = FUNC_3(VAR_10, VAR_3, &VAR_11);
 if (VAR_14 != 0) {
  FUNC_0(VAR_10->dev, "failed MXGEFW_CMD_SET_INTRQ_SIZE\n");
  goto abort_with_fw;
 }


 VAR_14 = FUNC_3(VAR_10, VAR_0, &VAR_11);
 if (VAR_14 != 0) {
  FUNC_0(VAR_10->dev,
         "failed MXGEFW_CMD_GET_MAX_RSS_QUEUES\n");
  goto abort_with_fw;
 }
 VAR_10->num_slices = VAR_11.data0;
 if (VAR_10->num_slices > VAR_13)
  VAR_10->num_slices = VAR_13;

 if (VAR_8 == -1) {

  if (VAR_10->num_slices > VAR_4)
   VAR_10->num_slices = VAR_4;
 } else {
  if (VAR_10->num_slices > VAR_8)
   VAR_10->num_slices = VAR_8;
 }

 while (VAR_10->num_slices & (VAR_10->num_slices - 1))
  VAR_10->num_slices--;

 if (VAR_9)
  FUNC_0(VAR_10->dev, "using %d slices\n",
         VAR_10->num_slices);

 return;

abort_with_fw:
 VAR_10->fw_name = VAR_12;
 (void) FUNC_2(VAR_10, 0);
}
