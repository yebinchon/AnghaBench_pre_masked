
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct acpi_sony_softc {int pid; } ;
typedef int device_t ;
struct TYPE_2__ {int comment; int * nodename; int * setmethod; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int ,int,int *,int,int ,int,int ,char*,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ,int *) ;
 int FUNC_3 (int ) ;
 TYPE_1__* VAR_4 ;
 struct acpi_sony_softc* FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ,char*,int ) ;
 int VAR_5 ;

__attribute__((used)) static int
FUNC_8(device_t VAR_6)
{
 struct acpi_sony_softc *VAR_7;
 int VAR_8;

 VAR_7 = FUNC_4(VAR_6);
 FUNC_2(FUNC_3(VAR_6), VAR_0, &VAR_7->pid);
 FUNC_7(VAR_6, "PID %x\n", VAR_7->pid);
 for (VAR_8 = 0 ; VAR_4[VAR_8].nodename != ((void*)0); VAR_8++) {
  if (VAR_4[VAR_8].setmethod != ((void*)0)) {
   FUNC_0(FUNC_5(VAR_6),
       FUNC_1(FUNC_6(VAR_6)),
       VAR_8, VAR_4[VAR_8].nodename ,
       VAR_3 | VAR_2,
       VAR_6, VAR_8, VAR_5, "I",
       VAR_4[VAR_8].comment);
  } else {
   FUNC_0(FUNC_5(VAR_6),
       FUNC_1(FUNC_6(VAR_6)),
       VAR_8, VAR_4[VAR_8].nodename ,
       VAR_3 | VAR_1,
       VAR_6, VAR_8, VAR_5, "I",
       VAR_4[VAR_8].comment);
  }
 }
 return (0);
}
