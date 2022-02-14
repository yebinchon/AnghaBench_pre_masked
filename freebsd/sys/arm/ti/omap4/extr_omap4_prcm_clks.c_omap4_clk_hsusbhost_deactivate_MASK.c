
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
 int FUNC_0 (struct resource*,int) ;
 int FUNC_1 (struct resource*,int,int) ;
 struct omap4_prcm_softc* FUNC_2 (int ) ;

__attribute__((used)) static int
FUNC_3(struct ti_clock_dev *VAR_6)
{
 struct omap4_prcm_softc *VAR_7;
 struct resource* VAR_8;
 uint32_t VAR_9;
 uint32_t VAR_10;

 VAR_7 = FUNC_2(VAR_2);
 if (VAR_7 == ((void*)0))
  return VAR_4;

 switch (VAR_6->id) {
 case 128:

  VAR_8 = VAR_7->sc_res;
  VAR_9 = VAR_5 + 0x68;

  VAR_10 = FUNC_0(VAR_8, VAR_9);
  VAR_10 &= ~VAR_1;
  VAR_10 |= VAR_0;
  break;

 case 135:
 case 133:
 case 130:
 case 132:
 case 129:
 case 134:
 case 131:
  VAR_8 = VAR_7->sc_res;
  VAR_9 = VAR_5 + 0x58;
  VAR_10 = FUNC_0(VAR_8, VAR_9);


  if (VAR_6->id == 135) {
   VAR_10 &= ~VAR_1;
   VAR_10 |= VAR_0;

   VAR_10 &= ~(0x1 << 15);
  }

  else if (VAR_6->id == 132)
   VAR_10 &= ~(0x1 << 8);
  else if (VAR_6->id == 129)
   VAR_10 &= ~(0x1 << 9);

  else if (VAR_6->id == 134)
   VAR_10 &= ~(0x5 << 11);
  else if (VAR_6->id == 131)
   VAR_10 &= ~(0x5 << 12);

  break;

 default:
  return (VAR_3);
 }

 FUNC_1(VAR_8, VAR_9, VAR_10);

 return (0);
}
