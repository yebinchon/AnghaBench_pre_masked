
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ifnet {struct an_softc* if_softc; } ;
struct an_ltv_genconfig {int an_opmode; int an_len; int* an_rates; void* an_type; } ;
struct TYPE_4__ {TYPE_1__* ifm_cur; } ;
struct an_softc {int an_tx_rate; struct an_ltv_genconfig an_config; TYPE_2__ an_ifmedia; } ;
struct an_ltv_gen {int dummy; } ;
struct TYPE_3__ {int ifm_media; } ;


 int FUNC_0 (struct an_softc*) ;
 int VAR_0 ;
 void* VAR_1 ;
 int FUNC_1 (struct an_softc*) ;
 int VAR_2 ;
 int FUNC_2 (int) ;
 int FUNC_3 (struct an_softc*) ;
 int FUNC_4 (struct an_softc*,struct an_ltv_gen*) ;
 int FUNC_5 (int*,int) ;
 int FUNC_6 (int ) ;

__attribute__((used)) static int
FUNC_7(struct ifnet *VAR_3)
{
 struct an_softc *VAR_4 = VAR_3->if_softc;
 struct an_ltv_genconfig *VAR_5;
 int VAR_6 = VAR_4->an_config.an_opmode;
 int VAR_7 = VAR_4->an_tx_rate;

 FUNC_0(VAR_4);
 VAR_4->an_tx_rate = FUNC_6(
  FUNC_2(VAR_4->an_ifmedia.ifm_cur->ifm_media));
 if (VAR_4->an_tx_rate < 0)
  VAR_4->an_tx_rate = 0;

 if (VAR_7 != VAR_4->an_tx_rate) {

  VAR_4->an_config.an_type = VAR_1;
  VAR_4->an_config.an_len = sizeof(struct an_ltv_genconfig);
  FUNC_4(VAR_4, (struct an_ltv_gen *)&VAR_4->an_config);
  VAR_5 = &VAR_4->an_config;


  FUNC_5(VAR_5->an_rates, sizeof(VAR_5->an_rates));
  VAR_5->an_rates[0] = VAR_4->an_tx_rate;


  VAR_4->an_config.an_type = VAR_1;
  VAR_4->an_config.an_len = sizeof(struct an_ltv_genconfig);
 }

 if ((VAR_4->an_ifmedia.ifm_cur->ifm_media & VAR_2) != 0)
  VAR_4->an_config.an_opmode &= ~VAR_0;
 else
  VAR_4->an_config.an_opmode |= VAR_0;

 if (VAR_6 != VAR_4->an_config.an_opmode ||
     VAR_7 != VAR_4->an_tx_rate)
  FUNC_3(VAR_4);
 FUNC_1(VAR_4);

 return(0);
}
