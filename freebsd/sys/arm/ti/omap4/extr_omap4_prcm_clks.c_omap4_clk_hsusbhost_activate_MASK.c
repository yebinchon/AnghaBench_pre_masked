
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct ti_clock_dev {int id; } ;
struct resource {int dummy; } ;
struct omap4_prcm_softc {struct resource* sc_res; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 unsigned int VAR_9 ;
 int FUNC_0 (struct resource*,int) ;
 int FUNC_1 (struct resource*,int,int) ;
 struct omap4_prcm_softc* FUNC_2 (int ) ;
 int FUNC_3 (char*,int const,...) ;

__attribute__((used)) static int
FUNC_4(struct ti_clock_dev *VAR_10)
{
 struct omap4_prcm_softc *VAR_11;
 struct resource* VAR_12;
 uint32_t VAR_13;
 uint32_t VAR_14;
 unsigned int VAR_15;

 VAR_11 = FUNC_2(VAR_4);
 if (VAR_11 == ((void*)0))
  return VAR_6;

 switch (VAR_10->id) {
 case 128:







  VAR_12 = VAR_11->sc_res;
  VAR_13 = VAR_8 + 0x68;




  VAR_14 = FUNC_0(VAR_12, VAR_13);
  VAR_14 &= ~VAR_3;
  VAR_14 |= VAR_2;

  VAR_14 |= (0x1 << 8);
  VAR_14 |= (0x1 << 9);
  break;

 case 135:
 case 133:
 case 130:
 case 132:
 case 129:
 case 134:
 case 131:
  VAR_12 = VAR_11->sc_res;
  VAR_13 = VAR_8 + 0x58;
  VAR_14 = FUNC_0(VAR_12, VAR_13);

  if (VAR_10->id == 135) {
   VAR_14 &= ~VAR_3;
   VAR_14 |= 2;

   VAR_14 |= (0x1 << 15);
  }

  else if (VAR_10->id == 132)
   VAR_14 |= (0x1 << 8);
  else if (VAR_10->id == 129)
   VAR_14 |= (0x1 << 9);

  else if (VAR_10->id == 134)
   VAR_14 |= (0x5 << 11);
  else if (VAR_10->id == 131)
   VAR_14 |= (0x5 << 12);

  break;

 default:
  return (VAR_5);
 }

 FUNC_1(VAR_12, VAR_13, VAR_14);


 for (VAR_15 = 0; VAR_15 < VAR_9; VAR_15++) {
  VAR_14 = FUNC_0(VAR_12, VAR_13);
  if ((VAR_14 & VAR_1) == VAR_0)
   break;
 }


 if ((VAR_14 & VAR_1) != VAR_0) {
  FUNC_3("Error: HERE failed to enable module with clock %d\n", VAR_10->id);
  FUNC_3("Error: 0x%08x => 0x%08x\n", VAR_13, VAR_14);
  return (VAR_7);
 }

 return (0);
}
