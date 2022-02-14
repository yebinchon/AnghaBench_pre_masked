
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct sock {int dummy; } ;
struct sk_buff {int dev; scalar_t__ data; } ;
struct net {int dummy; } ;
struct in6_addr {int dummy; } ;
struct ipv6hdr {struct in6_addr daddr; struct in6_addr saddr; } ;
typedef int __be32 ;
struct TYPE_4__ {int iif; } ;
struct TYPE_3__ {int lock; int * ht; } ;


 TYPE_2__* FUNC_0 (struct sk_buff*) ;
 int VAR_0 ;
 struct sock* FUNC_1 (struct net*,struct sock*,int,struct in6_addr*,struct in6_addr*,int ) ;
 struct net* FUNC_2 (int ) ;
 TYPE_1__ VAR_1 ;
 int FUNC_3 (struct sock*,struct sk_buff*,int *,int ,int ,int,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 struct sock* FUNC_6 (int *) ;
 struct sock* FUNC_7 (struct sock*) ;

void FUNC_8(struct sk_buff *VAR_2, int VAR_3,
  u8 VAR_4, u8 VAR_5, int VAR_6, __be32 VAR_7)
{
 struct sock *VAR_8;
 int VAR_9;
 struct in6_addr *VAR_10, *VAR_11;
 struct net *VAR_12;

 VAR_9 = VAR_3 & (VAR_0 - 1);

 FUNC_4(&VAR_1.lock);
 VAR_8 = FUNC_6(&VAR_1.ht[VAR_9]);
 if (VAR_8 != ((void*)0)) {

  struct ipv6hdr *VAR_13 = (struct ipv6hdr *)VAR_2->data;
  VAR_10 = &VAR_13->saddr;
  VAR_11 = &VAR_13->daddr;
  VAR_12 = FUNC_2(VAR_2->dev);

  while ((VAR_8 = FUNC_1(VAR_12, VAR_8, VAR_3, VAR_10, VAR_11,
      FUNC_0(VAR_2)->iif))) {
   FUNC_3(VAR_8, VAR_2, ((void*)0), VAR_4, VAR_5,
     VAR_6, VAR_7);
   VAR_8 = FUNC_7(VAR_8);
  }
 }
 FUNC_5(&VAR_1.lock);
}
