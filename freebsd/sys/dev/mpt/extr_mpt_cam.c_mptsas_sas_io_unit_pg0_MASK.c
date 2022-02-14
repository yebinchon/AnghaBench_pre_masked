
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct mptsas_portinfo {int num_phys; struct mptsas_phyinfo* phy_info; } ;
struct mptsas_phyinfo {int phy_num; int handle; int negotiated_link_rate; int port_id; } ;
struct mpt_softc {int dummy; } ;
struct TYPE_10__ {int ExtPageLength; } ;
struct TYPE_9__ {int NumPhys; TYPE_1__* PhyData; } ;
struct TYPE_8__ {int ControllerDevHandle; int NegotiatedLinkRate; int Port; } ;
typedef TYPE_2__ SasIOUnitPage0_t ;
typedef TYPE_3__ ConfigExtendedPageHeader_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (TYPE_2__*,int ) ;
 int FUNC_1 (int ) ;
 void* FUNC_2 (int,int ,int) ;
 int FUNC_3 (struct mpt_softc*,int ,int ,int ,int ,TYPE_3__*,int ,int) ;
 int FUNC_4 (struct mpt_softc*,int ,int ,TYPE_3__*,TYPE_2__*,int,int ,int) ;

__attribute__((used)) static int
FUNC_5(struct mpt_softc *VAR_8, struct mptsas_portinfo *VAR_9)
{
 ConfigExtendedPageHeader_t VAR_10;
 struct mptsas_phyinfo *VAR_11;
 SasIOUnitPage0_t *VAR_12;
 int VAR_13, VAR_14, VAR_15;

 VAR_13 = FUNC_3(VAR_8, VAR_4,
           0, 0, VAR_3,
           &VAR_10, 0, 10000);
 if (VAR_13)
  goto out;
 if (VAR_10.ExtPageLength == 0) {
  VAR_13 = VAR_1;
  goto out;
 }

 VAR_14 = VAR_10.ExtPageLength * 4;
 VAR_12 = FUNC_2(VAR_14, VAR_5, VAR_6|VAR_7);
 if (VAR_12 == ((void*)0)) {
  VAR_13 = VAR_0;
  goto out;
 }

 VAR_13 = FUNC_4(VAR_8, VAR_2,
         0, &VAR_10, VAR_12, VAR_14, 0, 10000);
 if (VAR_13) {
  FUNC_0(VAR_12, VAR_5);
  goto out;
 }

 VAR_9->num_phys = VAR_12->NumPhys;
 VAR_9->phy_info = FUNC_2(sizeof(*VAR_9->phy_info) *
     VAR_9->num_phys, VAR_5, VAR_6|VAR_7);
 if (VAR_9->phy_info == ((void*)0)) {
  FUNC_0(VAR_12, VAR_5);
  VAR_13 = VAR_0;
  goto out;
 }

 for (VAR_15 = 0; VAR_15 < VAR_9->num_phys; VAR_15++) {
  VAR_11 = &VAR_9->phy_info[VAR_15];
  VAR_11->phy_num = VAR_15;
  VAR_11->port_id = VAR_12->PhyData[VAR_15].Port;
  VAR_11->negotiated_link_rate =
      VAR_12->PhyData[VAR_15].NegotiatedLinkRate;
  VAR_11->handle =
      FUNC_1(VAR_12->PhyData[VAR_15].ControllerDevHandle);
 }

 FUNC_0(VAR_12, VAR_5);
out:
 return (VAR_13);
}
