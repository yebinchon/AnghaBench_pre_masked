
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int uint8_t ;
typedef scalar_t__ uint32_t ;
typedef scalar_t__ uint16_t ;
struct nvdimm_dev {scalar_t__ label_area_size; int max_label_xfer; int nv_dev; } ;
typedef int params ;
typedef scalar_t__ off_t ;
typedef int UINT8 ;
struct TYPE_10__ {int Length; int * Pointer; } ;
struct TYPE_8__ {int Length; int * Pointer; } ;
struct TYPE_7__ {int Count; TYPE_3__* Elements; } ;
struct TYPE_9__ {scalar_t__ Type; TYPE_2__ Buffer; TYPE_1__ Package; } ;
typedef int ACPI_STATUS ;
typedef TYPE_3__ ACPI_OBJECT ;
typedef int * ACPI_HANDLE ;
typedef TYPE_4__ ACPI_BUFFER ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (int *) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_2 (scalar_t__,int ) ;
 int FUNC_3 (int *,int *,int ,int ,TYPE_3__*,TYPE_4__*) ;
 int FUNC_4 (int *,int *,scalar_t__) ;
 int VAR_7 ;
 int * FUNC_5 (int ) ;

__attribute__((used)) static int
FUNC_6(struct nvdimm_dev *VAR_8, uint8_t *VAR_9, off_t VAR_10,
    off_t VAR_11)
{
 ACPI_BUFFER VAR_12;
 ACPI_HANDLE VAR_13;
 ACPI_OBJECT VAR_14, VAR_15, *VAR_16;
 ACPI_STATUS VAR_17;
 uint32_t VAR_18[2];
 off_t VAR_19;
 int VAR_20;

 VAR_20 = 0;
 VAR_13 = FUNC_5(VAR_8->nv_dev);
 if (VAR_10 < 0 || VAR_11 <= 0 ||
     VAR_10 + VAR_11 > VAR_8->label_area_size ||
     VAR_13 == ((void*)0))
  return (VAR_3);
 VAR_14.Type = VAR_2;
 VAR_14.Package.Count = 1;
 VAR_14.Package.Elements = &VAR_15;
 VAR_15.Type = VAR_1;
 VAR_15.Buffer.Length = sizeof(VAR_18);
 VAR_15.Buffer.Pointer = (UINT8 *)VAR_18;
 while (VAR_11 > 0) {
  VAR_19 = FUNC_2(VAR_11, VAR_8->max_label_xfer);
  VAR_18[0] = VAR_10;
  VAR_18[1] = VAR_19;
  VAR_12.Length = VAR_0;
  VAR_12.Pointer = ((void*)0);
  VAR_17 = FUNC_3(VAR_13,
      (uint8_t *)&VAR_7, VAR_6,
      VAR_5, &VAR_14, &VAR_12);
  if (FUNC_0(VAR_17) ||
      VAR_12.Length < sizeof(ACPI_OBJECT) ||
      VAR_12.Pointer == ((void*)0)) {
   VAR_20 = VAR_4;
   break;
  }
  VAR_16 = (ACPI_OBJECT *)VAR_12.Pointer;
  if (VAR_16->Type != VAR_1 ||
      VAR_16->Buffer.Pointer == ((void*)0) ||
      VAR_16->Buffer.Length != 4 + VAR_19 ||
      ((uint16_t *)VAR_16->Buffer.Pointer)[0] != 0) {
   VAR_20 = VAR_4;
   break;
  }
  FUNC_4(VAR_16->Buffer.Pointer + 4, VAR_9, VAR_19);
  VAR_9 += VAR_19;
  VAR_10 += VAR_19;
  VAR_11 -= VAR_19;
  if (VAR_12.Pointer != ((void*)0)) {
   FUNC_1(VAR_12.Pointer);
   VAR_12.Pointer = ((void*)0);
  }
 }
 if (VAR_12.Pointer != ((void*)0))
  FUNC_1(VAR_12.Pointer);
 return (VAR_20);
}
