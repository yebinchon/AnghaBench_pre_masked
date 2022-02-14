
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tcphdr {scalar_t__ dest; int source; int fin; int ack; int rst; scalar_t__ syn; } ;
struct sock {int dummy; } ;
struct sk_buff {int dev; } ;
struct iphdr {scalar_t__ daddr; int saddr; int protocol; } ;
typedef int _hdr ;
typedef scalar_t__ __be32 ;
typedef scalar_t__ __be16 ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct sock*) ;
 int FUNC_2 (int ,int *) ;
 int FUNC_3 (int ) ;
 struct iphdr* FUNC_4 (struct sk_buff*) ;
 int FUNC_5 (struct sk_buff*) ;
 struct sock* FUNC_6 (int ,int ,int ,scalar_t__,int ,scalar_t__,int ,int ) ;
 struct tcphdr* FUNC_7 (struct sk_buff*,int ,int,struct tcphdr*) ;
 int VAR_1 ;

__attribute__((used)) static struct sock *
FUNC_8(struct sk_buff *VAR_2, __be32 VAR_3, __be16 VAR_4,
   struct sock *VAR_5)
{
 const struct iphdr *VAR_6 = FUNC_4(VAR_2);
 struct tcphdr VAR_7, *VAR_8;

 VAR_8 = FUNC_7(VAR_2, FUNC_5(VAR_2), sizeof(VAR_7), &VAR_7);
 if (VAR_8 == ((void*)0)) {
  FUNC_3(FUNC_1(VAR_5));
  return ((void*)0);
 }

 if (VAR_8->syn && !VAR_8->rst && !VAR_8->ack && !VAR_8->fin) {


  struct sock *VAR_9;

  VAR_9 = FUNC_6(FUNC_0(VAR_2->dev), VAR_6->protocol,
         VAR_6->saddr, VAR_3 ? VAR_3 : VAR_6->daddr,
         VAR_8->source, VAR_4 ? VAR_4 : VAR_8->dest,
         VAR_2->dev, VAR_0);
  if (VAR_9) {
   FUNC_2(FUNC_1(VAR_5), &VAR_1);
   FUNC_3(FUNC_1(VAR_5));
   VAR_5 = VAR_9;
  }
 }

 return VAR_5;
}
