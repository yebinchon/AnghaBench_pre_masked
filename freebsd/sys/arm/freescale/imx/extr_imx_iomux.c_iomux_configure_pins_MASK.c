
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct pincfg {int padconf_val; int mux_reg; int mux_val; int input_reg; int input_val; int padconf_reg; } ;
struct iomux_softc {int dummy; } ;
typedef int phandle_t ;
typedef int name ;
typedef int device_t ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,int,void**) ;
 int FUNC_1 (int ,char*,char**,int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct pincfg*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_4 (struct iomux_softc*,int,int) ;
 scalar_t__ VAR_4 ;
 struct iomux_softc* FUNC_5 (int ) ;
 int FUNC_6 (struct iomux_softc*,int,int) ;
 int FUNC_7 (char*,char*,int,int,int,int,int,int) ;

__attribute__((used)) static int
FUNC_8(device_t VAR_5, phandle_t VAR_6)
{
 struct iomux_softc *VAR_7;
 struct pincfg *VAR_8, *VAR_9;
 phandle_t VAR_10;
 int VAR_11, VAR_12;
 uint32_t VAR_13;

 VAR_7 = FUNC_5(VAR_5);
 VAR_10 = FUNC_2(VAR_6);
 VAR_12 = FUNC_0(VAR_10, "fsl,pins",
     sizeof(*VAR_8), (void **)&VAR_8);
 if (VAR_12 < 0)
  return (VAR_0);
 if (VAR_12 == 0)
  return (0);
 for (VAR_11 = 0, VAR_9 = VAR_8; VAR_11 < VAR_12; VAR_11++, VAR_9++) {
  VAR_13 = (VAR_9->padconf_val & VAR_2) ? VAR_3 : 0;
  FUNC_4(VAR_7, VAR_9->mux_reg, VAR_9->mux_val | VAR_13);
  FUNC_6(VAR_7, VAR_9->input_reg, VAR_9->input_val);
  if ((VAR_9->padconf_val & VAR_1) == 0)
   FUNC_4(VAR_7, VAR_9->padconf_reg, VAR_9->padconf_val);
  if (VAR_4) {
   char VAR_14[32];
   FUNC_1(VAR_10, "name", &VAR_14, sizeof(VAR_14));
   FUNC_7("%16s: muxreg 0x%04x muxval 0x%02x "
       "inpreg 0x%04x inpval 0x%02x "
       "padreg 0x%04x padval 0x%08x\n",
       VAR_14, VAR_9->mux_reg, VAR_9->mux_val | VAR_13,
       VAR_9->input_reg, VAR_9->input_val,
       VAR_9->padconf_reg, VAR_9->padconf_val);
  }
 }
 FUNC_3(VAR_8);
 return (0);
}
