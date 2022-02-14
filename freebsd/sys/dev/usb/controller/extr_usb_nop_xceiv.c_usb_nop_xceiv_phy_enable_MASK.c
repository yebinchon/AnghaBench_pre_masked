
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_nop_xceiv_softc {scalar_t__ clk_freq; scalar_t__ vcc_supply; int clk; } ;
struct phynode {int dummy; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,scalar_t__,int ) ;
 struct usb_nop_xceiv_softc* FUNC_3 (int ) ;
 int FUNC_4 (int ,char*,char*) ;
 int FUNC_5 (struct phynode*) ;
 intptr_t FUNC_6 (struct phynode*) ;
 int FUNC_7 (scalar_t__) ;
 int FUNC_8 (scalar_t__) ;

__attribute__((used)) static int
FUNC_9(struct phynode *VAR_3, bool VAR_4)
{
 struct usb_nop_xceiv_softc *VAR_5;
 device_t VAR_6;
 intptr_t VAR_7;
 int VAR_8;

 VAR_6 = FUNC_5(VAR_3);
 VAR_7 = FUNC_6(VAR_3);
 VAR_5 = FUNC_3(VAR_6);

 if (VAR_7 != 0)
  return (VAR_2);


 if (VAR_5->clk_freq != 0) {
  if (VAR_4) {
   VAR_8 = FUNC_2(VAR_5->clk, VAR_5->clk_freq,
     VAR_0);
   if (VAR_8 != 0) {
    FUNC_4(VAR_6, "Cannot set clock to %dMhz\n",
      VAR_5->clk_freq);
    goto fail;
   }

   VAR_8 = FUNC_1(VAR_5->clk);
  } else
   VAR_8 = FUNC_0(VAR_5->clk);

  if (VAR_8 != 0) {
   FUNC_4(VAR_6, "Cannot %sable the clock\n",
       VAR_4 ? "En" : "Dis");
   goto fail;
  }
 }
 if (VAR_5->vcc_supply) {
  if (VAR_4)
   VAR_8 = FUNC_8(VAR_5->vcc_supply);
  else
   VAR_8 = FUNC_7(VAR_5->vcc_supply);
  if (VAR_8 != 0) {
   FUNC_4(VAR_6, "Cannot %sable the regulator\n",
       VAR_4 ? "En" : "Dis");
   goto fail;
  }
 }

 return (0);

fail:
 return (VAR_1);
}
