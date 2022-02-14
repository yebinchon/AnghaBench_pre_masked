
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vlan_ethhdr {scalar_t__ h_vlan_proto; scalar_t__ h_vlan_encapsulated_proto; } ;
struct sk_buff {int mac_len; scalar_t__ protocol; int len; scalar_t__ data; struct sk_buff* next; scalar_t__ encapsulation; } ;
struct gre_base_hdr {int flags; scalar_t__ protocol; } ;
typedef int __sum16 ;
typedef scalar_t__ __be32 ;
typedef scalar_t__ __be16 ;
struct TYPE_2__ {int gso_type; } ;


 int VAR_0 ;
 struct sk_buff* FUNC_0 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_1 (struct sk_buff*) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 scalar_t__ VAR_16 ;
 int FUNC_2 (struct sk_buff*) ;
 int FUNC_3 (struct sk_buff*,int) ;
 int FUNC_4 (struct sk_buff*,int) ;
 int FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (int ) ;
 int FUNC_7 (struct sk_buff*) ;
 int FUNC_8 (struct sk_buff*) ;
 int FUNC_9 (struct sk_buff*,int) ;
 int FUNC_10 (struct sk_buff*,int ,int ,int ) ;
 scalar_t__ FUNC_11 (struct sk_buff*) ;
 struct sk_buff* FUNC_12 (struct sk_buff*,int) ;
 int FUNC_13 (struct sk_buff*) ;
 int FUNC_14 (struct sk_buff*,int) ;
 TYPE_1__* FUNC_15 (struct sk_buff*) ;
 int FUNC_16 (struct sk_buff*) ;
 scalar_t__ FUNC_17 (struct sk_buff*) ;
 scalar_t__ FUNC_18 (int) ;

__attribute__((used)) static struct sk_buff *FUNC_19(struct sk_buff *VAR_17,
           int VAR_18)
{
 struct sk_buff *VAR_19 = FUNC_0(-VAR_0);
 int VAR_20 = VAR_5;
 struct gre_base_hdr *VAR_21;
 int VAR_22 = VAR_17->mac_len;
 __be16 VAR_23 = VAR_17->protocol;
 int VAR_24 = 0;
 int VAR_25;
 bool VAR_26;

 if (FUNC_18(FUNC_15(VAR_17)->gso_type &
    ~(VAR_11 |
      VAR_12 |
      VAR_14 |
      VAR_9 |
      VAR_13 |
      VAR_10)))
  goto out;

 if (FUNC_18(!FUNC_9(VAR_17, sizeof(*VAR_21))))
  goto out;

 VAR_21 = (struct gre_base_hdr *)FUNC_17(VAR_17);

 if (VAR_21->flags & VAR_6)
  VAR_20 += VAR_5;
 if (VAR_21->flags & VAR_7)
  VAR_20 += VAR_5;
 if (VAR_21->flags & VAR_4) {
  VAR_20 += VAR_5;
  VAR_26 = 1;
 } else
  VAR_26 = 0;







 if (VAR_21->protocol == FUNC_6(VAR_3)) {
  struct vlan_ethhdr *VAR_27;

  if (FUNC_18(!FUNC_9(VAR_17, VAR_20 + VAR_1)))
   goto out;

  VAR_27 = (struct vlan_ethhdr *) (VAR_17->data + VAR_20);
  VAR_24 = VAR_1;

  if (VAR_27->h_vlan_proto == FUNC_6(VAR_2)) {
   if (FUNC_18(!FUNC_9(VAR_17, VAR_20 + VAR_15)))
    goto out;

   VAR_17->protocol = VAR_27->h_vlan_encapsulated_proto;
   VAR_24 += VAR_16;
  } else
   VAR_17->protocol = VAR_27->h_vlan_proto;
 } else {
  VAR_17->protocol = VAR_21->protocol;

  if (FUNC_18(!FUNC_9(VAR_17, VAR_20)))
   goto out;
 }

 VAR_17->encapsulation = 0;

 FUNC_3(VAR_17, VAR_20);
 FUNC_13(VAR_17);

 FUNC_14(VAR_17, VAR_24);
 VAR_17->mac_len = VAR_24;





 VAR_19 = FUNC_12(VAR_17, VAR_8 & FUNC_8(VAR_17));
 if (!VAR_19 || FUNC_1(VAR_19))
  goto out;

 VAR_17 = VAR_19;
 VAR_25 = FUNC_16(VAR_17);
 do {
  FUNC_4(VAR_17, VAR_20);
  if (VAR_26) {
   __be32 *VAR_28;

   if (FUNC_11(VAR_17)) {
    int VAR_29;

    VAR_29 = FUNC_2(VAR_17);
    if (VAR_29) {
     FUNC_7(VAR_19);
     VAR_19 = FUNC_0(VAR_29);
     goto out;
    }
   }

   VAR_21 = (struct gre_base_hdr *)(VAR_17->data);
   VAR_28 = (__be32 *)(VAR_21 + 1);
   *VAR_28 = 0;
   *(__sum16 *)VAR_28 = FUNC_5(FUNC_10(VAR_17, 0, VAR_17->len, 0));
  }
  FUNC_4(VAR_17, VAR_25 - VAR_20);

  FUNC_13(VAR_17);
  FUNC_14(VAR_17, VAR_22);
  VAR_17->mac_len = VAR_22;
  VAR_17->protocol = VAR_23;
 } while ((VAR_17 = VAR_17->next));
out:
 return VAR_19;
}
