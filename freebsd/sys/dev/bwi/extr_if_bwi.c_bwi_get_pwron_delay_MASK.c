
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct bwi_regwin {int dummy; } ;
struct bwi_softc {int sc_cap; int sc_pwron_delay; struct bwi_regwin sc_com_regwin; } ;
struct bwi_clock_freq {int clkfreq_min; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct bwi_regwin*) ;
 int FUNC_1 (struct bwi_softc*,int ) ;
 int FUNC_2 (struct bwi_softc*,int ,char*,int ) ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 (struct bwi_softc*,struct bwi_clock_freq*) ;
 int FUNC_5 (struct bwi_softc*,struct bwi_regwin*,struct bwi_regwin**) ;
 int FUNC_6 (int,int ) ;

__attribute__((used)) static int
FUNC_7(struct bwi_softc *VAR_3)
{
 struct bwi_regwin *VAR_4, *VAR_5;
 struct bwi_clock_freq VAR_6;
 uint32_t VAR_7;
 int VAR_8;

 VAR_4 = &VAR_3->sc_com_regwin;
 FUNC_3(FUNC_0(VAR_4), ("no regwin"));

 if ((VAR_3->sc_cap & VAR_0) == 0)
  return 0;

 VAR_8 = FUNC_5(VAR_3, VAR_4, &VAR_5);
 if (VAR_8)
  return VAR_8;

 FUNC_4(VAR_3, &VAR_6);

 VAR_7 = FUNC_1(VAR_3, VAR_2);
 VAR_3->sc_pwron_delay = FUNC_6((VAR_7 + 2) * 1000000, VAR_6.clkfreq_min);
 FUNC_2(VAR_3, VAR_1, "power on delay %u\n", VAR_3->sc_pwron_delay);

 return FUNC_5(VAR_3, VAR_5, ((void*)0));
}
