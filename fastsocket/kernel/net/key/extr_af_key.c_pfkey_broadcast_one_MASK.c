
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sock {scalar_t__ sk_rcvbuf; int (* sk_data_ready ) (struct sock*,int ) ;int sk_receive_queue; int sk_rmem_alloc; } ;
struct sk_buff {int len; int users; } ;
typedef int gfp_t ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *) ;
 struct sk_buff* FUNC_2 (struct sk_buff*,int ) ;
 int FUNC_3 (struct sk_buff*) ;
 int FUNC_4 (int *,struct sk_buff*) ;
 int FUNC_5 (struct sk_buff*,struct sock*) ;
 int FUNC_6 (struct sock*) ;
 int FUNC_7 (struct sock*) ;
 int FUNC_8 (struct sock*,int ) ;

__attribute__((used)) static int FUNC_9(struct sk_buff *VAR_1, struct sk_buff **VAR_2,
          gfp_t VAR_3, struct sock *VAR_4)
{
 int VAR_5 = -VAR_0;

 FUNC_6(VAR_4);
 if (*VAR_2 == ((void*)0)) {
  if (FUNC_1(&VAR_1->users) != 1) {
   *VAR_2 = FUNC_2(VAR_1, VAR_3);
  } else {
   *VAR_2 = VAR_1;
   FUNC_0(&VAR_1->users);
  }
 }
 if (*VAR_2 != ((void*)0)) {
  if (FUNC_1(&VAR_4->sk_rmem_alloc) <= VAR_4->sk_rcvbuf) {
   FUNC_3(*VAR_2);
   FUNC_5(*VAR_2, VAR_4);
   FUNC_4(&VAR_4->sk_receive_queue, *VAR_2);
   VAR_4->sk_data_ready(VAR_4, (*VAR_2)->len);
   *VAR_2 = ((void*)0);
   VAR_5 = 0;
  }
 }
 FUNC_7(VAR_4);
 return VAR_5;
}
