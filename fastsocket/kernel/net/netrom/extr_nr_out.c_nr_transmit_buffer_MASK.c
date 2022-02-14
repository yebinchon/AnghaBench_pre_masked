
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sock {int dummy; } ;
struct sk_buff {int dummy; } ;
struct nr_sock {int dest_addr; int source_addr; } ;


 int VAR_0 ;
 unsigned char VAR_1 ;
 unsigned char VAR_2 ;
 unsigned char VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct sk_buff*) ;
 int FUNC_1 (unsigned char*,int *,int ) ;
 int FUNC_2 (struct sock*,int ) ;
 int FUNC_3 (struct sk_buff*,int *) ;
 struct nr_sock* FUNC_4 (struct sock*) ;
 unsigned char* FUNC_5 (struct sk_buff*,int ) ;
 int VAR_6 ;

void FUNC_6(struct sock *VAR_7, struct sk_buff *VAR_8)
{
 struct nr_sock *VAR_9 = FUNC_4(VAR_7);
 unsigned char *VAR_10;




 VAR_10 = FUNC_5(VAR_8, VAR_5);

 FUNC_1(VAR_10, &VAR_9->source_addr, VAR_0);
 VAR_10[6] &= ~VAR_1;
 VAR_10[6] &= ~VAR_2;
 VAR_10[6] |= VAR_3;
 VAR_10 += VAR_0;

 FUNC_1(VAR_10, &VAR_9->dest_addr, VAR_0);
 VAR_10[6] &= ~VAR_1;
 VAR_10[6] |= VAR_2;
 VAR_10[6] |= VAR_3;
 VAR_10 += VAR_0;

 *VAR_10++ = VAR_6;

 if (!FUNC_3(VAR_8, ((void*)0))) {
  FUNC_0(VAR_8);
  FUNC_2(VAR_7, VAR_4);
 }
}
