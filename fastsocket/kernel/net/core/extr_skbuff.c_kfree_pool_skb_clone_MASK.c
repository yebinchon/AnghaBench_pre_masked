
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct skb_pool {int clone_recyc_list; int clone_free_list; } ;
struct sk_buff {scalar_t__ pool_id; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (char*,scalar_t__,struct sk_buff*,scalar_t__) ;
 int FUNC_2 (int *,struct sk_buff*) ;
 int FUNC_3 () ;
 scalar_t__ FUNC_4 (int) ;
 struct skb_pool* FUNC_5 (int ,scalar_t__) ;
 int FUNC_6 () ;
 int FUNC_7 () ;
 int VAR_0 ;
 int FUNC_8 (int *,struct sk_buff*) ;
 scalar_t__ FUNC_9 () ;

__attribute__((used)) static inline void FUNC_10(struct sk_buff *VAR_1)
{
 struct skb_pool *VAR_2;

 FUNC_0(VAR_1->pool_id < 0);

 VAR_2 = FUNC_5(VAR_0, VAR_1->pool_id);

 if (FUNC_4(VAR_1->pool_id == FUNC_9())) {
  if (FUNC_4(FUNC_3())) {

   FUNC_2(&VAR_2->clone_free_list, VAR_1);
  } else {

   FUNC_6();
   FUNC_2(&VAR_2->clone_free_list, VAR_1);
   FUNC_7();
  }
  FUNC_1("Free clone pool skb[%d] 0x%p on CPU %d into free list\n", VAR_1->pool_id, VAR_1, FUNC_9());
 } else {
  FUNC_8(&VAR_2->clone_recyc_list, VAR_1);
  FUNC_1("Free clone pool skb[%d] 0x%p on CPU %d into recycle list\n", VAR_1->pool_id, VAR_1, FUNC_9());
 }
}
