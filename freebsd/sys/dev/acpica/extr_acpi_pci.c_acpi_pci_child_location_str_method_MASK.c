
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct acpi_pci_devinfo {scalar_t__ ap_handle; } ;
typedef int device_t ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (scalar_t__,char*,int*) ;
 char* FUNC_2 (scalar_t__) ;
 struct acpi_pci_devinfo* FUNC_3 (int ) ;
 int FUNC_4 (int ,int ,char*,size_t) ;
 int FUNC_5 (char*,int,char*,int) ;
 int FUNC_6 (char*,char*,size_t) ;

__attribute__((used)) static int
FUNC_7(device_t VAR_0, device_t VAR_1, char *VAR_2,
    size_t VAR_3)
{
    struct acpi_pci_devinfo *VAR_4 = FUNC_3(VAR_1);
    int VAR_5;
    char VAR_6[32];

    FUNC_4(VAR_0, VAR_1, VAR_2, VAR_3);

    if (VAR_4->ap_handle) {
        FUNC_6(VAR_2, " handle=", VAR_3);
        FUNC_6(VAR_2, FUNC_2(VAR_4->ap_handle), VAR_3);

        if (FUNC_0(FUNC_1(VAR_4->ap_handle, "_PXM", &VAR_5))) {
                FUNC_5(VAR_6, 32, " _PXM=%d", VAR_5);
                FUNC_6(VAR_2, VAR_6, VAR_3);
        }
    }
    return (0);
}
