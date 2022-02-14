
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int xfrm_address_t ;
struct TYPE_5__ {int proto; int family; int spi; int daddr; } ;
struct xfrm_user_mapping {int reqid; int old_sport; int new_sport; int old_saddr; int new_saddr; TYPE_1__ id; } ;
struct TYPE_8__ {int reqid; int saddr; int family; } ;
struct TYPE_6__ {int proto; int spi; int daddr; } ;
struct xfrm_state {TYPE_4__ props; TYPE_3__* encap; TYPE_2__ id; } ;
struct sk_buff {int dummy; } ;
struct nlmsghdr {int dummy; } ;
typedef int __be16 ;
struct TYPE_7__ {int encap_sport; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int *,int) ;
 struct xfrm_user_mapping* FUNC_1 (struct nlmsghdr*) ;
 int FUNC_2 (struct sk_buff*,struct nlmsghdr*) ;
 struct nlmsghdr* FUNC_3 (struct sk_buff*,int ,int ,int ,int,int ) ;

__attribute__((used)) static int FUNC_4(struct sk_buff *VAR_2, struct xfrm_state *VAR_3,
    xfrm_address_t *VAR_4, __be16 VAR_5)
{
 struct xfrm_user_mapping *VAR_6;
 struct nlmsghdr *VAR_7;

 VAR_7 = FUNC_3(VAR_2, 0, 0, VAR_1, sizeof(*VAR_6), 0);
 if (VAR_7 == ((void*)0))
  return -VAR_0;

 VAR_6 = FUNC_1(VAR_7);

 FUNC_0(&VAR_6->id.daddr, &VAR_3->id.daddr, sizeof(VAR_6->id.daddr));
 VAR_6->id.spi = VAR_3->id.spi;
 VAR_6->id.family = VAR_3->props.family;
 VAR_6->id.proto = VAR_3->id.proto;
 FUNC_0(&VAR_6->new_saddr, VAR_4, sizeof(VAR_6->new_saddr));
 FUNC_0(&VAR_6->old_saddr, &VAR_3->props.saddr, sizeof(VAR_6->old_saddr));
 VAR_6->new_sport = VAR_5;
 VAR_6->old_sport = VAR_3->encap->encap_sport;
 VAR_6->reqid = VAR_3->props.reqid;

 return FUNC_2(VAR_2, VAR_7);
}
