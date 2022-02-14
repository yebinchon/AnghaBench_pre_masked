
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct irlap_cb {int vs; int va; int wx_list; scalar_t__ window_size; scalar_t__ window; } ;


 int FUNC_0 (struct sk_buff*) ;
 struct sk_buff* FUNC_1 (int *) ;
 int * FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *) ;

void FUNC_4(struct irlap_cb *VAR_0, int VAR_1)
{
 struct sk_buff *VAR_2 = ((void*)0);
 int VAR_3 = 0;
 if (VAR_1 == VAR_0->vs) {
  while ((VAR_2 = FUNC_1(&VAR_0->wx_list)) != ((void*)0)) {
   FUNC_0(VAR_2);
  }

  VAR_0->va = VAR_1 - 1;
 } else {

  while ((FUNC_2(&VAR_0->wx_list) != ((void*)0)) &&
         (((VAR_0->va+1) % 8) != VAR_1))
  {
   VAR_2 = FUNC_1(&VAR_0->wx_list);
   FUNC_0(VAR_2);

   VAR_0->va = (VAR_0->va + 1) % 8;
   VAR_3++;
  }
 }


 VAR_0->window = VAR_0->window_size - FUNC_3(&VAR_0->wx_list);
}
