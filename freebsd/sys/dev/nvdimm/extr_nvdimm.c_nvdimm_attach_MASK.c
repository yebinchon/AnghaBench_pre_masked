
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct nvdimm_dev {int nv_flush_addr_cnt; int nv_flush_addr; int nv_handle; int nv_dev; } ;
typedef int device_t ;
struct TYPE_3__ {int Header; } ;
typedef TYPE_1__ ACPI_TABLE_NFIT ;
typedef int ACPI_TABLE_HEADER ;
typedef int ACPI_STATUS ;
typedef int * ACPI_HANDLE ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int ,int,int **) ;
 int FUNC_2 (int *) ;
 int VAR_1 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (TYPE_1__*,int ,int *,int *) ;
 scalar_t__ VAR_2 ;
 struct nvdimm_dev* FUNC_5 (int ) ;
 int FUNC_6 (int ,char*) ;
 int * FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (struct nvdimm_dev*) ;
 int FUNC_10 (struct nvdimm_dev*) ;

__attribute__((used)) static int
FUNC_11(device_t VAR_3)
{
 struct nvdimm_dev *VAR_4;
 ACPI_TABLE_NFIT *VAR_5;
 ACPI_HANDLE VAR_6;
 ACPI_STATUS VAR_7;
 int VAR_8;

 VAR_4 = FUNC_5(VAR_3);
 VAR_6 = FUNC_7(VAR_3);
 FUNC_3(VAR_6 != ((void*)0));
 VAR_4->nv_dev = VAR_3;
 VAR_4->nv_handle = FUNC_8(VAR_3);

 VAR_7 = FUNC_1(VAR_0, 1, (ACPI_TABLE_HEADER **)&VAR_5);
 if (FUNC_0(VAR_7)) {
  if (VAR_2)
   FUNC_6(VAR_3, "cannot get NFIT\n");
  return (VAR_1);
 }
 FUNC_4(VAR_5, VAR_4->nv_handle, &VAR_4->nv_flush_addr,
     &VAR_4->nv_flush_addr_cnt);
 FUNC_2(&VAR_5->Header);
 VAR_8 = FUNC_9(VAR_4);
 if (VAR_8 == 0) {




  FUNC_10(VAR_4);
 }
 return (0);
}
