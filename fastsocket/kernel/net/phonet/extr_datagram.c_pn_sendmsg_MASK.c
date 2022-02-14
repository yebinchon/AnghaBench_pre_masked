
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockaddr_pn {scalar_t__ spn_family; } ;
struct sock {int dummy; } ;
struct sk_buff {int dummy; } ;
struct msghdr {int msg_flags; int msg_namelen; int msg_iov; int * msg_name; } ;
struct kiocb {int dummy; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct sk_buff*) ;
 int FUNC_1 (void*,int ,size_t) ;
 int FUNC_2 (struct sock*,struct sk_buff*,struct sockaddr_pn*) ;
 scalar_t__ FUNC_3 (struct sk_buff*,size_t) ;
 int FUNC_4 (struct sk_buff*,scalar_t__) ;
 struct sk_buff* FUNC_5 (struct sock*,scalar_t__,int,int*) ;

__attribute__((used)) static int FUNC_6(struct kiocb *VAR_8, struct sock *VAR_9,
   struct msghdr *VAR_10, size_t VAR_11)
{
 struct sockaddr_pn *VAR_12;
 struct sk_buff *VAR_13;
 int VAR_14;

 if (VAR_10->msg_flags & VAR_7)
  return -VAR_4;

 if (VAR_10->msg_name == ((void*)0))
  return -VAR_2;

 if (VAR_10->msg_namelen < sizeof(struct sockaddr_pn))
  return -VAR_3;

 VAR_12 = (struct sockaddr_pn *)VAR_10->msg_name;
 if (VAR_12->spn_family != VAR_0)
  return -VAR_1;

 VAR_13 = FUNC_5(VAR_9, VAR_5 + VAR_11,
     VAR_10->msg_flags & VAR_6, &VAR_14);
 if (VAR_13 == ((void*)0))
  return VAR_14;
 FUNC_4(VAR_13, VAR_5);

 VAR_14 = FUNC_1((void *)FUNC_3(VAR_13, VAR_11), VAR_10->msg_iov, VAR_11);
 if (VAR_14 < 0) {
  FUNC_0(VAR_13);
  return VAR_14;
 }





 VAR_14 = FUNC_2(VAR_9, VAR_13, VAR_12);


 return (VAR_14 >= 0) ? VAR_11 : VAR_14;
}
