
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sock {int dummy; } ;
struct sk_buff_head {int dummy; } ;
struct sk_buff {int dummy; } ;
struct rtable {int dummy; } ;
struct ipcm_cookie {int dummy; } ;
struct inet_cork {int dummy; } ;


 struct sk_buff* FUNC_0 (int) ;
 unsigned int VAR_0 ;
 int FUNC_1 (struct sock*,struct sk_buff_head*,struct inet_cork*,int (*) (void*,char*,int,int,int,struct sk_buff*),void*,int,int,struct ipcm_cookie*,unsigned int) ;
 int FUNC_2 (struct sock*,struct sk_buff_head*,struct inet_cork*) ;
 struct sk_buff* FUNC_3 (struct sock*,struct sk_buff_head*,struct inet_cork*) ;
 int FUNC_4 (struct sk_buff_head*) ;
 int FUNC_5 (struct sock*,struct inet_cork*,struct ipcm_cookie*,struct rtable**) ;

struct sk_buff *FUNC_6(struct sock *VAR_1,
       int VAR_2(void *VAR_3, char *VAR_4, int VAR_5,
     int VAR_6, int VAR_7, struct sk_buff *VAR_8),
       void *VAR_9, int VAR_10, int VAR_11,
       struct ipcm_cookie *VAR_12, struct rtable **VAR_13,
       unsigned int VAR_14)
{
 struct inet_cork VAR_15 = {};
 struct sk_buff_head VAR_16;
 int VAR_17;

 if (VAR_14 & VAR_0)
  return ((void*)0);

 FUNC_4(&VAR_16);

 VAR_17 = FUNC_5(VAR_1, &VAR_15, VAR_12, VAR_13);
 if (VAR_17)
  return FUNC_0(VAR_17);

 VAR_17 = FUNC_1(VAR_1, &VAR_16, &VAR_15, VAR_2,
          VAR_9, VAR_10, VAR_11, VAR_12, VAR_14);
 if (VAR_17) {
  FUNC_2(VAR_1, &VAR_16, &VAR_15);
  return FUNC_0(VAR_17);
 }

 return FUNC_3(VAR_1, &VAR_16, &VAR_15);
}
