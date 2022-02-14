
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int uint32_t ;
typedef int driver_t ;
typedef int device_t ;
struct TYPE_9__ {int Header; } ;
struct TYPE_7__ {scalar_t__ Length; } ;
struct TYPE_8__ {int Info; TYPE_1__ Header; } ;
typedef TYPE_2__ ACPI_TABLE_IVRS ;
typedef int ACPI_TABLE_HEADER ;
typedef int ACPI_STATUS ;
typedef TYPE_3__ ACPI_IVRS_HARDWARE ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_1 ;
 int FUNC_1 (int ,int,int **) ;
 int * FUNC_2 (int ,scalar_t__,char*,int) ;
 int FUNC_3 (TYPE_3__*,char*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_4 (int ,int,int) ;
 scalar_t__ FUNC_5 (char*) ;
 int * FUNC_6 (int ,char*,int) ;
 int VAR_5 ;
 int VAR_6 ;
 int ** VAR_7 ;
 TYPE_3__* FUNC_7 (int) ;
 TYPE_3__** VAR_8 ;
 scalar_t__ FUNC_8 (int *,int *) ;
 int FUNC_9 (int ,int *) ;
 int ** FUNC_10 (int,int ,int) ;
 int FUNC_11 (char*,int,...) ;

__attribute__((used)) static void
FUNC_12(driver_t *VAR_9, device_t VAR_10)
{
 ACPI_TABLE_IVRS *VAR_11;
 ACPI_IVRS_HARDWARE *VAR_12;
 ACPI_STATUS VAR_13;
 int VAR_14, VAR_15 = 0;
 uint32_t VAR_16;

 if (FUNC_5("ivhd"))
  return;

 VAR_13 = FUNC_1(VAR_1, 1, (ACPI_TABLE_HEADER **)&VAR_11);
 if (FUNC_0(VAR_13))
  return;

 if (VAR_11->Header.Length == 0) {
  return;
 }

 VAR_16 = VAR_11->Info;
 FUNC_11("AMD-Vi: IVRS Info VAsize = %d PAsize = %d GVAsize = %d"
        " flags:%b\n",
  FUNC_4(VAR_16, 21, 15), FUNC_4(VAR_16, 14, 8),
  FUNC_4(VAR_16, 7, 5), FUNC_4(VAR_16, 22, 22),
  "\020\001EFRSup");

 FUNC_9(VAR_6, ((void*)0));
 if (!VAR_5)
  return;

 for (VAR_14 = 0; VAR_14 < VAR_5; VAR_14++) {
  VAR_12 = FUNC_7(VAR_14);
  FUNC_3(VAR_12, ("ivhd%d is NULL\n", VAR_14));
  VAR_8[VAR_14] = VAR_12;
 }





 for (VAR_14 = VAR_5 - 1 ; VAR_14 > 0 ; VAR_14--){
         if (FUNC_8(&VAR_8[VAR_14-1]->Header,
   &VAR_8[VAR_14]->Header)) {
   VAR_8[VAR_14-1] = VAR_8[VAR_14];
   VAR_5--;
  }
       }

 VAR_7 = FUNC_10(sizeof(device_t) * VAR_5, VAR_2,
  VAR_3 | VAR_4);
 for (VAR_14 = 0; VAR_14 < VAR_5; VAR_14++) {
  VAR_12 = VAR_8[VAR_14];
  FUNC_3(VAR_12, ("ivhd%d is NULL\n", VAR_14));





  VAR_7[VAR_14] = FUNC_2(VAR_10,
      VAR_0 + 10 * 10, "ivhd", VAR_14);





  if (VAR_7[VAR_14] == ((void*)0)) {
   VAR_7[VAR_14] = FUNC_6(VAR_10, "ivhd", VAR_14);
   if (VAR_7[VAR_14] == ((void*)0)) {
    FUNC_11("AMD-Vi: cant find ivhd%d\n", VAR_14);
    break;
   }
  }
  VAR_15++;
 }




 VAR_5 = VAR_15;
}
