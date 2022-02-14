
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff_head {int dummy; } ;
struct sk_buff {int dummy; } ;
struct pfifo_fast_priv {size_t bitmap; } ;
struct Qdisc {int dummy; } ;


 struct sk_buff_head* FUNC_0 (struct pfifo_fast_priv*,int) ;
 int* VAR_0 ;
 struct pfifo_fast_priv* FUNC_1 (struct Qdisc*) ;
 struct sk_buff* FUNC_2 (struct sk_buff_head*) ;

__attribute__((used)) static struct sk_buff *FUNC_3(struct Qdisc* VAR_1)
{
 struct pfifo_fast_priv *VAR_2 = FUNC_1(VAR_1);
 int VAR_3 = VAR_0[VAR_2->bitmap];

 if (VAR_3 >= 0) {
  struct sk_buff_head *VAR_4 = FUNC_0(VAR_2, VAR_3);

  return FUNC_2(VAR_4);
 }

 return ((void*)0);
}
