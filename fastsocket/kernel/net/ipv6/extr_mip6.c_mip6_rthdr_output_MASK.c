
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_3__ {int header_len; } ;
struct xfrm_state {int lock; int * coaddr; TYPE_1__ props; } ;
struct sk_buff {int dummy; } ;
struct TYPE_4__ {int hdrlen; int segments_left; int type; int nexthdr; } ;
struct rt2_hdr {int addr; TYPE_2__ rt_hdr; int reserved; } ;
struct ipv6hdr {int daddr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 struct ipv6hdr* FUNC_1 (struct sk_buff*) ;
 int FUNC_2 (int *,int *,int) ;
 int FUNC_3 (int *,int ,int) ;
 int * FUNC_4 (struct sk_buff*) ;
 int FUNC_5 (struct sk_buff*) ;
 int FUNC_6 (struct sk_buff*,int ) ;
 scalar_t__ FUNC_7 (struct sk_buff*) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;

__attribute__((used)) static int FUNC_10(struct xfrm_state *VAR_2, struct sk_buff *VAR_3)
{
 struct ipv6hdr *VAR_4;
 struct rt2_hdr *VAR_5;
 u8 VAR_6;

 FUNC_6(VAR_3, -FUNC_5(VAR_3));
 VAR_4 = FUNC_1(VAR_3);

 VAR_6 = *FUNC_4(VAR_3);
 *FUNC_4(VAR_3) = VAR_0;

 VAR_5 = (struct rt2_hdr *)FUNC_7(VAR_3);
 VAR_5->rt_hdr.nexthdr = VAR_6;
 VAR_5->rt_hdr.hdrlen = (VAR_2->props.header_len >> 3) - 1;
 VAR_5->rt_hdr.type = VAR_1;
 VAR_5->rt_hdr.segments_left = 1;
 FUNC_3(&VAR_5->reserved, 0, sizeof(VAR_5->reserved));

 FUNC_0(VAR_5->rt_hdr.hdrlen != 2);

 FUNC_2(&VAR_5->addr, &VAR_4->daddr, sizeof(VAR_5->addr));
 FUNC_8(&VAR_2->lock);
 FUNC_2(&VAR_4->daddr, VAR_2->coaddr, sizeof(VAR_4->daddr));
 FUNC_9(&VAR_2->lock);

 return 0;
}
