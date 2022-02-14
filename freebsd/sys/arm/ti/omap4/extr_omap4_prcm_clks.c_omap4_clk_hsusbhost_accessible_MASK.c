
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct ti_clock_dev {scalar_t__ id; } ;
struct resource {int dummy; } ;
struct omap4_prcm_softc {struct resource* sc_res; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_0 (struct resource*,int) ;
 struct omap4_prcm_softc* FUNC_1 (int ) ;

__attribute__((used)) static int
FUNC_2(struct ti_clock_dev *VAR_8)
{
 struct omap4_prcm_softc *VAR_9;
 struct resource* VAR_10;
 uint32_t VAR_11;
 uint32_t VAR_12;

 VAR_9 = FUNC_1(VAR_2);
 if (VAR_9 == ((void*)0))
  return VAR_4;

 if (VAR_8->id == VAR_7) {

  VAR_10 = VAR_9->sc_res;
  VAR_11 = VAR_5 + 0x68;
 }
 else if (VAR_8->id == VAR_6) {

  VAR_10 = VAR_9->sc_res;
  VAR_11 = VAR_5 + 0x58;
 }
 else {
  return (VAR_3);
 }

 VAR_12 = FUNC_0(VAR_10, VAR_11);


 if ((VAR_12 & VAR_1) != VAR_0)
  return (0);

 return (1);
}
