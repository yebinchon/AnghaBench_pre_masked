
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bwn_softc {int sc_task_ch; } ;
struct bwn_mac {scalar_t__ mac_status; int mac_task_state; struct bwn_softc* mac_sc; } ;


 int FUNC_0 (struct bwn_softc*) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (struct bwn_mac*) ;
 int FUNC_2 (struct bwn_mac*) ;
 int FUNC_3 (struct bwn_mac*) ;
 int FUNC_4 (int *,int,void (*) (void*),struct bwn_mac*) ;
 int VAR_1 ;

__attribute__((used)) static void
FUNC_5(void *VAR_2)
{
 struct bwn_mac *VAR_3 = VAR_2;
 struct bwn_softc *VAR_4 = VAR_3->mac_sc;

 FUNC_0(VAR_4);
 if (VAR_3->mac_status != VAR_0)
  return;

 if (VAR_3->mac_task_state % 4 == 0)
  FUNC_3(VAR_3);
 if (VAR_3->mac_task_state % 2 == 0)
  FUNC_2(VAR_3);
 FUNC_1(VAR_3);

 VAR_3->mac_task_state++;
 FUNC_4(&VAR_4->sc_task_ch, VAR_1 * 15, FUNC_5, VAR_3);
}
