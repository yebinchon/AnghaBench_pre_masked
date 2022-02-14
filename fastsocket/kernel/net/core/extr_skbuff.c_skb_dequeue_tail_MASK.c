
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff_head {int lock; } ;
struct sk_buff {int dummy; } ;


 struct sk_buff* FUNC_0 (struct sk_buff_head*) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;

struct sk_buff *FUNC_3(struct sk_buff_head *VAR_0)
{
 unsigned long VAR_1;
 struct sk_buff *VAR_2;

 FUNC_1(&VAR_0->lock, VAR_1);
 VAR_2 = FUNC_0(VAR_0);
 FUNC_2(&VAR_0->lock, VAR_1);
 return VAR_2;
}
