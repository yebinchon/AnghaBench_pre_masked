
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct sk_buff {int len; int dev; int nf_bridge; } ;
struct net_device {int dummy; } ;
struct ipv6hdr {int version; scalar_t__ nexthdr; int payload_len; } ;


 scalar_t__ VAR_0 ;
 unsigned int VAR_1 ;
 int FUNC_0 (int ,int ,struct sk_buff*,int ,int *,int ) ;
 int VAR_2 ;
 unsigned int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_1 (struct sk_buff*) ;
 struct ipv6hdr* FUNC_2 (struct sk_buff*) ;
 int FUNC_3 (struct sk_buff*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (struct sk_buff*,int) ;
 scalar_t__ FUNC_7 (struct sk_buff*,int) ;
 int FUNC_8 (struct sk_buff*) ;

__attribute__((used)) static unsigned int FUNC_9(unsigned int VAR_6,
        struct sk_buff *VAR_7,
        const struct net_device *VAR_8,
        const struct net_device *VAR_9,
        int (*VAR_10)(struct sk_buff *))
{
 struct ipv6hdr *VAR_11;
 u32 VAR_12;

 if (VAR_7->len < sizeof(struct ipv6hdr))
  goto inhdr_error;

 if (!FUNC_6(VAR_7, sizeof(struct ipv6hdr)))
  goto inhdr_error;

 VAR_11 = FUNC_2(VAR_7);

 if (VAR_11->version != 6)
  goto inhdr_error;

 VAR_12 = FUNC_5(VAR_11->payload_len);

 if (VAR_12 || VAR_11->nexthdr != VAR_0) {
  if (VAR_12 + sizeof(struct ipv6hdr) > VAR_7->len)
   goto inhdr_error;
  if (FUNC_7(VAR_7, VAR_12 + sizeof(struct ipv6hdr)))
   goto inhdr_error;
 }
 if (VAR_11->nexthdr == VAR_0 && FUNC_1(VAR_7))
  goto inhdr_error;

 FUNC_4(VAR_7->nf_bridge);
 if (!FUNC_3(VAR_7))
  return VAR_1;
 if (!FUNC_8(VAR_7))
  return VAR_1;

 FUNC_0(VAR_4, VAR_2, VAR_7, VAR_7->dev, ((void*)0),
  VAR_5);

 return VAR_3;

inhdr_error:
 return VAR_1;
}
