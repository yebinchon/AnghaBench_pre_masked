
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t uint32_t ;
struct tegra_pcib_softc {int dev; struct tegra_pcib_port** ports; } ;
struct tegra_pcib_port {int num_lanes; int port_idx; int afi_pex_ctrl; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t FUNC_0 (struct tegra_pcib_softc*,int ) ;
 int FUNC_1 (struct tegra_pcib_softc*,int ,size_t) ;
 int FUNC_2 (int) ;
 scalar_t__ VAR_3 ;
 int FUNC_3 (int ,char*,int ,int,char*) ;

__attribute__((used)) static void
FUNC_4(struct tegra_pcib_softc *VAR_4, uint32_t VAR_5)
{
 struct tegra_pcib_port *VAR_6;
 uint32_t VAR_7;

 VAR_6 = VAR_4->ports[VAR_5];


 VAR_7 = FUNC_0(VAR_4, VAR_6->afi_pex_ctrl);
 VAR_7 &= ~VAR_2;
 FUNC_1(VAR_4, VAR_6->afi_pex_ctrl, VAR_7);
 FUNC_0(VAR_4, VAR_6->afi_pex_ctrl);
 FUNC_2(10);


 VAR_7 &= ~VAR_0;
 VAR_7 &= ~VAR_1;
 FUNC_1(VAR_4, VAR_6->afi_pex_ctrl, VAR_7);

 if (VAR_3)
  FUNC_3(VAR_4->dev, " port %d (%d lane%s): Disabled\n",
    VAR_6->port_idx, VAR_6->num_lanes,
    VAR_6->num_lanes > 1 ? "s": "");
}
