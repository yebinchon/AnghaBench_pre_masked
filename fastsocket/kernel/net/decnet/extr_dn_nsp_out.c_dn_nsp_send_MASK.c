
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sock {int (* sk_state_change ) (struct sock*) ;int sk_err; int sk_route_caps; int sk_dst_cache; int sk_bound_dev_if; } ;
struct sk_buff {struct sock* sk; } ;
struct flowi {int proto; void* fld_dst; void* fld_src; int oif; } ;
struct dst_entry {TYPE_1__* dev; } ;
struct dn_scp {int peer; int addr; int stamp; } ;
typedef int fl ;
struct TYPE_2__ {int features; } ;


 int VAR_0 ;
 struct dn_scp* FUNC_0 (struct sock*) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (int *,struct flowi*,struct sock*,int ) ;
 void* FUNC_2 (int *) ;
 int FUNC_3 (struct flowi*,struct dn_scp*) ;
 int FUNC_4 (struct sk_buff*) ;
 int VAR_3 ;
 int FUNC_5 (struct flowi*,int ,int) ;
 struct dst_entry* FUNC_6 (struct sock*,int ) ;
 struct dst_entry* FUNC_7 (struct sock*) ;
 int FUNC_8 (struct sk_buff*,struct dst_entry*) ;
 int FUNC_9 (struct sk_buff*) ;
 int FUNC_10 (struct sock*,int ) ;
 int FUNC_11 (struct sock*) ;

__attribute__((used)) static void FUNC_12(struct sk_buff *VAR_4)
{
 struct sock *VAR_5 = VAR_4->sk;
 struct dn_scp *VAR_6 = FUNC_0(VAR_5);
 struct dst_entry *VAR_7;
 struct flowi VAR_8;

 FUNC_9(VAR_4);
 VAR_6->stamp = VAR_3;

 VAR_7 = FUNC_6(VAR_5, 0);
 if (VAR_7) {
try_again:
  FUNC_8(VAR_4, VAR_7);
  FUNC_4(VAR_4);
  return;
 }

 FUNC_5(&VAR_8, 0, sizeof(VAR_8));
 VAR_8.oif = VAR_5->sk_bound_dev_if;
 VAR_8.fld_src = FUNC_2(&VAR_6->addr);
 VAR_8.fld_dst = FUNC_2(&VAR_6->peer);
 FUNC_3(&VAR_8, VAR_6);
 VAR_8.proto = VAR_0;
 if (FUNC_1(&VAR_5->sk_dst_cache, &VAR_8, VAR_5, 0) == 0) {
  VAR_7 = FUNC_7(VAR_5);
  VAR_5->sk_route_caps = VAR_7->dev->features;
  goto try_again;
 }

 VAR_5->sk_err = VAR_1;
 if (!FUNC_10(VAR_5, VAR_2))
  VAR_5->sk_state_change(VAR_5);
}
