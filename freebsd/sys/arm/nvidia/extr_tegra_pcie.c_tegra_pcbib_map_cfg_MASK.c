
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int ;
struct tegra_pcib_softc {int cfg_base_addr; int cfg_cur_offs; int dev; int cfg_handle; int bus_tag; } ;
typedef int bus_size_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int,int,int ,int *) ;
 int FUNC_5 (int ,int ,int) ;
 int FUNC_6 (int ,char*) ;

__attribute__((used)) static int
FUNC_7(struct tegra_pcib_softc *VAR_0, u_int VAR_1, u_int VAR_2,
    u_int VAR_3, u_int VAR_4)
{
 bus_size_t VAR_5;
 int VAR_6;

 VAR_5 = VAR_0->cfg_base_addr;
 VAR_5 |= FUNC_0(VAR_1) | FUNC_1(VAR_2) | FUNC_3(VAR_3) |
     FUNC_2(VAR_4);
 if ((VAR_0->cfg_handle != 0) && (VAR_0->cfg_cur_offs == VAR_5))
  return (0);
 if (VAR_0->cfg_handle != 0)
  FUNC_5(VAR_0->bus_tag, VAR_0->cfg_handle, 0x800);

 VAR_6 = FUNC_4(VAR_0->bus_tag, VAR_5, 0x800, 0, &VAR_0->cfg_handle);
 if (VAR_6 != 0)
  FUNC_6(VAR_0->dev, "Cannot map config space\n");
 else
  VAR_0->cfg_cur_offs = VAR_5;
 return (VAR_6);
}
