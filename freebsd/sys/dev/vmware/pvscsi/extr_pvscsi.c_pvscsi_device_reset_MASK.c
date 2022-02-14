
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct pvscsi_softc {int dev; } ;
struct pvscsi_cmd_desc_reset_device {int target; } ;
typedef int cmd ;


 int FUNC_0 (int,int ,char*) ;
 int VAR_0 ;
 int FUNC_1 (int ,char*,int ) ;
 int FUNC_2 (struct pvscsi_cmd_desc_reset_device*,int ,int) ;
 int FUNC_3 (struct pvscsi_softc*) ;
 int FUNC_4 (struct pvscsi_softc*,int ,struct pvscsi_cmd_desc_reset_device*,int) ;

__attribute__((used)) static void
FUNC_5(struct pvscsi_softc *VAR_1, uint32_t VAR_2)
{
 struct pvscsi_cmd_desc_reset_device VAR_3;

 FUNC_2(&VAR_3, 0, sizeof(VAR_3));

 VAR_3.target = VAR_2;

 FUNC_1(VAR_1->dev, "Device reset for target %u\n", VAR_2);

 FUNC_4(VAR_1, VAR_0, &VAR_3, sizeof VAR_3);
 FUNC_3(VAR_1);

 FUNC_0(2, VAR_1->dev, "device reset done\n");
}
