
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct TYPE_2__ {int ue_dev; } ;
struct muge_softc {scalar_t__ sc_mdix_ctl; int sc_phyno; TYPE_1__ sc_ue; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ FUNC_0 (int ,int ,int ) ;
 scalar_t__ FUNC_1 (int ,int ,int ,scalar_t__) ;
 int FUNC_2 (struct muge_softc*,char*) ;

__attribute__((used)) static void
FUNC_3(struct muge_softc *VAR_7)
{
 uint32_t VAR_8, VAR_9;

 VAR_9 = FUNC_1(VAR_7->sc_ue.ue_dev, VAR_7->sc_phyno,
     VAR_4, VAR_6);

 VAR_8 = FUNC_0(VAR_7->sc_ue.ue_dev, VAR_7->sc_phyno,
     VAR_1);
 VAR_8 &= ~VAR_3;
 VAR_8 |= VAR_2;

 FUNC_0(VAR_7->sc_ue.ue_dev, VAR_7->sc_phyno, VAR_0);
 VAR_9 += FUNC_1(VAR_7->sc_ue.ue_dev, VAR_7->sc_phyno,
     VAR_1, VAR_8);

 VAR_9 += FUNC_1(VAR_7->sc_ue.ue_dev, VAR_7->sc_phyno,
     VAR_4, VAR_5);

 if (VAR_9 != 0)
  FUNC_2(VAR_7, "error setting PHY's MDIX status\n");

 VAR_7->sc_mdix_ctl = VAR_8;
}
