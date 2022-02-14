
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_9__ {int* Pointer; int Length; } ;
struct TYPE_7__ {int Count; } ;
struct TYPE_8__ {TYPE_1__ Package; } ;
typedef scalar_t__ ACPI_STATUS ;
typedef TYPE_2__ ACPI_OBJECT ;
typedef int ACPI_HANDLE ;
typedef TYPE_3__ ACPI_BUFFER ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 int FUNC_1 (TYPE_2__*,int) ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_2 (int ,char*,int *,TYPE_3__*) ;
 char* FUNC_3 (scalar_t__) ;
 int* FUNC_4 (int) ;
 int FUNC_5 (int*) ;
 scalar_t__ FUNC_6 (TYPE_2__*,int,int*) ;
 char* FUNC_7 (int ) ;
 int FUNC_8 (char*,char*,...) ;

__attribute__((used)) static int
FUNC_9(ACPI_HANDLE VAR_2, int **VAR_3)
{
 ACPI_STATUS VAR_4;
 ACPI_BUFFER VAR_5;
 ACPI_OBJECT *VAR_6;
 int VAR_7, VAR_8, VAR_9, *VAR_10;

 VAR_5.Length = VAR_0;
 VAR_5.Pointer = ((void*)0);
 VAR_4 = FUNC_2(VAR_2, "_BCL", ((void*)0), &VAR_5);
 if (FUNC_0(VAR_4)) {
  if (VAR_4 != VAR_1)
   FUNC_8("can't evaluate %s._BCL - %s\n",
          FUNC_7(VAR_2), FUNC_3(VAR_4));
  goto out;
 }
 VAR_6 = (ACPI_OBJECT *)VAR_5.Pointer;
 if (!FUNC_1(VAR_6, 2)) {
  FUNC_8("evaluation of %s._BCL makes no sense\n",
         FUNC_7(VAR_2));
  goto out;
 }
 VAR_7 = VAR_6->Package.Count;
 if (VAR_7 < 2 || VAR_3 == ((void*)0))
  goto out;
 VAR_10 = FUNC_4(VAR_7 * sizeof(*VAR_10));
 if (VAR_10 == ((void*)0))
  goto out;
 for (VAR_8 = 0, VAR_9 = 0; VAR_8 < VAR_7; VAR_8++)
  if (FUNC_6(VAR_6, VAR_8, &VAR_10[VAR_9]) == 0)
   VAR_9++;
 if (VAR_9 < 2) {
  FUNC_5(VAR_10);
  goto out;
 }
 *VAR_3 = VAR_10;
 return (VAR_9);

out:
 if (VAR_5.Pointer != ((void*)0))
  FUNC_5(VAR_5.Pointer);
 return (0);
}
