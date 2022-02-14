
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct socket {scalar_t__ state; } ;
struct sockaddr_dn {scalar_t__ sdn_family; int sdn_flags; } ;
struct sock {TYPE_2__* sk_dst_cache; int sk_route_caps; int sk_bound_dev_if; struct socket* sk_socket; } ;
struct flowi {int proto; void* fld_src; void* fld_dst; int oif; } ;
struct dn_scp {scalar_t__ state; int segsize_loc; int addr; int peer; } ;
typedef int fl ;
struct TYPE_5__ {TYPE_1__* dev; } ;
struct TYPE_4__ {int features; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 struct dn_scp* FUNC_0 (struct sock*) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 scalar_t__ VAR_15 ;
 scalar_t__ VAR_16 ;
 scalar_t__ VAR_17 ;
 int FUNC_1 (struct socket*) ;
 int FUNC_2 (struct sock*,int ) ;
 scalar_t__ FUNC_3 (TYPE_2__**,struct flowi*,struct sock*,int) ;
 void* FUNC_4 (int *) ;
 int FUNC_5 (struct flowi*,struct dn_scp*) ;
 int FUNC_6 (struct sock*,long*) ;
 int FUNC_7 (TYPE_2__*,int ) ;
 int FUNC_8 (int *,struct sockaddr_dn*,int) ;
 int FUNC_9 (struct flowi*,int ,int) ;
 scalar_t__ FUNC_10 (struct sock*,int ) ;

__attribute__((used)) static int FUNC_11(struct sock *VAR_18, struct sockaddr_dn *VAR_19, int VAR_20, long *VAR_21, int VAR_22)
{
 struct socket *VAR_23 = VAR_18->sk_socket;
 struct dn_scp *VAR_24 = FUNC_0(VAR_18);
 int VAR_25 = -VAR_10;
 struct flowi VAR_26;

 if (VAR_23->state == VAR_15)
  goto out;

 if (VAR_23->state == VAR_16) {
  VAR_25 = 0;
  if (VAR_24->state == VAR_5) {
   VAR_23->state = VAR_15;
   goto out;
  }
  VAR_25 = -VAR_6;
  if (VAR_24->state != VAR_3 && VAR_24->state != VAR_2) {
   VAR_23->state = VAR_17;
   goto out;
  }
  return FUNC_6(VAR_18, VAR_21);
 }

 VAR_25 = -VAR_9;
 if (VAR_24->state != VAR_4)
  goto out;

 if (VAR_19 == ((void*)0) || VAR_20 != sizeof(struct sockaddr_dn))
  goto out;
 if (VAR_19->sdn_family != VAR_0)
  goto out;
 if (VAR_19->sdn_flags & VAR_13)
  goto out;

 if (FUNC_10(VAR_18, VAR_14)) {
  VAR_25 = FUNC_1(VAR_18->sk_socket);
  if (VAR_25)
   goto out;
 }

 FUNC_8(&VAR_24->peer, VAR_19, sizeof(struct sockaddr_dn));

 VAR_25 = -VAR_7;
 FUNC_9(&VAR_26, 0, sizeof(VAR_26));
 VAR_26.oif = VAR_18->sk_bound_dev_if;
 VAR_26.fld_dst = FUNC_4(&VAR_24->peer);
 VAR_26.fld_src = FUNC_4(&VAR_24->addr);
 FUNC_5(&VAR_26, VAR_24);
 VAR_26.proto = VAR_1;
 if (FUNC_3(&VAR_18->sk_dst_cache, &VAR_26, VAR_18, VAR_22) < 0)
  goto out;
 VAR_18->sk_route_caps = VAR_18->sk_dst_cache->dev->features;
 VAR_23->state = VAR_16;
 VAR_24->state = VAR_3;
 VAR_24->segsize_loc = FUNC_7(VAR_18->sk_dst_cache, VAR_12);

 FUNC_2(VAR_18, VAR_11);
 VAR_25 = -VAR_8;
 if (*VAR_21) {
  VAR_25 = FUNC_6(VAR_18, VAR_21);
 }
out:
 return VAR_25;
}
