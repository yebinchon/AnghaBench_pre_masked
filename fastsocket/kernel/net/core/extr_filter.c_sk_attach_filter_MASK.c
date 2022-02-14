
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sock_fprog {int len; int * filter; } ;
struct sock_filter {int dummy; } ;
struct sock {int sk_filter; } ;
struct sk_filter {int len; int insns; int refcnt; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,int) ;
 scalar_t__ FUNC_1 (int ,int *,unsigned int) ;
 int FUNC_2 (int ,struct sk_filter*) ;
 struct sk_filter* FUNC_3 (int ) ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 int FUNC_6 (int ,int) ;
 int FUNC_7 (struct sock*,struct sk_filter*) ;
 int FUNC_8 (struct sock*,struct sk_filter*) ;
 int FUNC_9 (struct sock*,struct sk_filter*,unsigned int) ;
 struct sk_filter* FUNC_10 (struct sock*,unsigned int,int ) ;

int FUNC_11(struct sock_fprog *VAR_4, struct sock *VAR_5)
{
 struct sk_filter *VAR_6, *VAR_7;
 unsigned int VAR_8 = sizeof(struct sock_filter) * VAR_4->len;
 int VAR_9;


 if (VAR_4->filter == ((void*)0))
  return -VAR_1;

 VAR_6 = FUNC_10(VAR_5, VAR_8+sizeof(*VAR_6), VAR_3);
 if (!VAR_6)
  return -VAR_2;
 if (FUNC_1(VAR_6->insns, VAR_4->filter, VAR_8)) {
  FUNC_9(VAR_5, VAR_6, VAR_8+sizeof(*VAR_6));
  return -VAR_0;
 }

 FUNC_0(&VAR_6->refcnt, 1);
 VAR_6->len = VAR_4->len;

 VAR_9 = FUNC_6(VAR_6->insns, VAR_6->len);
 if (VAR_9) {
  FUNC_8(VAR_5, VAR_6);
  return VAR_9;
 }

 FUNC_4();
 VAR_7 = FUNC_3(VAR_5->sk_filter);
 FUNC_2(VAR_5->sk_filter, VAR_6);
 FUNC_5();

 if (VAR_7)
  FUNC_7(VAR_5, VAR_7);
 return 0;
}
