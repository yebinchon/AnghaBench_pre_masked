
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;
struct iwm_notification_wait {int (* fn ) (struct iwm_softc*,struct iwm_rx_packet*,void*) ;int n_cmds; scalar_t__ aborted; scalar_t__ triggered; int cmds; void* fn_data; } ;
struct iwm_notif_wait_data {int list; } ;


 int VAR_0 ;
 int FUNC_0 (struct iwm_notif_wait_data*) ;
 int FUNC_1 (struct iwm_notif_wait_data*) ;
 int FUNC_2 (int,char*) ;
 int FUNC_3 (int *,struct iwm_notification_wait*,int ) ;
 int VAR_1 ;
 int FUNC_4 (int ,int const*,int) ;

void
FUNC_5(struct iwm_notif_wait_data *VAR_2,
    struct iwm_notification_wait *VAR_3, const uint16_t *VAR_4, int VAR_5,
    int (*VAR_6)(struct iwm_softc *VAR_7, struct iwm_rx_packet *VAR_8, void *VAR_9),
    void *VAR_10)
{
 FUNC_2(VAR_5 <= VAR_0,
     ("n_cmds %d is too large", VAR_5));
 VAR_3->fn = VAR_6;
 VAR_3->fn_data = VAR_10;
 VAR_3->n_cmds = VAR_5;
 FUNC_4(VAR_3->cmds, VAR_4, VAR_5 * sizeof(uint16_t));
 VAR_3->triggered = 0;
 VAR_3->aborted = 0;

 FUNC_0(VAR_2);
 FUNC_3(&VAR_2->list, VAR_3, VAR_1);
 FUNC_1(VAR_2);
}
