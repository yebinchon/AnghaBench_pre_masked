
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct sk_buff {scalar_t__ len; int truesize; struct net_device* dev; } ;
struct TYPE_4__ {int tx_bytes; int tx_packets; int tx_dropped; } ;
struct net_device {TYPE_1__ stats; } ;
struct atm_vcc {scalar_t__ (* send ) (struct atm_vcc*,struct sk_buff*) ;int atm_options; } ;
struct TYPE_6__ {int atm_options; struct atm_vcc* vcc; } ;
struct TYPE_5__ {int sk_wmem_alloc; } ;


 TYPE_3__* FUNC_0 (struct sk_buff*) ;
 int FUNC_1 (int ,int *) ;
 TYPE_2__* FUNC_2 (struct atm_vcc*) ;
 scalar_t__ FUNC_3 (struct atm_vcc*,struct sk_buff*) ;

__attribute__((used)) static void
FUNC_4(struct atm_vcc *VAR_0, struct sk_buff *VAR_1)
{
 struct net_device *VAR_2 = VAR_1->dev;

 FUNC_0(VAR_1)->vcc = VAR_0;
 FUNC_0(VAR_1)->atm_options = VAR_0->atm_options;

 FUNC_1(VAR_1->truesize, &FUNC_2(VAR_0)->sk_wmem_alloc);
 if (VAR_0->send(VAR_0, VAR_1) < 0) {
  VAR_2->stats.tx_dropped++;
  return;
 }

 VAR_2->stats.tx_packets++;
 VAR_2->stats.tx_bytes += VAR_1->len;
}
