
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int UINT32 ;
struct TYPE_12__ {int * Pointer; int Length; } ;
struct TYPE_9__ {int Value; } ;
struct TYPE_11__ {TYPE_1__ Integer; int Type; } ;
struct TYPE_10__ {int Count; TYPE_3__* Pointer; } ;
typedef TYPE_2__ ACPI_OBJECT_LIST ;
typedef TYPE_3__ ACPI_OBJECT ;
typedef int ACPI_HANDLE ;
typedef TYPE_4__ ACPI_BUFFER ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (TYPE_3__*,int) ;
 int FUNC_2 (int ) ;
 int VAR_1 ;
 int FUNC_3 (int ,int ,TYPE_2__*,TYPE_4__*) ;
 int FUNC_4 (int *) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 size_t VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_5 (TYPE_3__*,size_t,int*) ;
 int FUNC_6 (char*) ;
 int VAR_13 ;

__attribute__((used)) static int
FUNC_7(ACPI_HANDLE VAR_14, int VAR_15, int VAR_16, UINT32 *VAR_17)
{
 ACPI_OBJECT_LIST VAR_18;
 ACPI_BUFFER VAR_19;
 ACPI_OBJECT VAR_20[VAR_11];
 ACPI_OBJECT *VAR_21;
 int VAR_22, VAR_23, VAR_24;

 FUNC_2(VAR_13);
 VAR_22 = VAR_2;

 for (VAR_23 = 0; VAR_23 < VAR_11; VAR_23++) {
  VAR_20[VAR_23].Type = VAR_1;
  VAR_20[VAR_23].Integer.Value = 0;
 }
 VAR_20[VAR_5].Integer.Value = VAR_15;
 VAR_20[VAR_6].Integer.Value = VAR_16;
 if (VAR_15 == VAR_9)
  VAR_20[VAR_7].Integer.Value = *VAR_17;

 VAR_18.Count = VAR_11;
 VAR_18.Pointer = VAR_20;
 VAR_19.Pointer = ((void*)0);
 VAR_19.Length = VAR_0;
 if (FUNC_0(FUNC_3(VAR_14, VAR_12, &VAR_18, &VAR_19)))
  goto end;
 VAR_21 = (ACPI_OBJECT *)VAR_19.Pointer;
 if (!FUNC_1(VAR_21, VAR_11)) {
  FUNC_6("toshiba: invalid package!\n");
  return (VAR_2);
 }

 FUNC_5(VAR_21, VAR_5, &VAR_24);
 if (VAR_24 == VAR_10) {
  if (VAR_15 == VAR_3)
   FUNC_5(VAR_21, VAR_7, VAR_17);
  VAR_22 = 0;
 } else if (VAR_16 == VAR_8 && VAR_15 == VAR_3 &&
     VAR_24 == VAR_4) {







   VAR_23 = 1;
   FUNC_7(VAR_14, VAR_9, VAR_8, &VAR_23);
 }

end:
 if (VAR_19.Pointer != ((void*)0))
  FUNC_4(VAR_19.Pointer);

 return (VAR_22);
}
