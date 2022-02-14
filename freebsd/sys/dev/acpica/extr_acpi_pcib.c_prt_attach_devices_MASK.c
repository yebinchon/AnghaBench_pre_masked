
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int * device_t ;
struct TYPE_3__ {char* Source; int Pin; int Address; int SourceIndex; } ;
typedef TYPE_1__ ACPI_PCI_ROUTING_TABLE ;
typedef int ACPI_HANDLE ;


 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_0 ;
 int FUNC_2 (int ,char*,int *) ;
 int * FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int *,int ,int *,int ,int ) ;
 int FUNC_6 (int *,char*,int ) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static void
FUNC_8(ACPI_PCI_ROUTING_TABLE *VAR_1, void *VAR_2)
{
    ACPI_HANDLE VAR_3;
    device_t VAR_4, VAR_5;
    int VAR_6;


    if (VAR_1->Source[0] == '\0')
 return;





    if (VAR_1->SourceIndex != 0)
 return;


    VAR_5 = (device_t)VAR_2;
    if (FUNC_1(FUNC_2(VAR_0, VAR_1->Source, &VAR_3)))
 return;
    VAR_4 = FUNC_3(VAR_3);
    if (VAR_4 == ((void*)0))
 return;


    VAR_6 = FUNC_7(VAR_4);
    if (VAR_6 != 0) {
 FUNC_6(VAR_5, "failed to force attach of %s\n",
     FUNC_4(VAR_3));
 return;
    }


    FUNC_5(VAR_4, VAR_1->SourceIndex, VAR_5,
 FUNC_0(VAR_1->Address), VAR_1->Pin);
}
