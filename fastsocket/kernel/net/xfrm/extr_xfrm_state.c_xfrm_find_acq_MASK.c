
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int xfrm_address_t ;
typedef int u8 ;
typedef int u32 ;
struct xfrm_state {int dummy; } ;
struct xfrm_mark {int dummy; } ;
struct net {int dummy; } ;


 struct xfrm_state* FUNC_0 (struct net*,struct xfrm_mark*,unsigned short,int ,int ,int ,int *,int *,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int VAR_0 ;

struct xfrm_state *
FUNC_3(struct net *VAR_1, struct xfrm_mark *VAR_2, u8 VAR_3, u32 VAR_4, u8 VAR_5,
       xfrm_address_t *VAR_6, xfrm_address_t *VAR_7,
       int VAR_8, unsigned short VAR_9)
{
 struct xfrm_state *VAR_10;

 FUNC_1(&VAR_0);
 VAR_10 = FUNC_0(VAR_1, VAR_2, VAR_9, VAR_3, VAR_4, VAR_5, VAR_6, VAR_7, VAR_8);
 FUNC_2(&VAR_0);

 return VAR_10;
}
