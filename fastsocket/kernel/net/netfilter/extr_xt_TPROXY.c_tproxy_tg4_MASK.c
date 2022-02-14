
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int32_t ;
struct udphdr {int dest; int source; } ;
struct sock {scalar_t__ sk_state; } ;
struct sk_buff {int mark; int dev; } ;
struct iphdr {int daddr; int saddr; int protocol; } ;
typedef int _hdr ;
typedef int __be32 ;
typedef int __be16 ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (int ) ;
 struct iphdr* FUNC_1 (struct sk_buff*) ;
 int FUNC_2 (struct sk_buff*) ;
 int FUNC_3 (struct sk_buff*,struct sock*) ;
 struct sock* FUNC_4 (int ,int ,int ,int ,int ,int ,int ,int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (char*,int ,int *,int ,int *,int ,int) ;
 struct udphdr* FUNC_7 (struct sk_buff*,int ,int,struct udphdr*) ;
 struct sock* FUNC_8 (struct sk_buff*,int ,int ,struct sock*) ;
 int FUNC_9 (struct sk_buff*,int ,int ) ;
 scalar_t__ FUNC_10 (struct sock*) ;

__attribute__((used)) static unsigned int
FUNC_11(struct sk_buff *VAR_5, __be32 VAR_6, __be16 VAR_7,
    u_int32_t VAR_8, u_int32_t VAR_9)
{
 const struct iphdr *VAR_10 = FUNC_1(VAR_5);
 struct udphdr VAR_11, *VAR_12;
 struct sock *VAR_13;

 VAR_12 = FUNC_7(VAR_5, FUNC_2(VAR_5), sizeof(VAR_11), &VAR_11);
 if (VAR_12 == ((void*)0))
  return VAR_3;





 VAR_13 = FUNC_4(FUNC_0(VAR_5->dev), VAR_10->protocol,
       VAR_10->saddr, VAR_10->daddr,
       VAR_12->source, VAR_12->dest,
       VAR_5->dev, VAR_0);

 VAR_6 = FUNC_9(VAR_5, VAR_6, VAR_10->daddr);
 if (!VAR_7)
  VAR_7 = VAR_12->dest;


 if (VAR_13 && VAR_13->sk_state == VAR_4)

  VAR_13 = FUNC_8(VAR_5, VAR_6, VAR_7, VAR_13);
 else if (!VAR_13)


  VAR_13 = FUNC_4(FUNC_0(VAR_5->dev), VAR_10->protocol,
        VAR_10->saddr, VAR_6,
        VAR_12->source, VAR_7,
        VAR_5->dev, VAR_1);


 if (VAR_13 && FUNC_10(VAR_13)) {


  VAR_5->mark = (VAR_5->mark & ~VAR_8) ^ VAR_9;

  FUNC_6("redirecting: proto %hhu %pI4:%hu -> %pI4:%hu, mark: %x\n",
    VAR_10->protocol, &VAR_10->daddr, FUNC_5(VAR_12->dest),
    &VAR_6, FUNC_5(VAR_7), VAR_5->mark);

  FUNC_3(VAR_5, VAR_13);
  return VAR_2;
 }

 FUNC_6("no socket, dropping: proto %hhu %pI4:%hu -> %pI4:%hu, mark: %x\n",
   VAR_10->protocol, &VAR_10->saddr, FUNC_5(VAR_12->source),
   &VAR_10->daddr, FUNC_5(VAR_12->dest), VAR_5->mark);
 return VAR_3;
}
