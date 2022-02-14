
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int xfrm_address_t ;
struct xfrm_policy_afinfo {struct dst_entry* (* dst_lookup ) (struct net*,int,int *,int *) ;} ;
struct net {int dummy; } ;
struct dst_entry {int dummy; } ;


 int VAR_0 ;
 struct dst_entry* FUNC_0 (int ) ;
 struct dst_entry* FUNC_1 (struct net*,int,int *,int *) ;
 scalar_t__ FUNC_2 (int ) ;
 struct xfrm_policy_afinfo* FUNC_3 (int) ;
 int FUNC_4 (struct xfrm_policy_afinfo*) ;

__attribute__((used)) static inline struct dst_entry *FUNC_5(struct net *VAR_1, int VAR_2,
        xfrm_address_t *VAR_3,
        xfrm_address_t *VAR_4,
        int VAR_5)
{
 struct xfrm_policy_afinfo *VAR_6;
 struct dst_entry *VAR_7;

 VAR_6 = FUNC_3(VAR_5);
 if (FUNC_2(VAR_6 == ((void*)0)))
  return FUNC_0(-VAR_0);

 VAR_7 = VAR_6->dst_lookup(VAR_1, VAR_2, VAR_3, VAR_4);

 FUNC_4(VAR_6);

 return VAR_7;
}
