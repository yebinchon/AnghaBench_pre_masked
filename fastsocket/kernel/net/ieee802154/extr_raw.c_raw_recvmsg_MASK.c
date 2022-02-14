
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sock {int dummy; } ;
struct sk_buff {size_t len; } ;
struct msghdr {int msg_flags; int msg_iov; } ;
struct kiocb {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct sk_buff*,int ,int ,size_t) ;
 int FUNC_1 (struct sock*,struct sk_buff*) ;
 struct sk_buff* FUNC_2 (struct sock*,int,int,int*) ;
 int FUNC_3 (struct msghdr*,struct sock*,struct sk_buff*) ;

__attribute__((used)) static int FUNC_4(struct kiocb *VAR_2, struct sock *VAR_3, struct msghdr *VAR_4,
         size_t VAR_5, int VAR_6, int VAR_7, int *VAR_8)
{
 size_t VAR_9 = 0;
 int VAR_10 = -VAR_0;
 struct sk_buff *VAR_11;

 VAR_11 = FUNC_2(VAR_3, VAR_7, VAR_6, &VAR_10);
 if (!VAR_11)
  goto out;

 VAR_9 = VAR_11->len;
 if (VAR_5 < VAR_9) {
  VAR_4->msg_flags |= VAR_1;
  VAR_9 = VAR_5;
 }

 VAR_10 = FUNC_0(VAR_11, 0, VAR_4->msg_iov, VAR_9);
 if (VAR_10)
  goto done;

 FUNC_3(VAR_4, VAR_3, VAR_11);

 if (VAR_7 & VAR_1)
  VAR_9 = VAR_11->len;
done:
 FUNC_1(VAR_3, VAR_11);
out:
 if (VAR_10)
  return VAR_10;
 return VAR_9;
}
