
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sock {int dummy; } ;
struct sk_buff {int pkt_type; int protocol; } ;
typedef int gfp_t ;


 int VAR_0 ;
 int VAR_1 ;
 struct sk_buff* FUNC_0 (int,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct sk_buff*,int) ;
 int FUNC_3 (struct sk_buff*,struct sock*) ;

struct sk_buff *FUNC_4(struct sock *VAR_2, int VAR_3, gfp_t VAR_4)
{
 struct sk_buff *VAR_5;
 int VAR_6 = 64;

 if ((VAR_5 = FUNC_0(VAR_3 + VAR_6, VAR_4)) == ((void*)0))
  return ((void*)0);

 VAR_5->protocol = FUNC_1(VAR_0);
 VAR_5->pkt_type = VAR_1;

 if (VAR_2)
  FUNC_3(VAR_5, VAR_2);

 FUNC_2(VAR_5, VAR_6);

 return VAR_5;
}
