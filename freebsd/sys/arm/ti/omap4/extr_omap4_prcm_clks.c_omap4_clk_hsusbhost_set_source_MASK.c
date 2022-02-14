
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct ti_clock_dev {scalar_t__ id; } ;
struct resource {int dummy; } ;
struct omap4_prcm_softc {struct resource* sc_res; } ;
typedef scalar_t__ clk_src_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_0 (struct resource*,int) ;
 int FUNC_1 (struct resource*,int,int) ;
 struct omap4_prcm_softc* FUNC_2 (int ) ;

__attribute__((used)) static int
FUNC_3(struct ti_clock_dev *VAR_7,
                               clk_src_t VAR_8)
{
 struct omap4_prcm_softc *VAR_9;
 struct resource* VAR_10;
 uint32_t VAR_11;
 uint32_t VAR_12;
 unsigned int VAR_13;

 VAR_9 = FUNC_2(VAR_0);
 if (VAR_9 == ((void*)0))
  return VAR_2;

 if (VAR_7->id == VAR_5)
  VAR_13 = 24;
 else if (VAR_7->id != VAR_6)
  VAR_13 = 25;
 else
  return (VAR_1);


 VAR_10 = VAR_9->sc_res;
 VAR_11 = VAR_4 + 0x58;
 VAR_12 = FUNC_0(VAR_10, VAR_11);


 if (VAR_8 == VAR_3)
  VAR_12 |= (0x1 << VAR_13);
 else
  VAR_12 &= ~(0x1 << VAR_13);

 FUNC_1(VAR_10, VAR_11, VAR_12);

 return (0);
}
