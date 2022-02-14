
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vport_percpu_stats {int tx_bytes; int sync; int tx_packets; } ;
struct vport {int percpu_stats; TYPE_1__* ops; } ;
struct sk_buff {int dummy; } ;
struct TYPE_2__ {int (* send ) (struct vport*,struct sk_buff*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct sk_buff*) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (struct vport*,int ) ;
 int FUNC_3 (struct vport*,struct sk_buff*) ;
 struct vport_percpu_stats* FUNC_4 (int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

int FUNC_7(struct vport *VAR_2, struct sk_buff *VAR_3)
{
 int VAR_4 = VAR_2->ops->send(VAR_2, VAR_3);

 if (FUNC_1(VAR_4 > 0)) {
  struct vport_percpu_stats *VAR_5;

  VAR_5 = FUNC_4(VAR_2->percpu_stats);

  FUNC_5(&VAR_5->sync);
  VAR_5->tx_packets++;
  VAR_5->tx_bytes += VAR_4;
  FUNC_6(&VAR_5->sync);
 } else if (VAR_4 < 0) {
  FUNC_2(VAR_2, VAR_1);
  FUNC_0(VAR_3);
 } else
  FUNC_2(VAR_2, VAR_0);

 return VAR_4;
}
