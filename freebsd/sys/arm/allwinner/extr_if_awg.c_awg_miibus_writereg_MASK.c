
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct awg_softc {int mdc_div_ratio_m; } ;
typedef int device_t ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (struct awg_softc*,int ) ;
 int FUNC_2 (struct awg_softc*,int ,int) ;
 struct awg_softc* FUNC_3 (int ) ;
 int FUNC_4 (int ,char*,int,int) ;

__attribute__((used)) static int
FUNC_5(device_t VAR_8, int VAR_9, int VAR_10, int VAR_11)
{
 struct awg_softc *VAR_12;
 int VAR_13;

 VAR_12 = FUNC_3(VAR_8);

 FUNC_2(VAR_12, VAR_1, VAR_11);
 FUNC_2(VAR_12, VAR_0,
     (VAR_12->mdc_div_ratio_m << VAR_2) |
     (VAR_9 << VAR_6) |
     (VAR_10 << VAR_7) |
     VAR_5 | VAR_3);
 for (VAR_13 = VAR_4; VAR_13 > 0; VAR_13--) {
  if ((FUNC_1(VAR_12, VAR_0) & VAR_3) == 0)
   break;
  FUNC_0(10);
 }

 if (VAR_13 == 0)
  FUNC_4(VAR_8, "phy write timeout, phy=%d reg=%d\n",
      VAR_9, VAR_10);

 return (0);
}
