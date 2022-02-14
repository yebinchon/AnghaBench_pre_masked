
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sock {scalar_t__ sk_state; } ;
struct sk_buff {scalar_t__ data; } ;
struct iucv_sock {int msg_sent; } ;
struct af_iucv_trans_hdr {int window; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int *) ;
 struct iucv_sock* FUNC_1 (struct sock*) ;
 int FUNC_2 (struct sock*) ;

__attribute__((used)) static int FUNC_3(struct sock *VAR_2, struct sk_buff *VAR_3)
{
 struct iucv_sock *VAR_4 = FUNC_1(VAR_2);
 struct af_iucv_trans_hdr *VAR_5 =
     (struct af_iucv_trans_hdr *)VAR_3->data;

 if (!VAR_4)
  return VAR_1;

 if (VAR_2->sk_state != VAR_0)
  return VAR_1;

 FUNC_0(VAR_5->window, &VAR_4->msg_sent);
 FUNC_2(VAR_2);
 return VAR_1;
}
