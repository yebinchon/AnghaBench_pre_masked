
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct tegra_pcib_softc {int dev; struct tegra_pcib_port** ports; } ;
struct tegra_pcib_port {int num_lanes; int port_idx; int afi_pex_ctrl; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct tegra_pcib_softc*,int ) ;
 int FUNC_1 (struct tegra_pcib_softc*,int ,int ) ;
 int FUNC_2 (int) ;
 scalar_t__ VAR_4 ;
 int FUNC_3 (int ,char*,int ,int,char*,char*) ;
 int FUNC_4 (struct tegra_pcib_softc*,struct tegra_pcib_port*) ;

__attribute__((used)) static void
FUNC_5(struct tegra_pcib_softc *VAR_5, int VAR_6)
{
 struct tegra_pcib_port *VAR_7;
 uint32_t VAR_8;
 int VAR_9;

 VAR_7 = VAR_5->ports[VAR_6];


 VAR_8 = FUNC_0(VAR_5, VAR_7->afi_pex_ctrl);
 VAR_8 &= ~VAR_3;
 FUNC_1(VAR_5, VAR_7->afi_pex_ctrl, VAR_8);
 FUNC_0(VAR_5, VAR_7->afi_pex_ctrl);
 FUNC_2(10);


 VAR_8 |= VAR_2;
 VAR_8 |= VAR_0;
 VAR_8 |= VAR_1;
 FUNC_1(VAR_5, VAR_7->afi_pex_ctrl, VAR_8);
 FUNC_0(VAR_5, VAR_7->afi_pex_ctrl);
 FUNC_2(100);


 VAR_8 |= VAR_3;
 FUNC_1(VAR_5, VAR_7->afi_pex_ctrl, VAR_8);

 VAR_9 = FUNC_4(VAR_5, VAR_7);
 if (VAR_4)
  FUNC_3(VAR_5->dev, " port %d (%d lane%s): Link is %s\n",
    VAR_7->port_idx, VAR_7->num_lanes,
    VAR_7->num_lanes > 1 ? "s": "",
    VAR_9 == 0 ? "up": "down");
}
