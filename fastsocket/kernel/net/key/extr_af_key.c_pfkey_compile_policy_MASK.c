
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct xfrm_user_sec_ctx {int dummy; } ;
struct TYPE_4__ {int dead; } ;
struct TYPE_3__ {void* hard_packet_limit; void* soft_packet_limit; void* hard_byte_limit; void* soft_byte_limit; } ;
struct xfrm_policy {int family; TYPE_2__ walk; int security; scalar_t__ xfrm_nr; TYPE_1__ lft; int action; } ;
struct sock {int sk_family; } ;
struct sadb_x_sec_ctx {int sadb_x_sec_len; } ;
struct sadb_x_policy {int sadb_x_policy_len; scalar_t__ sadb_x_policy_type; int sadb_x_policy_dir; } ;
struct net {int dummy; } ;




 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 void* VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_0 (struct xfrm_user_sec_ctx*) ;
 int FUNC_1 (struct xfrm_policy*,struct sadb_x_policy*) ;
 struct xfrm_user_sec_ctx* FUNC_2 (struct sadb_x_sec_ctx*) ;
 int FUNC_3 (int *,struct xfrm_user_sec_ctx*) ;
 struct net* FUNC_4 (struct sock*) ;
 int FUNC_5 (char*) ;
 struct xfrm_policy* FUNC_6 (struct net*,int ) ;
 int FUNC_7 (struct xfrm_policy*) ;

__attribute__((used)) static struct xfrm_policy *FUNC_8(struct sock *VAR_13, int VAR_14,
      u8 *VAR_15, int VAR_16, int *VAR_17)
{
 struct net *VAR_18 = FUNC_4(VAR_13);
 struct xfrm_policy *VAR_19;
 struct sadb_x_policy *VAR_20 = (struct sadb_x_policy*)VAR_15;
 struct sadb_x_sec_ctx *VAR_21;

 switch (VAR_13->sk_family) {
 case 129:
  if (VAR_14 != VAR_9) {
   *VAR_17 = -VAR_2;
   return ((void*)0);
  }
  break;
 default:
  *VAR_17 = -VAR_0;
  return ((void*)0);
 }

 *VAR_17 = -VAR_0;

 if (VAR_16 < sizeof(struct sadb_x_policy) ||
     VAR_20->sadb_x_policy_len*8 > VAR_16 ||
     VAR_20->sadb_x_policy_type > VAR_5 ||
     (!VAR_20->sadb_x_policy_dir || VAR_20->sadb_x_policy_dir > VAR_4))
  return ((void*)0);

 VAR_19 = FUNC_6(VAR_18, VAR_3);
 if (VAR_19 == ((void*)0)) {
  *VAR_17 = -VAR_1;
  return ((void*)0);
 }

 VAR_19->action = (VAR_20->sadb_x_policy_type == VAR_6 ?
        VAR_12 : VAR_11);

 VAR_19->lft.soft_byte_limit = VAR_10;
 VAR_19->lft.hard_byte_limit = VAR_10;
 VAR_19->lft.soft_packet_limit = VAR_10;
 VAR_19->lft.hard_packet_limit = VAR_10;
 VAR_19->family = VAR_13->sk_family;

 VAR_19->xfrm_nr = 0;
 if (VAR_20->sadb_x_policy_type == VAR_7 &&
     (*VAR_17 = FUNC_1(VAR_19, VAR_20)) < 0)
  goto out;


 if (VAR_16 >= (VAR_20->sadb_x_policy_len*8 +
     sizeof(struct sadb_x_sec_ctx))) {
  char *VAR_22 = (char *)VAR_20;
  struct xfrm_user_sec_ctx *VAR_23;

  VAR_22 += VAR_20->sadb_x_policy_len*8;
  VAR_21 = (struct sadb_x_sec_ctx *)VAR_22;
  if (VAR_16 < VAR_20->sadb_x_policy_len*8 +
      VAR_21->sadb_x_sec_len) {
   *VAR_17 = -VAR_0;
   goto out;
  }
  if ((*VAR_17 = FUNC_5(VAR_22)))
   goto out;
  VAR_23 = FUNC_2(VAR_21);
  *VAR_17 = FUNC_3(&VAR_19->security, VAR_23);
  FUNC_0(VAR_23);

  if (*VAR_17)
   goto out;
 }

 *VAR_17 = VAR_20->sadb_x_policy_dir-1;
 return VAR_19;

out:
 VAR_19->walk.dead = 1;
 FUNC_7(VAR_19);
 return ((void*)0);
}
