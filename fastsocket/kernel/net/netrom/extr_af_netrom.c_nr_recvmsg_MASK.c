
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct socket {struct sock* sk; } ;
struct TYPE_2__ {int ax25_call; } ;
struct sockaddr_ax25 {TYPE_1__ sax25_call; int sax25_family; } ;
struct sock {scalar_t__ sk_state; } ;
struct sk_buff {size_t len; } ;
struct msghdr {int msg_namelen; int msg_iov; int msg_flags; scalar_t__ msg_name; } ;
struct kiocb {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (struct sock*) ;
 int FUNC_1 (struct sock*) ;
 int FUNC_2 (struct sk_buff*,int ,int ,size_t) ;
 int FUNC_3 (struct sk_buff*,int,int ,int ) ;
 int FUNC_4 (struct sock*,struct sk_buff*) ;
 struct sk_buff* FUNC_5 (struct sock*,int,int,int*) ;
 int FUNC_6 (struct sk_buff*) ;

__attribute__((used)) static int FUNC_7(struct kiocb *VAR_6, struct socket *VAR_7,
        struct msghdr *VAR_8, size_t VAR_9, int VAR_10)
{
 struct sock *VAR_11 = VAR_7->sk;
 struct sockaddr_ax25 *VAR_12 = (struct sockaddr_ax25 *)VAR_8->msg_name;
 size_t VAR_13;
 struct sk_buff *VAR_14;
 int VAR_15;






 FUNC_0(VAR_11);
 if (VAR_11->sk_state != VAR_5) {
  FUNC_1(VAR_11);
  return -VAR_2;
 }

 VAR_8->msg_namelen = 0;


 if ((VAR_14 = FUNC_5(VAR_11, VAR_10 & ~VAR_3, VAR_10 & VAR_3, &VAR_15)) == ((void*)0)) {
  FUNC_1(VAR_11);
  return VAR_15;
 }

 FUNC_6(VAR_14);
 VAR_13 = VAR_14->len;

 if (VAR_13 > VAR_9) {
  VAR_13 = VAR_9;
  VAR_8->msg_flags |= VAR_4;
 }

 FUNC_2(VAR_14, 0, VAR_8->msg_iov, VAR_13);

 if (VAR_12 != ((void*)0)) {
  VAR_12->sax25_family = VAR_0;
  FUNC_3(VAR_14, 7, VAR_12->sax25_call.ax25_call,
         VAR_1);
  VAR_8->msg_namelen = sizeof(*VAR_12);
 }

 FUNC_4(VAR_11, VAR_14);

 FUNC_1(VAR_11);
 return VAR_13;
}
