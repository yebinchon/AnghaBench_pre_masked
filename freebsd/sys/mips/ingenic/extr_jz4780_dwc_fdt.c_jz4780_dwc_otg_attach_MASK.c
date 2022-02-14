
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
struct resource {int dummy; } ;
struct TYPE_3__ {int sc_phy_bits; int sc_phy_type; } ;
struct TYPE_4__ {TYPE_1__ sc_otg; } ;
struct jz4780_dwc_otg_softc {scalar_t__ phy_clk; scalar_t__ otg_clk; TYPE_2__ base; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct resource* FUNC_0 (int ,int ,int*,int ) ;
 int FUNC_1 (struct resource*,int ) ;
 int FUNC_2 (int ,int ,int,struct resource*) ;
 int FUNC_3 (struct resource*,int ,int) ;
 int FUNC_4 (scalar_t__) ;
 struct jz4780_dwc_otg_softc* FUNC_5 (int ) ;
 int FUNC_6 (int ,char*) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 () ;

__attribute__((used)) static int
FUNC_10(device_t VAR_4)
{
 struct jz4780_dwc_otg_softc *VAR_5;
 struct resource *VAR_6;
 int VAR_7, VAR_8;

 VAR_5 = FUNC_5(VAR_4);

 VAR_7 = FUNC_8(VAR_4);
 if (VAR_7 != 0)
  goto fail;

 VAR_7 = FUNC_9();
 if (VAR_7 != 0) {
  FUNC_6(VAR_4, "CGU failed to enable OTG\n");
  goto fail;
 }


 VAR_6 = FUNC_0(VAR_4, VAR_3, &VAR_8, VAR_2);
 if (VAR_6 != ((void*)0)) {
  uint32_t VAR_9;

  VAR_9 = FUNC_1(VAR_6, VAR_1);
  VAR_9 |= 0xc;
  FUNC_3(VAR_6, VAR_1, VAR_9);
  FUNC_2(VAR_4, VAR_3, VAR_8, VAR_6);
 }

 VAR_5->base.sc_otg.sc_phy_type = VAR_0;
 VAR_5->base.sc_otg.sc_phy_bits = 16;

 VAR_7 = FUNC_7(VAR_4);
 if (VAR_7 != 0)
  goto fail;

 return (0);
fail:
 if (VAR_5->otg_clk)
  FUNC_4(VAR_5->otg_clk);
 if (VAR_5->phy_clk)
  FUNC_4(VAR_5->phy_clk);
 return (VAR_7);
}
