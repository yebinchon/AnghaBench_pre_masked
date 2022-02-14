
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bwn_stats {int rtsfail; int rts; } ;
struct bwn_softc {int sc_debug; struct bwn_mac* sc_curmac; int sc_dev; } ;
struct bwn_mac {struct bwn_stats mac_stats; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int ,char*,int ,int *,int ,char*) ;
 int FUNC_1 (int ,int ,int ,char*,int ,int *,int ,char*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static void
FUNC_5(struct bwn_softc *VAR_2)
{
 device_t VAR_3 = VAR_2->sc_dev;
 struct bwn_mac *VAR_4;
 struct bwn_stats *VAR_5;



 if ((VAR_4 = VAR_2->sc_curmac) == ((void*)0))
  return;
 VAR_5 = &VAR_4->mac_stats;

 FUNC_0(FUNC_3(VAR_3),
     FUNC_2(FUNC_4(VAR_3)), VAR_1,
     "linknoise", VAR_0, &VAR_5->rts, 0, "Noise level");
 FUNC_0(FUNC_3(VAR_3),
     FUNC_2(FUNC_4(VAR_3)), VAR_1,
     "rts", VAR_0, &VAR_5->rts, 0, "RTS");
 FUNC_0(FUNC_3(VAR_3),
     FUNC_2(FUNC_4(VAR_3)), VAR_1,
     "rtsfail", VAR_0, &VAR_5->rtsfail, 0, "RTS failed to send");






}
