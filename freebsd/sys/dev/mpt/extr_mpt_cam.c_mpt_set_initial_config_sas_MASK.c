
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ dev_handle; int device_info; } ;
struct mptsas_phyinfo {TYPE_2__ attached; } ;
struct mpt_softc {int dev; TYPE_1__* sas_portinfo; } ;
struct TYPE_3__ {int num_phys; struct mptsas_phyinfo* phy_info; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ,char*,char*,int) ;
 int VAR_2 ;
 int FUNC_1 (struct mpt_softc*,TYPE_2__*,int) ;

__attribute__((used)) static int
FUNC_2(struct mpt_softc *VAR_3)
{
 struct mptsas_phyinfo *VAR_4;
 int VAR_5;

 if ((VAR_2 != -1) && (VAR_3->sas_portinfo != ((void*)0))) {
  for (VAR_5 = 0; VAR_5 < VAR_3->sas_portinfo->num_phys; VAR_5++) {
   VAR_4 = &VAR_3->sas_portinfo->phy_info[VAR_5];
   if (VAR_4->attached.dev_handle == 0)
    continue;
   if ((VAR_4->attached.device_info &
       VAR_0) == 0)
    continue;
   if (VAR_1)
    FUNC_0(VAR_3->dev,
        "%sabling SATA WC on phy %d\n",
        (VAR_2) ? "En" : "Dis", VAR_5);
   FUNC_1(VAR_3, &VAR_4->attached,
        VAR_2);
  }
 }

 return (0);
}
