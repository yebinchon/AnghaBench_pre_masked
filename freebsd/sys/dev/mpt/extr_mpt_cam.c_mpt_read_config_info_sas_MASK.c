
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mptsas_portinfo {int num_phys; struct mptsas_phyinfo* phy_info; } ;
struct TYPE_2__ {int phy_num; scalar_t__ dev_handle; } ;
struct mptsas_phyinfo {int phy_num; TYPE_1__ attached; TYPE_1__ identify; scalar_t__ handle; } ;
struct mpt_softc {struct mptsas_portinfo* sas_portinfo; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct mptsas_portinfo*,int ) ;
 struct mptsas_portinfo* FUNC_1 (int,int ,int) ;
 int FUNC_2 (struct mpt_softc*,TYPE_1__*,int,scalar_t__) ;
 int FUNC_3 (struct mpt_softc*,struct mptsas_portinfo*) ;
 int FUNC_4 (struct mpt_softc*,struct mptsas_phyinfo*,int,int) ;

__attribute__((used)) static int
FUNC_5(struct mpt_softc *VAR_8)
{
 struct mptsas_portinfo *VAR_9;
 struct mptsas_phyinfo *VAR_10;
 int VAR_11, VAR_12;

 VAR_9 = FUNC_1(sizeof(*VAR_9), VAR_5, VAR_6|VAR_7);
 if (VAR_9 == ((void*)0))
  return (VAR_0);

 VAR_11 = FUNC_3(VAR_8, VAR_9);
 if (VAR_11) {
  FUNC_0(VAR_9, VAR_5);
  return (0);
 }

 for (VAR_12 = 0; VAR_12 < VAR_9->num_phys; VAR_12++) {
  VAR_10 = &VAR_9->phy_info[VAR_12];
  VAR_11 = FUNC_4(VAR_8, VAR_10,
      (VAR_3 <<
      VAR_4), VAR_12);
  if (VAR_11)
   break;
  VAR_11 = FUNC_2(VAR_8, &VAR_10->identify,
      (VAR_1 <<
      VAR_2),
      VAR_10->handle);
  if (VAR_11)
   break;
  VAR_10->identify.phy_num = VAR_10->phy_num = VAR_12;
  if (VAR_10->attached.dev_handle)
   VAR_11 = FUNC_2(VAR_8,
       &VAR_10->attached,
       (VAR_1 <<
       VAR_2),
       VAR_10->attached.dev_handle);
  if (VAR_11)
   break;
 }
 VAR_8->sas_portinfo = VAR_9;
 return (0);
}
