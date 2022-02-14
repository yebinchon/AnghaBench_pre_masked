
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct acpi_asus_wmi_softc {int dsts_id; int wmi_dev; } ;
typedef int UINT32 ;


 int FUNC_0 (int ,int ,int ,int ,int *) ;

__attribute__((used)) static int
FUNC_1(struct acpi_asus_wmi_softc *VAR_0,
    UINT32 VAR_1, UINT32 *VAR_2)
{

 return (FUNC_0(VAR_0->wmi_dev,
     VAR_0->dsts_id, VAR_1, 0, VAR_2));
}
