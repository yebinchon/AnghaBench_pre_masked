
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sock {int sk_write_queue; } ;
struct rtable {int dummy; } ;
struct ipcm_cookie {int dummy; } ;
struct inet_sock {int cork; } ;
struct inet_cork {int dummy; } ;


 unsigned int VAR_0 ;
 int FUNC_0 (struct sock*,int *,struct inet_cork*,int (*) (void*,char*,int,int,int,struct sk_buff*),void*,int,int,struct ipcm_cookie*,unsigned int) ;
 struct inet_sock* FUNC_1 (struct sock*) ;
 int FUNC_2 (struct sock*,struct inet_cork*,struct ipcm_cookie*,struct rtable**) ;
 scalar_t__ FUNC_3 (int *) ;

int FUNC_4(struct sock *VAR_1,
     int VAR_2(void *VAR_3, char *VAR_4, int VAR_5, int VAR_6,
          int VAR_7, struct sk_buff *VAR_8),
     void *VAR_9, int VAR_10, int VAR_11,
     struct ipcm_cookie *VAR_12, struct rtable **VAR_13,
     unsigned int VAR_14)
{
 struct inet_sock *VAR_15 = FUNC_1(VAR_1);
 int VAR_16;

 if (VAR_14&VAR_0)
  return 0;

 if (FUNC_3(&VAR_1->sk_write_queue)) {
  VAR_16 = FUNC_2(VAR_1, (struct inet_cork *)&VAR_15->cork, VAR_12,
        VAR_13);
  if (VAR_16)
   return VAR_16;
 } else {
  VAR_11 = 0;
 }

 return FUNC_0(VAR_1, &VAR_1->sk_write_queue,
    (struct inet_cork *)&VAR_15->cork, VAR_2,
    VAR_9, VAR_10, VAR_11, VAR_12, VAR_14);
}
