
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct cpsw_softc {TYPE_1__* port; int node; } ;
typedef scalar_t__ phandle_t ;
typedef int pcell_t ;
struct TYPE_2__ {int phy; int vlan; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (scalar_t__,char*,int*,int) ;
 scalar_t__ FUNC_2 (scalar_t__,char*,void**) ;
 int FUNC_3 (scalar_t__,char*) ;
 scalar_t__ FUNC_4 (scalar_t__) ;
 int FUNC_5 (char*) ;
 scalar_t__ FUNC_6 (scalar_t__,int *,int*,int *) ;
 unsigned long* VAR_1 ;
 int FUNC_7 (char*,char*,unsigned long*) ;

__attribute__((used)) static int
FUNC_8(struct cpsw_softc *VAR_2, int VAR_3)
{
 char *VAR_4;
 int VAR_5, VAR_6, VAR_7;
 pcell_t VAR_8[3], VAR_9;
 phandle_t VAR_10;
 unsigned long VAR_11;


 VAR_6 = -1;
 VAR_7 = -1;
 for (VAR_10 = FUNC_0(VAR_2->node); VAR_10 != 0; VAR_10 = FUNC_4(VAR_10)) {
  if (FUNC_2(VAR_10, "name", (void **)&VAR_4) < 0)
   continue;
  if (FUNC_7(VAR_4, "slave@%lx", &VAR_11) != 1) {
   FUNC_5(VAR_4);
   continue;
  }
  FUNC_5(VAR_4);

  if (VAR_11 != VAR_1[VAR_3] &&
      VAR_11 != (VAR_1[VAR_3] & 0xFFF))
   continue;

  if (FUNC_6(VAR_10, ((void*)0), &VAR_6, ((void*)0)) != 0){

   VAR_6 = -1;
   VAR_5 = FUNC_3(VAR_10, "phy_id");
   if (VAR_5 / sizeof(pcell_t) == 2) {

    if (FUNC_1(VAR_10, "phy_id", VAR_8, VAR_5) > 0)
     VAR_6 = VAR_8[1];
   }
  }

  VAR_5 = FUNC_3(VAR_10, "dual_emac_res_vlan");
  if (VAR_5 / sizeof(pcell_t) == 1) {

   if (FUNC_1(VAR_10, "dual_emac_res_vlan",
       &VAR_9, VAR_5) > 0) {
    VAR_7 = VAR_9;
   }
  }

  break;
 }
 if (VAR_6 == -1)
  return (VAR_0);
 VAR_2->port[VAR_3].phy = VAR_6;
 VAR_2->port[VAR_3].vlan = VAR_7;

 return (0);
}
