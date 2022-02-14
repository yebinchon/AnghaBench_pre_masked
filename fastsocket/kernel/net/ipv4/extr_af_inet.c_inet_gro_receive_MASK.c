
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
typedef unsigned int u16 ;
struct sk_buff {struct sk_buff* next; } ;
struct net_protocol {struct sk_buff** (* gro_receive ) (struct sk_buff**,struct sk_buff*) ;} ;
struct net_offload {struct sk_buff** (* gro_receive ) (struct sk_buff**,struct sk_buff*) ;} ;
struct iphdr {int protocol; int tos; int saddr; int daddr; unsigned int ttl; int id; int ihl; } ;
struct TYPE_2__ {unsigned int flush; scalar_t__ count; scalar_t__ same_flow; } ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 TYPE_1__* FUNC_0 (struct sk_buff*) ;
 int * VAR_2 ;
 int * VAR_3 ;
 int FUNC_1 (int*,int ) ;
 struct iphdr* FUNC_2 (struct sk_buff*) ;
 unsigned int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ) ;
 void* FUNC_5 (int ) ;
 int FUNC_6 () ;
 int FUNC_7 () ;
 struct iphdr* FUNC_8 (struct sk_buff*,unsigned int) ;
 scalar_t__ FUNC_9 (struct sk_buff*,unsigned int) ;
 struct iphdr* FUNC_10 (struct sk_buff*,unsigned int,unsigned int) ;
 unsigned int FUNC_11 (struct sk_buff*) ;
 unsigned int FUNC_12 (struct sk_buff*) ;
 int FUNC_13 (struct sk_buff*,int) ;
 int FUNC_14 (struct sk_buff*,unsigned int) ;
 struct sk_buff** FUNC_15 (struct sk_buff**,struct sk_buff*) ;
 struct sk_buff** FUNC_16 (struct sk_buff**,struct sk_buff*) ;
 scalar_t__ FUNC_17 (int) ;

__attribute__((used)) static struct sk_buff **FUNC_18(struct sk_buff **VAR_4,
      struct sk_buff *VAR_5)
{
 const struct net_offload *VAR_6;
 const struct net_protocol *VAR_7 = ((void*)0);
 struct sk_buff **VAR_8 = ((void*)0);
 struct sk_buff *VAR_9;
 struct iphdr *VAR_10;
 unsigned int VAR_11;
 unsigned int VAR_12;
 unsigned int VAR_13;
 int VAR_14 = 1;
 int VAR_15;

 VAR_12 = FUNC_12(VAR_5);
 VAR_11 = VAR_12 + sizeof(*VAR_10);
 VAR_10 = FUNC_8(VAR_5, VAR_12);
 if (FUNC_9(VAR_5, VAR_11)) {
  VAR_10 = FUNC_10(VAR_5, VAR_11, VAR_12);
  if (FUNC_17(!VAR_10))
   goto out;
 }

 VAR_15 = VAR_10->protocol & (VAR_1 - 1);

 FUNC_6();
 VAR_6 = FUNC_5(VAR_2[VAR_15]);
 if (!VAR_6 || !VAR_6->gro_receive) {

  VAR_7 = FUNC_5(VAR_3[VAR_15]);
  if (!VAR_7 || !VAR_7->gro_receive)
   goto out_unlock;

  VAR_6 = ((void*)0);
 }

 if (*(u8 *)VAR_10 != 0x45)
  goto out_unlock;

 if (FUNC_17(FUNC_1((u8 *)VAR_10, VAR_10->ihl)))
  goto out_unlock;

 VAR_13 = FUNC_3(*(u32 *)&VAR_10->id);
 VAR_14 = (u16)((FUNC_3(*(u32 *)VAR_10) ^ FUNC_11(VAR_5)) | (VAR_13 ^ VAR_0));
 VAR_13 >>= 16;

 for (VAR_9 = *VAR_4; VAR_9; VAR_9 = VAR_9->next) {
  struct iphdr *VAR_16;

  if (!FUNC_0(VAR_9)->same_flow)
   continue;

  VAR_16 = FUNC_2(VAR_9);

  if ((VAR_10->protocol ^ VAR_16->protocol) |
      (VAR_10->tos ^ VAR_16->tos) |
      (VAR_10->saddr ^ VAR_16->saddr) |
      (VAR_10->daddr ^ VAR_16->daddr)) {
   FUNC_0(VAR_9)->same_flow = 0;
   continue;
  }


  FUNC_0(VAR_9)->flush |=
   (VAR_10->ttl ^ VAR_16->ttl) |
   ((u16)(FUNC_4(VAR_16->id) + FUNC_0(VAR_9)->count) ^ VAR_13);

  FUNC_0(VAR_9)->flush |= VAR_14;
 }

 FUNC_0(VAR_5)->flush |= VAR_14;
 FUNC_13(VAR_5, sizeof(*VAR_10));
 FUNC_14(VAR_5, FUNC_12(VAR_5));

 if (VAR_6)
  VAR_8 = VAR_6->gro_receive(VAR_4, VAR_5);
 else
  VAR_8 = VAR_7->gro_receive(VAR_4, VAR_5);

out_unlock:
 FUNC_7();

out:
 FUNC_0(VAR_5)->flush |= VAR_14;

 return VAR_8;
}
