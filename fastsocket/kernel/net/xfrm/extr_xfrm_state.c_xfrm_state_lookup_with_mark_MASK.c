
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int xfrm_address_t ;
typedef int u8 ;
typedef int u32 ;
struct xfrm_state {int dummy; } ;
struct net {int dummy; } ;
typedef int __be32 ;


 struct xfrm_state* FUNC_0 (struct net*,int ,int *,int ,int ,unsigned short) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int VAR_0 ;

struct xfrm_state *
FUNC_3(struct net *VAR_1, u32 VAR_2, xfrm_address_t *VAR_3, __be32 VAR_4,
    u8 VAR_5, unsigned short VAR_6)
{
 struct xfrm_state *VAR_7;

 FUNC_1(&VAR_0);
 VAR_7 = FUNC_0(VAR_1, VAR_2, VAR_3, VAR_4, VAR_5, VAR_6);
 FUNC_2(&VAR_0);
 return VAR_7;
}
