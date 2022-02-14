
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct sk_buff {scalar_t__ data; } ;
struct ipv6hdr {int nexthdr; } ;
struct inet6_protocol {int (* err_handler ) (struct sk_buff*,int *,int,int,int,int ) ;} ;
typedef int __be32 ;


 int VAR_0 ;
 int * VAR_1 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (struct sk_buff*,int,int*) ;
 int FUNC_2 (struct sk_buff*,int) ;
 int FUNC_3 (struct sk_buff*,int,int,int,int,int ) ;
 struct inet6_protocol* FUNC_4 (int ) ;
 int FUNC_5 () ;
 int FUNC_6 () ;
 int FUNC_7 (struct sk_buff*,int *,int,int,int,int ) ;

__attribute__((used)) static void FUNC_8(struct sk_buff *VAR_2, u8 VAR_3, u8 VAR_4, __be32 VAR_5)
{
 const struct inet6_protocol *VAR_6;
 int VAR_7;
 int VAR_8;
 u8 VAR_9;

 if (!FUNC_2(VAR_2, sizeof(struct ipv6hdr)))
  return;

 VAR_9 = ((struct ipv6hdr *)VAR_2->data)->nexthdr;
 if (FUNC_0(VAR_9)) {

  VAR_7 = FUNC_1(VAR_2, sizeof(struct ipv6hdr), &VAR_9);
  if (VAR_7<0)
   return;
 } else {
  VAR_7 = sizeof(struct ipv6hdr);
 }


 if (!FUNC_2(VAR_2, VAR_7+8))
  return;
 VAR_8 = VAR_9 & (VAR_0 - 1);

 FUNC_5();
 VAR_6 = FUNC_4(VAR_1[VAR_8]);
 if (VAR_6 && VAR_6->err_handler)
  VAR_6->err_handler(VAR_2, ((void*)0), VAR_3, VAR_4, VAR_7, VAR_5);
 FUNC_6();

 FUNC_3(VAR_2, VAR_9, VAR_3, VAR_4, VAR_7, VAR_5);
}
