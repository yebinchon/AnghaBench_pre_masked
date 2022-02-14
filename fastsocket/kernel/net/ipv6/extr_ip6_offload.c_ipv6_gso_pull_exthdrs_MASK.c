
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {scalar_t__ data; } ;
struct net_offload {int flags; } ;
struct ipv6_opt_hdr {int nexthdr; } ;
struct inet6_protocol {int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct sk_buff*,int) ;
 int * VAR_2 ;
 int * VAR_3 ;
 int FUNC_1 (struct ipv6_opt_hdr*) ;
 scalar_t__ FUNC_2 (struct net_offload const*) ;
 int FUNC_3 (struct sk_buff*,int) ;
 void* FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int) ;

__attribute__((used)) static int FUNC_6(struct sk_buff *VAR_4, int VAR_5)
{
 const struct net_offload *VAR_6 = ((void*)0);
 const struct inet6_protocol *VAR_7 = ((void*)0);

 for (;;) {
  struct ipv6_opt_hdr *VAR_8;
  int VAR_9;

  if (VAR_5 != VAR_1) {
   VAR_6 = FUNC_4(VAR_2[VAR_5]);

   if (FUNC_2(VAR_6)) {
    if (!(VAR_6->flags & VAR_0))
     break;
   } else {
    VAR_7 = FUNC_4(VAR_3[VAR_5]);
    if (!VAR_7)
     break;

    if (!(VAR_7->flags & VAR_0))
     break;
   }
  }

  if (FUNC_5(!FUNC_3(VAR_4, 8)))
   break;

  VAR_8 = (void *)VAR_4->data;
  VAR_9 = FUNC_1(VAR_8);

  if (FUNC_5(!FUNC_3(VAR_4, VAR_9)))
   break;

  VAR_5 = VAR_8->nexthdr;
  FUNC_0(VAR_4, VAR_9);
 }

 return VAR_5;
}
