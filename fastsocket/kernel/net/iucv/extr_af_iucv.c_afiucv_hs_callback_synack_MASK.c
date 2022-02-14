
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sock {scalar_t__ sk_state; int (* sk_state_change ) (struct sock*) ;} ;
struct sk_buff {scalar_t__ data; } ;
struct iucv_sock {int msglimit_peer; } ;
struct af_iucv_trans_hdr {int window; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct sock*) ;
 int FUNC_1 (struct sock*) ;
 struct iucv_sock* FUNC_2 (struct sock*) ;
 int FUNC_3 (struct sk_buff*) ;
 int FUNC_4 (struct sock*) ;

__attribute__((used)) static int FUNC_5(struct sock *VAR_3, struct sk_buff *VAR_4)
{
 struct iucv_sock *VAR_5 = FUNC_2(VAR_3);
 struct af_iucv_trans_hdr *VAR_6 =
     (struct af_iucv_trans_hdr *)VAR_4->data;

 if (!VAR_5)
  goto out;
 if (VAR_3->sk_state != VAR_0)
  goto out;
 FUNC_0(VAR_3);
 VAR_5->msglimit_peer = VAR_6->window;
 VAR_3->sk_state = VAR_1;
 VAR_3->sk_state_change(VAR_3);
 FUNC_1(VAR_3);
out:
 FUNC_3(VAR_4);
 return VAR_2;
}
