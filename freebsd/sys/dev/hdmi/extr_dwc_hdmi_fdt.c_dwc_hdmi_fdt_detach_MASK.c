
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int * sc_mem_res; int sc_mem_rid; } ;
struct dwc_hdmi_fdt_softc {TYPE_1__ base; int * clk_hdmi; int * clk_ahb; } ;
typedef int device_t ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int ,int *) ;
 int FUNC_1 (int *) ;
 struct dwc_hdmi_fdt_softc* FUNC_2 (int ) ;

__attribute__((used)) static int
FUNC_3(device_t VAR_1)
{
 struct dwc_hdmi_fdt_softc *VAR_2;

 VAR_2 = FUNC_2(VAR_1);

 if (VAR_2->clk_ahb != ((void*)0))
  FUNC_1(VAR_2->clk_ahb);
 if (VAR_2->clk_hdmi != ((void*)0))
  FUNC_1(VAR_2->clk_hdmi);

 if (VAR_2->base.sc_mem_res != ((void*)0))
  FUNC_0(VAR_1, VAR_0,
      VAR_2->base.sc_mem_rid, VAR_2->base.sc_mem_res);

 return (0);
}
