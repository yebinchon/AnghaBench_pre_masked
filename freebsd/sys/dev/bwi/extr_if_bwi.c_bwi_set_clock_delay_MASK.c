
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bwi_regwin {int rw_rev; } ;
struct bwi_softc {scalar_t__ sc_bbp_id; int sc_bbp_rev; int sc_cap; struct bwi_regwin sc_com_regwin; } ;
struct bwi_clock_freq {int clkfreq_max; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct bwi_regwin*) ;
 int FUNC_1 (struct bwi_softc*,int ,int,int) ;
 int FUNC_2 (struct bwi_softc*,int ,int ) ;
 int FUNC_3 (struct bwi_softc*,struct bwi_clock_freq*) ;
 int FUNC_4 (struct bwi_softc*,struct bwi_regwin*,struct bwi_regwin**) ;
 int FUNC_5 (int,int) ;

__attribute__((used)) static int
FUNC_6(struct bwi_softc *VAR_8)
{
 struct bwi_regwin *VAR_9, *VAR_10;
 int VAR_11;

 VAR_10 = &VAR_8->sc_com_regwin;
 if (!FUNC_0(VAR_10))
  return 0;

 VAR_11 = FUNC_4(VAR_8, VAR_10, &VAR_9);
 if (VAR_11)
  return VAR_11;

 if (VAR_8->sc_bbp_id == VAR_0) {
  if (VAR_8->sc_bbp_rev == 0)
   FUNC_2(VAR_8, VAR_3, VAR_4);
  else if (VAR_8->sc_bbp_rev == 1)
   FUNC_2(VAR_8, VAR_3, VAR_5);
 }

 if (VAR_8->sc_cap & VAR_1) {
  if (VAR_10->rw_rev >= 10) {
   FUNC_1(VAR_8, VAR_2, 0xffff, 0x40000);
  } else {
   struct bwi_clock_freq VAR_12;

   FUNC_3(VAR_8, &VAR_12);
   FUNC_2(VAR_8, VAR_7,
    FUNC_5(VAR_12.clkfreq_max * 150, 1000000));
   FUNC_2(VAR_8, VAR_6,
    FUNC_5(VAR_12.clkfreq_max * 15, 1000000));
  }
 }

 return FUNC_4(VAR_8, VAR_9, ((void*)0));
}
