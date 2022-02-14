
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct iwm_softc {int sc_noise; int sc_stats; } ;
struct iwm_rx_packet {int data; } ;
struct TYPE_2__ {int general; } ;
struct iwm_notif_statistics_v10 {TYPE_1__ rx; } ;


 int FUNC_0 (struct iwm_softc*,int *) ;
 int FUNC_1 (int *,struct iwm_notif_statistics_v10*,int) ;

__attribute__((used)) static void
FUNC_2(struct iwm_softc *VAR_0, struct iwm_rx_packet *VAR_1)
{
 struct iwm_notif_statistics_v10 *VAR_2 = (void *)&VAR_1->data;

 FUNC_1(&VAR_0->sc_stats, VAR_2, sizeof(VAR_0->sc_stats));
 VAR_0->sc_noise = FUNC_0(VAR_0, &VAR_2->rx.general);
}
