
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {scalar_t__* data; } ;
struct ipv6hdr {scalar_t__ nexthdr; } ;
struct ipv6_tlv_tnl_enc_lim {scalar_t__ type; int length; } ;
struct ipv6_opt_hdr {int hdrlen; scalar_t__ nexthdr; } ;
struct frag_hdr {scalar_t__ frag_off; } ;
typedef scalar_t__ __u8 ;
typedef int __u16 ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 int FUNC_1 (struct ipv6_opt_hdr*) ;
 int FUNC_2 (struct sk_buff*,int) ;

__attribute__((used)) static __u16
FUNC_3(struct sk_buff *VAR_5, __u8 * VAR_6)
{
 struct ipv6hdr *VAR_7 = (struct ipv6hdr *) VAR_6;
 __u8 VAR_8 = VAR_7->nexthdr;
 __u16 VAR_9 = sizeof (*VAR_7);

 while (FUNC_0(VAR_8) && VAR_8 != VAR_4) {
  __u16 VAR_10 = 0;
  struct ipv6_opt_hdr *VAR_11;
  if (VAR_6 + VAR_9 + sizeof (*VAR_11) > VAR_5->data &&
      !FUNC_2(VAR_5, VAR_6 - VAR_5->data + VAR_9 + sizeof (*VAR_11)))
   break;

  VAR_11 = (struct ipv6_opt_hdr *) (VAR_6 + VAR_9);
  if (VAR_8 == VAR_3) {
   struct frag_hdr *VAR_12 = (struct frag_hdr *) VAR_11;
   if (VAR_12->frag_off)
    break;
   VAR_10 = 8;
  } else if (VAR_8 == VAR_1) {
   VAR_10 = (VAR_11->hdrlen + 2) << 2;
  } else {
   VAR_10 = FUNC_1(VAR_11);
  }
  if (VAR_8 == VAR_2) {
   __u16 VAR_13 = VAR_9 + 2;
   while (1) {
    struct ipv6_tlv_tnl_enc_lim *VAR_14;


    if (VAR_13 + sizeof (*VAR_14) > VAR_9 + VAR_10)
     break;

    VAR_14 = (struct ipv6_tlv_tnl_enc_lim *) &VAR_6[VAR_13];

    if (VAR_14->type == VAR_0 &&
        VAR_14->length == 1)
     return VAR_13;

    if (VAR_14->type)
     VAR_13 += VAR_14->length + 2;
    else
     VAR_13++;
   }
  }
  VAR_8 = VAR_11->nexthdr;
  VAR_9 += VAR_10;
 }
 return 0;
}
