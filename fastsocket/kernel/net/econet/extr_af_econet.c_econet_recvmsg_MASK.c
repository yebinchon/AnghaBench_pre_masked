
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct socket {struct sock* sk; } ;
struct sockaddr_ec {int dummy; } ;
struct sock {int sk_stamp; } ;
struct sk_buff {size_t len; int cb; int tstamp; int data; } ;
struct msghdr {int msg_namelen; scalar_t__ msg_name; int msg_iov; int msg_flags; } ;
struct kiocb {int dummy; } ;
struct TYPE_2__ {int msg_namelen; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_1__* VAR_3 ;
 int FUNC_0 (scalar_t__,int ,int ) ;
 int FUNC_1 (int ,int ,size_t) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct sock*,struct sk_buff*) ;
 struct sk_buff* FUNC_5 (struct sock*,int,int,int*) ;

__attribute__((used)) static int FUNC_6(struct kiocb *VAR_4, struct socket *VAR_5,
     struct msghdr *VAR_6, size_t VAR_7, int VAR_8)
{
 struct sock *VAR_9 = VAR_5->sk;
 struct sk_buff *VAR_10;
 size_t VAR_11;
 int VAR_12;

 VAR_6->msg_namelen = 0;

 FUNC_2(&VAR_2);
 VAR_10=FUNC_5(VAR_9,VAR_8,VAR_8&VAR_0,&VAR_12);







 if(VAR_10==((void*)0))
  goto out;






 VAR_11 = VAR_10->len;
 if (VAR_11 > VAR_7)
 {
  VAR_11=VAR_7;
  VAR_6->msg_flags|=VAR_1;
 }


 VAR_12 = FUNC_1(VAR_6->msg_iov, VAR_10->data, VAR_11);
 if (VAR_12)
  goto out_free;
 VAR_9->sk_stamp = VAR_10->tstamp;

 if (VAR_6->msg_name) {
  VAR_3->msg_namelen = sizeof(struct sockaddr_ec);
  FUNC_0(VAR_6->msg_name, VAR_10->cb, VAR_6->msg_namelen);
 }




 VAR_12 = VAR_11;

out_free:
 FUNC_4(VAR_9, VAR_10);
out:
 FUNC_3(&VAR_2);
 return VAR_12;
}
