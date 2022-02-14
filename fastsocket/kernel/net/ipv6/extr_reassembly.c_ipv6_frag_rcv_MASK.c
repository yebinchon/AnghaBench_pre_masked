
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_6__ ;
typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int u8 ;
struct sk_buff {int transport_header; } ;
struct TYPE_7__ {scalar_t__ high_thresh; int mem; } ;
struct TYPE_8__ {TYPE_1__ frags; } ;
struct net {TYPE_2__ ipv6; } ;
struct ipv6hdr {scalar_t__ payload_len; int daddr; int saddr; } ;
struct TYPE_10__ {int lock; } ;
struct frag_queue {TYPE_5__ q; } ;
struct frag_hdr {int frag_off; int identification; } ;
struct TYPE_11__ {int * nhoff; } ;
struct TYPE_9__ {int dev; } ;


 int VAR_0 ;
 TYPE_6__* FUNC_0 (struct sk_buff*) ;
 int FUNC_1 (struct net*,int ,int ) ;
 int FUNC_2 (struct net*,int ,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_3 (int *) ;
 struct net* FUNC_4 (int ) ;
 struct frag_queue* FUNC_5 (struct net*,int ,int *,int *,int ) ;
 int FUNC_6 (int) ;
 int FUNC_7 (struct sk_buff*,int ,int ) ;
 int FUNC_8 (TYPE_5__*,int *) ;
 int FUNC_9 (TYPE_3__*) ;
 int FUNC_10 (struct net*,int ) ;
 int FUNC_11 (struct frag_queue*,struct sk_buff*,struct frag_hdr*,int *) ;
 int VAR_5 ;
 struct ipv6hdr* FUNC_12 (struct sk_buff*) ;
 int FUNC_13 (struct sk_buff*) ;
 int FUNC_14 (struct sk_buff*,scalar_t__) ;
 TYPE_3__* FUNC_15 (struct sk_buff*) ;
 int FUNC_16 (struct sk_buff*) ;
 int FUNC_17 (struct sk_buff*) ;
 scalar_t__ FUNC_18 (struct sk_buff*) ;
 scalar_t__ FUNC_19 (struct sk_buff*) ;
 int FUNC_20 (int *) ;
 int FUNC_21 (int *) ;

__attribute__((used)) static int FUNC_22(struct sk_buff *VAR_6)
{
 struct frag_hdr *VAR_7;
 struct frag_queue *VAR_8;
 struct ipv6hdr *VAR_9 = FUNC_12(VAR_6);
 struct net *VAR_10 = FUNC_4(FUNC_15(VAR_6)->dev);

 FUNC_2(VAR_10, FUNC_9(FUNC_15(VAR_6)), VAR_4);


 if (VAR_9->payload_len==0)
  goto fail_hdr;

 if (!FUNC_14(VAR_6, (FUNC_19(VAR_6) +
     sizeof(struct frag_hdr))))
  goto fail_hdr;

 VAR_9 = FUNC_12(VAR_6);
 VAR_7 = (struct frag_hdr *)FUNC_18(VAR_6);

 if (!(VAR_7->frag_off & FUNC_6(0xFFF9))) {

  VAR_6->transport_header += sizeof(struct frag_hdr);
  FUNC_2(VAR_10,
     FUNC_9(FUNC_15(VAR_6)), VAR_3);

  FUNC_0(VAR_6)->nhoff = (u8 *)VAR_7 - FUNC_16(VAR_6);
  return 1;
 }

 if (FUNC_3(&VAR_10->ipv6.frags.mem) > VAR_10->ipv6.frags.high_thresh)
  FUNC_10(VAR_10, FUNC_9(FUNC_15(VAR_6)));

 if ((VAR_8 = FUNC_5(VAR_10, VAR_7->identification, &VAR_9->saddr, &VAR_9->daddr,
     FUNC_9(FUNC_15(VAR_6)))) != ((void*)0)) {
  int VAR_11;

  FUNC_20(&VAR_8->q.lock);

  VAR_11 = FUNC_11(VAR_8, VAR_6, VAR_7, FUNC_0(VAR_6)->nhoff);

  FUNC_21(&VAR_8->q.lock);
  FUNC_8(&VAR_8->q, &VAR_5);
  return VAR_11;
 }

 FUNC_2(VAR_10, FUNC_9(FUNC_15(VAR_6)), VAR_2);
 FUNC_13(VAR_6);
 return -1;

fail_hdr:
 FUNC_1(VAR_10, FUNC_9(FUNC_15(VAR_6)), VAR_1);
 FUNC_7(VAR_6, VAR_0, FUNC_17(VAR_6));
 return -1;
}
