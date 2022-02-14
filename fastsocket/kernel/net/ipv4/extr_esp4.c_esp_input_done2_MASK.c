
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_5__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {scalar_t__ a4; } ;
typedef TYPE_3__ xfrm_address_t ;
typedef int u8 ;
struct TYPE_6__ {scalar_t__ a4; } ;
struct TYPE_7__ {scalar_t__ mode; TYPE_1__ saddr; } ;
struct xfrm_state {TYPE_2__ props; struct xfrm_encap_tmpl* encap; struct esp_data* data; } ;
struct xfrm_encap_tmpl {scalar_t__ encap_sport; } ;
struct udphdr {scalar_t__ source; } ;
struct sk_buff {int len; int ip_summed; } ;
struct iphdr {int ihl; scalar_t__ saddr; } ;
struct ip_esp_hdr {int dummy; } ;
struct esp_data {struct crypto_aead* aead; } ;
struct crypto_aead {int dummy; } ;
struct TYPE_9__ {int tmp; } ;


 int FUNC_0 () ;
 int VAR_0 ;
 int VAR_1 ;
 TYPE_5__* FUNC_1 (struct sk_buff*) ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_2 (struct sk_buff*,int) ;
 int FUNC_3 (struct crypto_aead*) ;
 int FUNC_4 (struct crypto_aead*) ;
 struct iphdr* FUNC_5 (struct sk_buff*) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (struct xfrm_state*,TYPE_3__*,scalar_t__) ;
 int FUNC_8 (struct sk_buff*,int) ;
 scalar_t__ FUNC_9 (struct sk_buff*,int,int*,int) ;
 scalar_t__ FUNC_10 (struct sk_buff*) ;
 int FUNC_11 (struct sk_buff*,int) ;
 scalar_t__ FUNC_12 (int) ;
 struct xfrm_state* FUNC_13 (struct sk_buff*) ;

__attribute__((used)) static int FUNC_14(struct sk_buff *VAR_4, int VAR_5)
{
 struct iphdr *VAR_6;
 struct xfrm_state *VAR_7 = FUNC_13(VAR_4);
 struct esp_data *VAR_8 = VAR_7->data;
 struct crypto_aead *VAR_9 = VAR_8->aead;
 int VAR_10 = FUNC_3(VAR_9);
 int VAR_11 = sizeof(struct ip_esp_hdr) + FUNC_4(VAR_9);
 int VAR_12 = VAR_4->len - VAR_11;
 int VAR_13;
 u8 VAR_14[2];
 int VAR_15;

 FUNC_6(FUNC_1(VAR_4)->tmp);

 if (FUNC_12(VAR_5))
  goto out;

 if (FUNC_9(VAR_4, VAR_4->len-VAR_10-2, VAR_14, 2))
  FUNC_0();

 VAR_5 = -VAR_1;
 VAR_15 = VAR_14[0];
 if (VAR_15 + 2 + VAR_10 >= VAR_12)
  goto out;



 VAR_6 = FUNC_5(VAR_4);
 VAR_13 = VAR_6->ihl * 4;

 if (VAR_7->encap) {
  struct xfrm_encap_tmpl *VAR_16 = VAR_7->encap;
  struct udphdr *VAR_17 = (void *)(FUNC_10(VAR_4) + VAR_13);







  if (VAR_6->saddr != VAR_7->props.saddr.a4 ||
      VAR_17->source != VAR_16->encap_sport) {
   xfrm_address_t VAR_18;

   VAR_18.a4 = VAR_6->saddr;
   FUNC_7(VAR_7, &VAR_18, VAR_17->source);
  }
  if (VAR_7->props.mode == VAR_3)
   VAR_4->ip_summed = VAR_0;
 }

 FUNC_8(VAR_4, VAR_4->len - VAR_10 - VAR_15 - 2);
 FUNC_2(VAR_4, VAR_11);
 FUNC_11(VAR_4, -VAR_13);

 VAR_5 = VAR_14[1];


 if (VAR_5 == VAR_2)
  VAR_5 = -VAR_1;

out:
 return VAR_5;
}
