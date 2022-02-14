
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int a4; } ;
struct TYPE_5__ {int a4; } ;
struct TYPE_7__ {TYPE_2__ saddr; TYPE_1__ daddr; } ;
struct xfrm_state {TYPE_3__ sel; } ;
struct sk_buff {int len; int mac_len; scalar_t__ data; } ;
struct iphdr {int ihl; scalar_t__ check; int saddr; int daddr; int tot_len; } ;
struct ip_beet_phdr {int padlen; int hdrlen; scalar_t__ nexthdr; } ;
struct TYPE_8__ {scalar_t__ protocol; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 TYPE_4__* FUNC_0 (struct sk_buff*) ;
 int FUNC_1 (struct sk_buff*,int) ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ,int) ;
 struct iphdr* FUNC_4 (struct sk_buff*) ;
 int FUNC_5 (scalar_t__,int ,int ) ;
 int FUNC_6 (struct sk_buff*,int) ;
 int FUNC_7 (struct sk_buff*) ;
 int FUNC_8 (struct sk_buff*) ;
 int FUNC_9 (struct sk_buff*,int) ;
 int FUNC_10 (struct sk_buff*) ;
 int FUNC_11 (struct sk_buff*,int ) ;
 scalar_t__ FUNC_12 (int) ;
 int FUNC_13 (struct sk_buff*) ;

__attribute__((used)) static int FUNC_14(struct xfrm_state *VAR_3, struct sk_buff *VAR_4)
{
 struct iphdr *VAR_5;
 int VAR_6 = 0;
 int VAR_7 = -VAR_0;

 if (FUNC_12(FUNC_0(VAR_4)->protocol == VAR_1)) {
  struct ip_beet_phdr *VAR_8;
  int VAR_9;

  if (!FUNC_6(VAR_4, sizeof(*VAR_8)))
   goto out;

  VAR_8 = (struct ip_beet_phdr *)VAR_4->data;

  VAR_9 = sizeof(*VAR_8) + VAR_8->padlen;
  VAR_6 = VAR_8->hdrlen * 8 + (VAR_2 - VAR_9);
  if (VAR_6 < 0 || VAR_6 & 3 || VAR_6 > 250)
   goto out;

  FUNC_0(VAR_4)->protocol = VAR_8->nexthdr;

  if (!FUNC_6(VAR_4, VAR_9))
   goto out;
  FUNC_1(VAR_4, VAR_9);
 }

 FUNC_9(VAR_4, sizeof(*VAR_5));
 FUNC_10(VAR_4);

 FUNC_5(VAR_4->data - VAR_4->mac_len, FUNC_7(VAR_4),
  VAR_4->mac_len);
 FUNC_11(VAR_4, -VAR_4->mac_len);

 FUNC_13(VAR_4);

 VAR_5 = FUNC_4(VAR_4);

 VAR_5->ihl += VAR_6 / 4;
 VAR_5->tot_len = FUNC_2(VAR_4->len);
 VAR_5->daddr = VAR_3->sel.daddr.a4;
 VAR_5->saddr = VAR_3->sel.saddr.a4;
 VAR_5->check = 0;
 VAR_5->check = FUNC_3(FUNC_8(VAR_4), VAR_5->ihl);
 VAR_7 = 0;
out:
 return VAR_7;
}
