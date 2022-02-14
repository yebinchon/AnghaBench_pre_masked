
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int xfrm_address_t ;
struct xfrm_policy_afinfo {int (* get_saddr ) (struct net*,int *,int *) ;} ;
struct net {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct net*,int *,int *) ;
 scalar_t__ FUNC_1 (int ) ;
 struct xfrm_policy_afinfo* FUNC_2 (unsigned short) ;
 int FUNC_3 (struct xfrm_policy_afinfo*) ;

__attribute__((used)) static int
FUNC_4(struct net *VAR_1, xfrm_address_t *VAR_2, xfrm_address_t *VAR_3,
        unsigned short VAR_4)
{
 int VAR_5;
 struct xfrm_policy_afinfo *VAR_6 = FUNC_2(VAR_4);

 if (FUNC_1(VAR_6 == ((void*)0)))
  return -VAR_0;
 VAR_5 = VAR_6->get_saddr(VAR_1, VAR_2, VAR_3);
 FUNC_3(VAR_6);
 return VAR_5;
}
