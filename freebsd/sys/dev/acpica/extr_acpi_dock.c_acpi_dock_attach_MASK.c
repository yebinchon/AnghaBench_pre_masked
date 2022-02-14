
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct acpi_dock_softc {int sysctl_tree; int sysctl_ctx; int _uid; int _bdn; int _sta; int status; } ;
typedef int device_t ;
typedef int * ACPI_HANDLE ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *,char*,int *,int *) ;
 int FUNC_3 (int *,int ,int ,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_4 (int ,int ,int ,char*,int ,int *,int ,char*) ;
 int FUNC_5 (int ,int ,int ,char*,int,int ,int ,int ,char*,char*) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int VAR_7 ;
 int VAR_8 ;
 int * FUNC_8 (int ) ;
 struct acpi_dock_softc* FUNC_9 (int ) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int ) ;
 int VAR_9 ;

__attribute__((used)) static int
FUNC_12(device_t VAR_10)
{
 struct acpi_dock_softc *VAR_11;
 ACPI_HANDLE VAR_12;

 VAR_11 = FUNC_9(VAR_10);
 VAR_12 = FUNC_8(VAR_10);
 if (VAR_11 == ((void*)0) || VAR_12 == ((void*)0))
  return (VAR_5);

 VAR_11->status = VAR_1;

 FUNC_2(VAR_12, "_INI", ((void*)0), ((void*)0));

 FUNC_0(VAR_9);

 FUNC_7(VAR_10);


 VAR_11->sysctl_ctx = FUNC_10(VAR_10);
 VAR_11->sysctl_tree = FUNC_11(VAR_10);

 FUNC_4(VAR_11->sysctl_ctx,
  FUNC_6(VAR_11->sysctl_tree),
  VAR_6, "_sta", VAR_2,
  &VAR_11->_sta, 0, "Dock _STA");
 FUNC_4(VAR_11->sysctl_ctx,
  FUNC_6(VAR_11->sysctl_tree),
  VAR_6, "_bdn", VAR_2,
  &VAR_11->_bdn, 0, "Dock _BDN");
 FUNC_4(VAR_11->sysctl_ctx,
  FUNC_6(VAR_11->sysctl_tree),
  VAR_6, "_uid", VAR_2,
  &VAR_11->_uid, 0, "Dock _UID");
 FUNC_5(VAR_11->sysctl_ctx,
  FUNC_6(VAR_11->sysctl_tree),
  VAR_6, "status",
  VAR_4|VAR_3, VAR_10, 0,
  VAR_8, "I",
  "Dock/Undock operation");

 FUNC_1(VAR_9);

 FUNC_3(VAR_12, VAR_0,
     VAR_7, VAR_10);

 return (0);
}
