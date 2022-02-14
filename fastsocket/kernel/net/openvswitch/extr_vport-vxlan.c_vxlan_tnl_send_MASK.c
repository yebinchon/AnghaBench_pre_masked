
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct vxlan_port {TYPE_3__* vs; } ;
struct vport {int dp; } ;
struct sk_buff {int local_df; int mark; } ;
struct rtable {int dummy; } ;
struct net {int dummy; } ;
struct flowi {int fl4_src; int proto; int mark; int fl4_tos; int fl4_dst; } ;
typedef int fl ;
typedef int __be16 ;
struct TYPE_10__ {TYPE_2__* tun_key; } ;
struct TYPE_9__ {int sport; } ;
struct TYPE_8__ {TYPE_1__* sock; } ;
struct TYPE_7__ {int tun_flags; int tun_id; int ipv4_ttl; int ipv4_tos; int ipv4_dst; int ipv4_src; } ;
struct TYPE_6__ {int sk; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_5__* FUNC_0 (struct sk_buff*) ;
 int FUNC_1 (int ) ;
 int VAR_3 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int*,int*) ;
 TYPE_4__* FUNC_6 (int ) ;
 int FUNC_7 (struct net*,struct rtable**,struct flowi*) ;
 int FUNC_8 (struct rtable*) ;
 int FUNC_9 (struct flowi*,int ,int) ;
 struct net* FUNC_10 (int ) ;
 scalar_t__ FUNC_11 (int) ;
 int FUNC_12 (int,int,struct sk_buff*) ;
 struct vxlan_port* FUNC_13 (struct vport*) ;
 int FUNC_14 (struct net*,TYPE_3__*,struct rtable*,struct sk_buff*,int ,int ,int ,int ,int ,int ,int ,int ) ;

__attribute__((used)) static int FUNC_15(struct vport *VAR_4, struct sk_buff *VAR_5)
{
 struct net *VAR_6 = FUNC_10(VAR_4->dp);
 struct vxlan_port *VAR_7 = FUNC_13(VAR_4);
 __be16 VAR_8 = FUNC_6(VAR_7->vs->sock->sk)->sport;
 struct rtable *VAR_9;
 struct flowi VAR_10;
 __be16 VAR_11;
 int VAR_12;
 int VAR_13;
 __be16 VAR_14;
 int VAR_15;

 if (FUNC_11(!FUNC_0(VAR_5)->tun_key)) {
  VAR_15 = -VAR_0;
  goto error;
 }


 FUNC_9(&VAR_10, 0, sizeof(VAR_10));
 VAR_10.fl4_dst = FUNC_0(VAR_5)->tun_key->ipv4_dst;
 VAR_10.fl4_src = FUNC_0(VAR_5)->tun_key->ipv4_src;
 VAR_10.fl4_tos = FUNC_1(FUNC_0(VAR_5)->tun_key->ipv4_tos);
 VAR_10.mark = VAR_5->mark;
 VAR_10.proto = VAR_1;

 VAR_15 = FUNC_7(VAR_6, &VAR_9, &VAR_10);
 if (VAR_15)
  goto error;

 VAR_14 = FUNC_0(VAR_5)->tun_key->tun_flags & VAR_3 ?
  FUNC_4(VAR_2) : 0;

 VAR_5->local_df = 1;

 FUNC_5(&VAR_12, &VAR_13);
 VAR_11 = FUNC_12(VAR_12, VAR_13, VAR_5);

 VAR_15 = FUNC_14(VAR_6, VAR_7->vs, VAR_9, VAR_5,
        VAR_10.fl4_src, FUNC_0(VAR_5)->tun_key->ipv4_dst,
        FUNC_0(VAR_5)->tun_key->ipv4_tos,
        FUNC_0(VAR_5)->tun_key->ipv4_ttl, VAR_14,
        VAR_11, VAR_8,
        FUNC_3(FUNC_2(FUNC_0(VAR_5)->tun_key->tun_id) << 8));
 if (VAR_15 < 0)
  FUNC_8(VAR_9);
error:
 return VAR_15;
}
