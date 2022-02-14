
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ti_pinmux_softc {int dummy; } ;
struct pincfg {int reg; int conf; } ;
typedef int phandle_t ;
typedef int name ;
typedef int device_t ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,int,void**) ;
 int FUNC_1 (int ,char*,char**,int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct pincfg*) ;
 scalar_t__ VAR_1 ;
 struct ti_pinmux_softc* FUNC_4 (int ) ;
 int FUNC_5 (char*,char*,int,int) ;
 int FUNC_6 (struct ti_pinmux_softc*,int,int) ;

__attribute__((used)) static int
FUNC_7(device_t VAR_2, phandle_t VAR_3)
{
 struct pincfg *VAR_4, *VAR_5;
 phandle_t VAR_6;
 int VAR_7, VAR_8;
 static struct ti_pinmux_softc *VAR_9;

 VAR_9 = FUNC_4(VAR_2);
 VAR_6 = FUNC_2(VAR_3);
 VAR_8 = FUNC_0(VAR_6, "pinctrl-single,pins",
     sizeof(*VAR_4), (void **)&VAR_4);

 if (VAR_8 < 0)
  return (VAR_0);

 if (VAR_8 == 0)
  return (0);

 for (VAR_7 = 0, VAR_5 = VAR_4; VAR_7 < VAR_8; VAR_7++, VAR_5++) {
  if (VAR_1) {
   char VAR_10[32];
   FUNC_1(VAR_6, "name", &VAR_10, sizeof(VAR_10));
   FUNC_5("%16s: muxreg 0x%04x muxval 0x%02x\n",
       VAR_10, VAR_5->reg, VAR_5->conf);
  }


  FUNC_6(VAR_9, VAR_5->reg, VAR_5->conf);
 }

 FUNC_3(VAR_4);

 return (0);
}
