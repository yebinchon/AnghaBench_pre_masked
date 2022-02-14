
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sk_buff_head {int dummy; } ;
struct sk_buff {size_t priority; } ;
struct pfifo_fast_priv {int bitmap; } ;
struct TYPE_3__ {int qlen; } ;
struct Qdisc {TYPE_1__ q; } ;
struct TYPE_4__ {scalar_t__ tx_queue_len; } ;


 size_t VAR_0 ;
 int FUNC_0 (struct sk_buff*,struct Qdisc*,struct sk_buff_head*) ;
 struct sk_buff_head* FUNC_1 (struct pfifo_fast_priv*,int) ;
 int* VAR_1 ;
 TYPE_2__* FUNC_2 (struct Qdisc*) ;
 int FUNC_3 (struct sk_buff*,struct Qdisc*) ;
 struct pfifo_fast_priv* FUNC_4 (struct Qdisc*) ;
 scalar_t__ FUNC_5 (TYPE_1__*) ;

__attribute__((used)) static int FUNC_6(struct sk_buff *VAR_2, struct Qdisc* VAR_3)
{
 if (FUNC_5(&VAR_3->q) < FUNC_2(VAR_3)->tx_queue_len) {
  int VAR_4 = VAR_1[VAR_2->priority & VAR_0];
  struct pfifo_fast_priv *VAR_5 = FUNC_4(VAR_3);
  struct sk_buff_head *VAR_6 = FUNC_1(VAR_5, VAR_4);

  VAR_5->bitmap |= (1 << VAR_4);
  VAR_3->q.qlen++;
  return FUNC_0(VAR_2, VAR_3, VAR_6);
 }

 return FUNC_3(VAR_2, VAR_3);
}
