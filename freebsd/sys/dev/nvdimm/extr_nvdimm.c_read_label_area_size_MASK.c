
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint8_t ;
typedef void* uint32_t ;
struct nvdimm_dev {void* max_label_xfer; void* label_area_size; int nv_dev; } ;
struct TYPE_8__ {int Length; TYPE_2__* Pointer; } ;
struct TYPE_6__ {int Length; scalar_t__ Pointer; } ;
struct TYPE_7__ {scalar_t__ Type; TYPE_1__ Buffer; } ;
typedef int ACPI_STATUS ;
typedef TYPE_2__ ACPI_OBJECT ;
typedef int * ACPI_HANDLE ;
typedef TYPE_3__ ACPI_BUFFER ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (TYPE_2__*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (int *,int *,int ,int ,int *,TYPE_3__*) ;
 int VAR_6 ;
 int * FUNC_3 (int ) ;

__attribute__((used)) static int
FUNC_4(struct nvdimm_dev *VAR_7)
{
 ACPI_OBJECT *VAR_8;
 ACPI_HANDLE VAR_9;
 ACPI_STATUS VAR_10;
 ACPI_BUFFER VAR_11;
 uint32_t *VAR_12;
 int VAR_13;

 VAR_9 = FUNC_3(VAR_7->nv_dev);
 if (VAR_9 == ((void*)0))
  return (VAR_2);
 VAR_11.Length = VAR_0;
 VAR_11.Pointer = ((void*)0);
 VAR_10 = FUNC_2(VAR_9, (uint8_t *)&VAR_6,
     VAR_5, VAR_4, ((void*)0),
     &VAR_11);
 VAR_13 = VAR_3;
 if (FUNC_0(VAR_10) && VAR_11.Pointer != ((void*)0) &&
     VAR_11.Length >= sizeof(ACPI_OBJECT)) {
  VAR_8 = VAR_11.Pointer;
  if (VAR_8->Type == VAR_1 &&
      VAR_8->Buffer.Length >= 12) {
   VAR_12 = (uint32_t *)VAR_8->Buffer.Pointer;
   VAR_7->label_area_size = VAR_12[1];
   VAR_7->max_label_xfer = VAR_12[2];
   VAR_13 = 0;
  }
 }
 if (VAR_11.Pointer != ((void*)0))
  FUNC_1(VAR_11.Pointer);
 return (VAR_13);
}
