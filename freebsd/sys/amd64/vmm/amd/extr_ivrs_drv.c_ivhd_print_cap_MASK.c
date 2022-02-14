
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct amdvi_softc {int start_dev_rid; int end_dev_rid; int dev; int ext_feature; int ivhd_feature; int ivhd_type; int ivhd_flag; } ;
typedef int device_t ;
typedef int ACPI_IVRS_HARDWARE ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*,int,...) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int ,int ) ;
 int FUNC_3 (int ,int ,int ) ;

__attribute__((used)) static int
FUNC_4(struct amdvi_softc *VAR_2, ACPI_IVRS_HARDWARE * VAR_3)
{
 device_t VAR_4;
 int VAR_5;

 VAR_4 = VAR_2->dev;

 FUNC_3(VAR_4, VAR_2->ivhd_type, VAR_2->ivhd_flag);
 FUNC_2(VAR_4, VAR_2->ivhd_type, VAR_2->ivhd_feature);
 FUNC_1(VAR_4, VAR_2->ext_feature);
 VAR_5 = 7;

 if (VAR_5 < VAR_1) {
  FUNC_0(VAR_4, "insufficient PTP level:%d\n",
   VAR_5);
  return (VAR_0);
 } else {
  FUNC_0(VAR_2->dev, "supported paging level:%d, will use only: %d\n",
       VAR_5, VAR_1);
 }

 FUNC_0(VAR_2->dev, "device range: 0x%x - 0x%x\n",
   VAR_2->start_dev_rid, VAR_2->end_dev_rid);

 return (0);
}
