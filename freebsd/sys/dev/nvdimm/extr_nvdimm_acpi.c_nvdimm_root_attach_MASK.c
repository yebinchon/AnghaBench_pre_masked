
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct nvdimm_root_dev {int dummy; } ;
typedef int device_t ;
struct TYPE_4__ {int Header; } ;
typedef TYPE_1__ ACPI_TABLE_NFIT ;
typedef int ACPI_TABLE_HEADER ;
typedef int ACPI_STATUS ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int ,int,int **) ;
 int FUNC_2 (int *) ;
 int VAR_1 ;
 int FUNC_3 (int ) ;
 struct nvdimm_root_dev* FUNC_4 (int ) ;
 int FUNC_5 (int ,char*) ;
 int FUNC_6 (int ,TYPE_1__*) ;
 int FUNC_7 (struct nvdimm_root_dev*,TYPE_1__*) ;

__attribute__((used)) static int
FUNC_8(device_t VAR_2)
{
 struct nvdimm_root_dev *VAR_3;
 ACPI_TABLE_NFIT *VAR_4;
 ACPI_STATUS VAR_5;
 int VAR_6;

 VAR_5 = FUNC_1(VAR_0, 1, (ACPI_TABLE_HEADER **)&VAR_4);
 if (FUNC_0(VAR_5)) {
  FUNC_5(VAR_2, "cannot get NFIT\n");
  return (VAR_1);
 }
 VAR_6 = FUNC_6(VAR_2, VAR_4);
 if (VAR_6 != 0)
  return (VAR_6);
 VAR_6 = FUNC_3(VAR_2);
 if (VAR_6 != 0)
  return (VAR_6);
 VAR_3 = FUNC_4(VAR_2);
 VAR_6 = FUNC_7(VAR_3, VAR_4);
 FUNC_2(&VAR_4->Header);
 return (VAR_6);
}
