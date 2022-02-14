
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct acpi_rapidstart_softc {int sysctl_tree; int sysctl_ctx; } ;
typedef int device_t ;
struct TYPE_2__ {int comment; int * nodename; int * setmethod; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ,int,int *,int,int ,int,int ,char*,int ) ;
 int FUNC_1 (int ) ;
 TYPE_1__* VAR_3 ;
 struct acpi_rapidstart_softc* FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int VAR_4 ;

__attribute__((used)) static int
FUNC_5(device_t VAR_5)
{
 struct acpi_rapidstart_softc *VAR_6;
 int VAR_7;

 VAR_6 = FUNC_2(VAR_5);

 VAR_6->sysctl_ctx = FUNC_3(VAR_5);
 VAR_6->sysctl_tree = FUNC_4(VAR_5);
 for (VAR_7 = 0 ; VAR_3[VAR_7].nodename != ((void*)0); VAR_7++){
  if (VAR_3[VAR_7].setmethod != ((void*)0)) {
   FUNC_0(FUNC_3(VAR_5),
       FUNC_1(FUNC_4(VAR_5)),
       VAR_7, VAR_3[VAR_7].nodename,
       VAR_2 | VAR_1,
       VAR_5, VAR_7, VAR_4, "I",
       VAR_3[VAR_7].comment);
  } else {
   FUNC_0(FUNC_3(VAR_5),
       FUNC_1(FUNC_4(VAR_5)),
       VAR_7, VAR_3[VAR_7].nodename,
       VAR_2 | VAR_0,
       VAR_5, VAR_7, VAR_4, "I",
       VAR_3[VAR_7].comment);
  }
 }
 return (0);
}
