
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sock {int dummy; } ;
struct sk_buff {int pkt_type; int protocol; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 struct sk_buff* FUNC_1 (struct sock*,unsigned long,int,int*) ;

__attribute__((used)) static inline struct sk_buff *FUNC_2(struct sock *VAR_2,
         unsigned long VAR_3, int VAR_4,
         int *VAR_5)
{
 struct sk_buff *VAR_6 = FUNC_1(VAR_2, VAR_3,
         VAR_4, VAR_5);
 if (VAR_6) {
  VAR_6->protocol = FUNC_0(VAR_0);
  VAR_6->pkt_type = VAR_1;
 }
 return VAR_6;
}
