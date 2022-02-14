
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int xfrm_address_t ;
typedef int u32 ;
struct TYPE_6__ {int daddr; } ;
struct TYPE_5__ {int saddr; } ;
struct TYPE_4__ {int m; int v; } ;
struct xfrm_state {int tunnel_users; struct xfrm_state* tunnel; TYPE_3__ id; TYPE_2__ props; TYPE_1__ mark; } ;
typedef scalar_t__ __be32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int VAR_3 ;
 struct xfrm_state* FUNC_1 (struct xfrm_state*) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (struct xfrm_state*) ;
 int FUNC_4 (struct xfrm_state*) ;
 struct xfrm_state* FUNC_5 (int *,int,int *,scalar_t__,int ,int ) ;

__attribute__((used)) static int FUNC_6(struct xfrm_state *VAR_4)
{
 int VAR_5 = 0;
 struct xfrm_state *VAR_6 = ((void*)0);
 __be32 VAR_7;
 u32 VAR_8 = VAR_4->mark.m & VAR_4->mark.v;

 VAR_7 = FUNC_2((xfrm_address_t *)&VAR_4->props.saddr);
 if (VAR_7)
  VAR_6 = FUNC_5(&VAR_3, VAR_8, (xfrm_address_t *)&VAR_4->id.daddr,
          VAR_7, VAR_2, VAR_0);
 if (!VAR_6) {
  VAR_6 = FUNC_1(VAR_4);
  if (!VAR_6) {
   VAR_5 = -VAR_1;
   goto out;
  }
  FUNC_4(VAR_6);
  FUNC_3(VAR_6);
 }
 VAR_4->tunnel = VAR_6;
 FUNC_0(&VAR_6->tunnel_users);

out:
 return VAR_5;
}
