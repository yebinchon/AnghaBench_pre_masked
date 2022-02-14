
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct enum_callback_arg {int count; void (* callback ) (int ,VAR_0,void*) ;TYPE_2__* dod_pkg; void* context; } ;
struct TYPE_8__ {int * Pointer; int Length; } ;
struct TYPE_6__ {int Count; } ;
struct TYPE_7__ {TYPE_1__ Package; } ;
typedef scalar_t__ ACPI_STATUS ;
typedef TYPE_2__ ACPI_OBJECT ;
typedef int ACPI_HANDLE ;
typedef TYPE_3__ ACPI_BUFFER ;


 int VAR_1 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 int FUNC_1 (TYPE_2__*,int) ;
 int FUNC_2 (int ) ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_3 (int ,char*,int *,TYPE_3__*) ;
 char* FUNC_4 (scalar_t__) ;
 int FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (int ,int ,int,int ,int *,struct enum_callback_arg*,int *) ;
 char* FUNC_7 (int ) ;
 int FUNC_8 (char*,char*,...) ;
 int VAR_4 ;
 int VAR_5 ;

__attribute__((used)) static int
FUNC_9(ACPI_HANDLE VAR_6,
   void (*VAR_7)(ACPI_HANDLE, VAR_8, void *), void *VAR_9)
{
 ACPI_STATUS VAR_10;
 ACPI_BUFFER VAR_11;
 ACPI_OBJECT *VAR_12;
 struct enum_callback_arg VAR_13;

 FUNC_2(VAR_5);
 VAR_11.Length = VAR_1;
 VAR_11.Pointer = ((void*)0);
 VAR_10 = FUNC_3(VAR_6, "_DOD", ((void*)0), &VAR_11);
 if (FUNC_0(VAR_10)) {
  if (VAR_10 != VAR_3)
   FUNC_8("can't evaluate %s._DOD - %s\n",
          FUNC_7(VAR_6), FUNC_4(VAR_10));
  VAR_13.count = -1;
  goto out;
 }
 VAR_12 = (ACPI_OBJECT *)VAR_11.Pointer;
 if (!FUNC_1(VAR_12, 1)) {
  FUNC_8("evaluation of %s._DOD makes no sense\n",
         FUNC_7(VAR_6));
  VAR_13.count = -1;
  goto out;
 }
 if (VAR_7 == ((void*)0)) {
  VAR_13.count = VAR_12->Package.Count;
  goto out;
 }
 VAR_13.callback = VAR_7;
 VAR_13.context = VAR_9;
 VAR_13.dod_pkg = VAR_12;
 VAR_13.count = 0;
 VAR_10 = FUNC_6(VAR_2, VAR_6, 1,
     VAR_4, ((void*)0), &VAR_13, ((void*)0));
 if (FUNC_0(VAR_10))
  FUNC_8("failed walking down %s - %s\n",
         FUNC_7(VAR_6), FUNC_4(VAR_10));
out:
 if (VAR_11.Pointer != ((void*)0))
  FUNC_5(VAR_11.Pointer);
 return (VAR_13.count);
}
