
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct hostapd_tx_queue_params {int burst; int cwmax; int cwmin; int aifs; } ;
struct hostapd_iface {TYPE_1__* conf; int * mconf; struct hostapd_data** bss; } ;
struct hostapd_data {TYPE_2__* conf; } ;
struct TYPE_4__ {int mesh; } ;
struct TYPE_3__ {struct hostapd_tx_queue_params* tx_queue; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct hostapd_data*,int,int ,int ,int ,int ) ;
 int FUNC_1 (int ,char*,int) ;

__attribute__((used)) static void FUNC_2(struct hostapd_iface *VAR_3)
{
 struct hostapd_data *VAR_4 = VAR_3->bss[0];
 int VAR_5;
 struct hostapd_tx_queue_params *VAR_6;






 for (VAR_5 = 0; VAR_5 < VAR_2; VAR_5++) {
  VAR_6 = &VAR_3->conf->tx_queue[VAR_5];

  if (FUNC_0(VAR_4, VAR_5, VAR_6->aifs, VAR_6->cwmin,
      VAR_6->cwmax, VAR_6->burst)) {
   FUNC_1(VAR_1, "Failed to set TX queue "
       "parameters for queue %d.", VAR_5);

  }
 }
}
