
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bwn_softc {int sc_dev; int * sc_pmu; } ;
struct bwn_mac {struct bwn_softc* mac_sc; } ;
typedef int bhnd_clock ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,char*,int ,int) ;

__attribute__((used)) static int
FUNC_2(struct bwn_mac *VAR_2, bool VAR_3)
{
 struct bwn_softc *VAR_4;
 bhnd_clock VAR_5;
 int VAR_6;

 VAR_4 = VAR_2->mac_sc;


 if (VAR_4->sc_pmu != ((void*)0))
  return (0);


 if (VAR_3)
  VAR_5 = VAR_1;
 else
  VAR_5 = VAR_0;

 if ((VAR_6 = FUNC_0(VAR_4->sc_dev, VAR_5))) {
  FUNC_1(VAR_4->sc_dev, "%d clock request failed: %d\n",
      VAR_5, VAR_6);
  return (VAR_6);
 }

 return (0);
}
