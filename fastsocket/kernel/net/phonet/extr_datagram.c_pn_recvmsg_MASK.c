
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockaddr_pn {int dummy; } ;
struct sock {int dummy; } ;
struct sk_buff {int len; } ;
struct msghdr {int msg_flags; int * msg_name; int msg_iov; } ;
struct kiocb {int dummy; } ;
typedef int sa ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,struct sockaddr_pn*,int) ;
 int FUNC_1 (struct sk_buff*,struct sockaddr_pn*) ;
 int FUNC_2 (struct sk_buff*,int ,int ,int) ;
 int FUNC_3 (struct sock*,struct sk_buff*) ;
 struct sk_buff* FUNC_4 (struct sock*,int,int,int*) ;

__attribute__((used)) static int FUNC_5(struct kiocb *VAR_4, struct sock *VAR_5,
   struct msghdr *VAR_6, size_t VAR_7, int VAR_8,
   int VAR_9, int *VAR_10)
{
 struct sk_buff *VAR_11 = ((void*)0);
 struct sockaddr_pn VAR_12;
 int VAR_13 = -VAR_1;
 int VAR_14;

 if (VAR_9 & VAR_2)
  goto out_nofree;

 VAR_11 = FUNC_4(VAR_5, VAR_9, VAR_8, &VAR_13);
 if (VAR_11 == ((void*)0))
  goto out_nofree;

 FUNC_1(VAR_11, &VAR_12);

 VAR_14 = VAR_11->len;
 if (VAR_7 < VAR_14) {
  VAR_6->msg_flags |= VAR_3;
  VAR_14 = VAR_7;
 }

 VAR_13 = FUNC_2(VAR_11, 0, VAR_6->msg_iov, VAR_14);
 if (VAR_13) {
  VAR_13 = -VAR_0;
  goto out;
 }

 VAR_13 = (VAR_9 & VAR_3) ? VAR_11->len : VAR_14;

 if (VAR_6->msg_name != ((void*)0)) {
  FUNC_0(VAR_6->msg_name, &VAR_12, sizeof(VAR_12));
  *VAR_10 = sizeof(VAR_12);
 }

out:
 FUNC_3(VAR_5, VAR_11);

out_nofree:
 return VAR_13;
}
