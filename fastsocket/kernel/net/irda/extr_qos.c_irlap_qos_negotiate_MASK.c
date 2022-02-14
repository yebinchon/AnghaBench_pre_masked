
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_8__ ;
typedef struct TYPE_16__ TYPE_7__ ;
typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct sk_buff {int len; int data; } ;
struct TYPE_16__ {int value; } ;
struct TYPE_15__ {int value; } ;
struct TYPE_14__ {int value; } ;
struct TYPE_13__ {int value; } ;
struct TYPE_12__ {int value; } ;
struct TYPE_11__ {int value; } ;
struct TYPE_10__ {int value; } ;
struct TYPE_17__ {TYPE_7__ link_disc_time; TYPE_6__ min_turn_time; TYPE_5__ max_turn_time; TYPE_4__ additional_bofs; TYPE_3__ window_size; TYPE_2__ data_size; TYPE_1__ baud_rate; } ;
struct irlap_cb {TYPE_8__ qos_tx; TYPE_8__ qos_rx; } ;


 int FUNC_0 (int,char*,int ) ;
 int FUNC_1 (struct irlap_cb*,int ,int ,int *) ;
 int FUNC_2 (TYPE_8__*) ;
 int FUNC_3 (TYPE_8__*) ;
 int VAR_0 ;

int FUNC_4(struct irlap_cb *VAR_1, struct sk_buff *VAR_2)
{
 int VAR_3;

 VAR_3 = FUNC_1(VAR_1, VAR_2->data, VAR_2->len,
         &VAR_0);


 FUNC_2(&VAR_1->qos_tx);
 FUNC_2(&VAR_1->qos_rx);

 FUNC_3(&VAR_1->qos_tx);

 FUNC_0(2, "Setting BAUD_RATE to %d bps.\n",
     VAR_1->qos_tx.baud_rate.value);
 FUNC_0(2, "Setting DATA_SIZE to %d bytes\n",
     VAR_1->qos_tx.data_size.value);
 FUNC_0(2, "Setting WINDOW_SIZE to %d\n",
     VAR_1->qos_tx.window_size.value);
 FUNC_0(2, "Setting XBOFS to %d\n",
     VAR_1->qos_tx.additional_bofs.value);
 FUNC_0(2, "Setting MAX_TURN_TIME to %d ms.\n",
     VAR_1->qos_tx.max_turn_time.value);
 FUNC_0(2, "Setting MIN_TURN_TIME to %d usecs.\n",
     VAR_1->qos_tx.min_turn_time.value);
 FUNC_0(2, "Setting LINK_DISC to %d secs.\n",
     VAR_1->qos_tx.link_disc_time.value);
 return VAR_3;
}
