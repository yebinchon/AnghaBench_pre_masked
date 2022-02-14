
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff_head {int dummy; } ;
struct sk_buff {int dummy; } ;
struct pfifo_fast_priv {size_t bitmap; } ;
struct TYPE_2__ {int qlen; } ;
struct Qdisc {TYPE_1__ q; } ;


 struct sk_buff* FUNC_0 (struct Qdisc*,struct sk_buff_head*) ;
 struct sk_buff_head* FUNC_1 (struct pfifo_fast_priv*,int) ;
 int* VAR_0 ;
 scalar_t__ FUNC_2 (int) ;
 struct pfifo_fast_priv* FUNC_3 (struct Qdisc*) ;
 scalar_t__ FUNC_4 (struct sk_buff_head*) ;

__attribute__((used)) static struct sk_buff *FUNC_5(struct Qdisc* VAR_1)
{
 struct pfifo_fast_priv *VAR_2 = FUNC_3(VAR_1);
 int VAR_3 = VAR_0[VAR_2->bitmap];

 if (FUNC_2(VAR_3 >= 0)) {
  struct sk_buff_head *VAR_4 = FUNC_1(VAR_2, VAR_3);
  struct sk_buff *VAR_5 = FUNC_0(VAR_1, VAR_4);

  VAR_1->q.qlen--;
  if (FUNC_4(VAR_4))
   VAR_2->bitmap &= ~(1 << VAR_3);

  return VAR_5;
 }

 return ((void*)0);
}
