
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_2__ {int daddr; int proto; } ;
struct xfrm_tmpl {int mode; int optional; scalar_t__ reqid; int encap_family; int allalgs; TYPE_1__ id; int saddr; } ;
struct xfrm_policy {int xfrm_nr; int family; struct xfrm_tmpl* xfrm_vec; } ;
struct sockaddr {int dummy; } ;
struct sadb_x_ipsecrequest {scalar_t__ sadb_x_ipsecrequest_mode; scalar_t__ sadb_x_ipsecrequest_level; scalar_t__ sadb_x_ipsecrequest_reqid; int sadb_x_ipsecrequest_proto; } ;
struct net {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_0 (struct net*) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (struct sockaddr*,int *) ;
 int FUNC_3 (int) ;
 struct net* FUNC_4 (struct xfrm_policy*) ;

__attribute__((used)) static int
FUNC_5(struct xfrm_policy *VAR_8, struct sadb_x_ipsecrequest *VAR_9)
{
 struct net *VAR_10 = FUNC_4(VAR_8);
 struct xfrm_tmpl *VAR_11 = VAR_8->xfrm_vec + VAR_8->xfrm_nr;
 int VAR_12;

 if (VAR_8->xfrm_nr >= VAR_6)
  return -VAR_1;

 if (VAR_9->sadb_x_ipsecrequest_mode == 0)
  return -VAR_0;

 VAR_11->id.proto = VAR_9->sadb_x_ipsecrequest_proto;
 if ((VAR_12 = FUNC_1(VAR_9->sadb_x_ipsecrequest_mode)) < 0)
  return -VAR_0;
 VAR_11->mode = VAR_12;
 if (VAR_9->sadb_x_ipsecrequest_level == VAR_4)
  VAR_11->optional = 1;
 else if (VAR_9->sadb_x_ipsecrequest_level == VAR_3) {
  VAR_11->reqid = VAR_9->sadb_x_ipsecrequest_reqid;
  if (VAR_11->reqid > VAR_5)
   VAR_11->reqid = 0;
  if (!VAR_11->reqid && !(VAR_11->reqid = FUNC_0(VAR_10)))
   return -VAR_2;
 }


 if (VAR_11->mode == VAR_7) {
  u8 *VAR_13 = (u8 *) (VAR_9 + 1);
  int VAR_14, VAR_15;

  VAR_14 = FUNC_2((struct sockaddr *)VAR_13,
      &VAR_11->saddr);
  if (!VAR_14)
   return -VAR_0;

  VAR_15 = FUNC_3(VAR_14);
  if (FUNC_2((struct sockaddr *)(VAR_13 + VAR_15),
        &VAR_11->id.daddr) != VAR_14)
   return -VAR_0;
  VAR_11->encap_family = VAR_14;
 } else
  VAR_11->encap_family = VAR_8->family;


 VAR_11->allalgs = 1;
 VAR_8->xfrm_nr++;
 return 0;
}
