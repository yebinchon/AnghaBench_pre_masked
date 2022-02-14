
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sock {int (* sk_data_ready ) (struct sock*,int) ;scalar_t__ sk_rcvbuf; int sk_rmem_alloc; } ;
struct sk_buff_head {int dummy; } ;
struct sk_buff {unsigned int truesize; int len; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int FUNC_0 (int *) ;
 int FUNC_1 (struct sock*,struct sk_buff*) ;
 int FUNC_2 (struct sk_buff_head*,struct sk_buff*) ;
 int FUNC_3 (struct sk_buff*,struct sock*) ;
 int FUNC_4 (struct sock*,int ) ;
 int FUNC_5 (struct sock*,int) ;

__attribute__((used)) static __inline__ int FUNC_6(struct sock *VAR_2, struct sk_buff *VAR_3, int VAR_4, struct sk_buff_head *VAR_5)
{
 int VAR_6;
 int VAR_7;




 if (FUNC_0(&VAR_2->sk_rmem_alloc) + VAR_3->truesize >=
     (unsigned)VAR_2->sk_rcvbuf) {
  VAR_6 = -VAR_0;
  goto out;
 }

 VAR_6 = FUNC_1(VAR_2, VAR_3);
 if (VAR_6)
  goto out;

 VAR_7 = VAR_3->len;
 FUNC_3(VAR_3, VAR_2);
 FUNC_2(VAR_5, VAR_3);

 if (!FUNC_4(VAR_2, VAR_1))
  VAR_2->sk_data_ready(VAR_2, VAR_7);
out:
 return VAR_6;
}
