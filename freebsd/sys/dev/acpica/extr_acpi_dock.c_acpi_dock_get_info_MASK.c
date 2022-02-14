
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct acpi_dock_softc {void* _uid; void* _bdn; void* _sta; } ;
typedef int device_t ;
typedef int ACPI_HANDLE ;


 void* VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ,int ,char*,void*,void*,void*) ;
 int FUNC_2 (int ,char*,void**) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 struct acpi_dock_softc* FUNC_5 (int ) ;

__attribute__((used)) static void
FUNC_6(device_t VAR_1)
{
 struct acpi_dock_softc *VAR_2;
 ACPI_HANDLE VAR_3;

 VAR_2 = FUNC_5(VAR_1);
 VAR_3 = FUNC_4(VAR_1);

 if (FUNC_0(FUNC_2(VAR_3, "_STA", &VAR_2->_sta)))
  VAR_2->_sta = VAR_0;
 if (FUNC_0(FUNC_2(VAR_3, "_BDN", &VAR_2->_bdn)))
  VAR_2->_bdn = VAR_0;
 if (FUNC_0(FUNC_2(VAR_3, "_UID", &VAR_2->_uid)))
  VAR_2->_uid = VAR_0;
 FUNC_1(VAR_1, FUNC_3(VAR_1),
      "_STA: %04x, _BDN: %04x, _UID: %04x\n", VAR_2->_sta,
      VAR_2->_bdn, VAR_2->_uid);
}
