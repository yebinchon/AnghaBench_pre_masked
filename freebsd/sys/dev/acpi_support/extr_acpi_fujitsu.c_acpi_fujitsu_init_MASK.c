
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_9__ ;
typedef struct TYPE_19__ TYPE_8__ ;
typedef struct TYPE_18__ TYPE_7__ ;
typedef struct TYPE_17__ TYPE_6__ ;
typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;
typedef struct TYPE_11__ TYPE_10__ ;


typedef int uint8_t ;
struct acpi_softc {int acpi_sysctl_tree; } ;
struct TYPE_20__ {char* name; int exists; } ;
struct TYPE_19__ {char* name; int exists; } ;
struct TYPE_18__ {char* name; int exists; } ;
struct TYPE_17__ {char* name; int exists; } ;
struct TYPE_16__ {char* name; int exists; } ;
struct TYPE_15__ {char* name; int exists; } ;
struct TYPE_14__ {char* name; } ;
struct TYPE_13__ {char* name; } ;
struct TYPE_12__ {char* name; } ;
struct acpi_fujitsu_softc {int dev; int sysctl_tree; int sysctl_ctx; TYPE_9__ rbll; TYPE_8__ rvol; TYPE_7__ gvol; TYPE_6__ gbls; TYPE_5__ gbll; TYPE_4__ gmou; TYPE_3__ gsif; TYPE_2__ ghks; TYPE_1__ _sta; } ;
struct TYPE_11__ {int method; int description; int * name; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;







 int VAR_5 ;
 int FUNC_1 (int *,int ,int ,char*,int ,int ,char*) ;
 int FUNC_2 (int *,int ,int ,int *,int,struct acpi_fujitsu_softc*,int,int ,char*,int ) ;
 int FUNC_3 (int ) ;
 int VAR_6 ;
 struct acpi_softc* FUNC_4 (int ) ;
 int FUNC_5 (struct acpi_fujitsu_softc*) ;
 int VAR_7 ;
 int FUNC_6 (struct acpi_fujitsu_softc*) ;
 int FUNC_7 (int ,char*) ;
 int VAR_8 ;
 int FUNC_8 (int *) ;
 TYPE_10__* VAR_9 ;

__attribute__((used)) static uint8_t
FUNC_9(struct acpi_fujitsu_softc *VAR_10)
{
 struct acpi_softc *VAR_11;
 int VAR_12, VAR_13;

 FUNC_0(VAR_8);


 VAR_10->_sta.name = "_STA";
 VAR_10->gbll.name = "GBLL";
 VAR_10->gbls.name = "GBLS";
 VAR_10->ghks.name = "GHKS";
 VAR_10->gmou.name = "GMOU";
 VAR_10->gsif.name = "GSIF";
 VAR_10->gvol.name = "GVOL";
 VAR_10->ghks.name = "GHKS";
 VAR_10->gsif.name = "GSIF";
 VAR_10->rbll.name = "RBLL";
 VAR_10->rvol.name = "RVOL";


 FUNC_5(VAR_10);


 VAR_11 = FUNC_4(VAR_10->dev);
 FUNC_8(&VAR_10->sysctl_ctx);
 VAR_10->sysctl_tree = FUNC_1(&VAR_10->sysctl_ctx,
     FUNC_3(VAR_11->acpi_sysctl_tree),
     VAR_5, "fujitsu", VAR_1, 0, "");

 for (VAR_12 = 0; VAR_9[VAR_12].name != ((void*)0); VAR_12++) {
  switch(VAR_9[VAR_12].method) {
   case 132:
    VAR_13 = VAR_10->gmou.exists;
    break;
   case 134:
    VAR_13 = VAR_10->gbll.exists;
    break;
   case 133:
    VAR_13 = VAR_10->gbls.exists;
    break;
   case 131:
   case 130:
    VAR_13 = VAR_10->gvol.exists;
    break;
   case 128:
    VAR_13 = VAR_10->rvol.exists;
    break;
   case 129:
    VAR_13 = VAR_10->rbll.exists;
    break;
   default:

    VAR_13 = 1;
    break;
  }
  if(!VAR_13)
   continue;
  FUNC_2(&VAR_10->sysctl_ctx,
      FUNC_3(VAR_10->sysctl_tree), VAR_5,
      VAR_9[VAR_12].name,
      VAR_3 | VAR_2 | VAR_0,
      VAR_10, VAR_12, VAR_7, "I",
      VAR_9[VAR_12].description);
 }



 if (!FUNC_6(VAR_10)) {
  FUNC_7(VAR_10->dev, "Couldn't init hotkey states\n");
  return (VAR_4);
 }

 return (VAR_6);
}
