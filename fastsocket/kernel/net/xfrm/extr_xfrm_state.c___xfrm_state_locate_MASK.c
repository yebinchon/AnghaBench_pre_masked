
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_5__ {int proto; int daddr; int spi; } ;
struct TYPE_4__ {int saddr; } ;
struct TYPE_6__ {int v; int m; } ;
struct xfrm_state {TYPE_2__ id; TYPE_1__ props; TYPE_3__ mark; } ;
struct net {int dummy; } ;


 struct xfrm_state* FUNC_0 (struct net*,int,int *,int ,int ,int) ;
 struct xfrm_state* FUNC_1 (struct net*,int,int *,int *,int ,int) ;
 struct net* FUNC_2 (struct xfrm_state*) ;

__attribute__((used)) static inline struct xfrm_state *
FUNC_3(struct xfrm_state *VAR_0, int VAR_1, int VAR_2)
{
 struct net *VAR_3 = FUNC_2(VAR_0);
 u32 VAR_4 = VAR_0->mark.v & VAR_0->mark.m;

 if (VAR_1)
  return FUNC_0(VAR_3, VAR_4, &VAR_0->id.daddr,
        VAR_0->id.spi, VAR_0->id.proto, VAR_2);
 else
  return FUNC_1(VAR_3, VAR_4,
        &VAR_0->id.daddr,
        &VAR_0->props.saddr,
        VAR_0->id.proto, VAR_2);
}
