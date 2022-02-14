
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_9__ {int family; } ;
struct TYPE_8__ {int proto; scalar_t__ spi; int daddr; } ;
struct TYPE_7__ {scalar_t__ state; } ;
struct TYPE_6__ {int v; int m; } ;
struct xfrm_state {int lock; int byspi; TYPE_4__ props; TYPE_3__ id; TYPE_2__ km; TYPE_1__ mark; } ;
struct TYPE_10__ {scalar_t__ state_byspi; } ;
struct net {TYPE_5__ xfrm; } ;
typedef scalar_t__ __be32 ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int *,scalar_t__) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 () ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 unsigned int FUNC_5 (struct net*,int *,scalar_t__,int ,int ) ;
 int VAR_2 ;
 struct xfrm_state* FUNC_6 (struct net*,int,int *,scalar_t__,int ,int ) ;
 int FUNC_7 (struct xfrm_state*) ;
 struct net* FUNC_8 (struct xfrm_state*) ;

int FUNC_9(struct xfrm_state *VAR_3, u32 VAR_4, u32 VAR_5)
{
 struct net *VAR_6 = FUNC_8(VAR_3);
 unsigned int VAR_7;
 struct xfrm_state *VAR_8;
 int VAR_9 = -VAR_0;
 __be32 VAR_10 = FUNC_1(VAR_4);
 __be32 VAR_11 = FUNC_1(VAR_5);
 u32 VAR_12 = VAR_3->mark.v & VAR_3->mark.m;

 FUNC_3(&VAR_3->lock);
 if (VAR_3->km.state == VAR_1)
  goto unlock;

 VAR_9 = 0;
 if (VAR_3->id.spi)
  goto unlock;

 VAR_9 = -VAR_0;

 if (VAR_10 == VAR_11) {
  VAR_8 = FUNC_6(VAR_6, VAR_12, &VAR_3->id.daddr, VAR_10, VAR_3->id.proto, VAR_3->props.family);
  if (VAR_8) {
   FUNC_7(VAR_8);
   goto unlock;
  }
  VAR_3->id.spi = VAR_10;
 } else {
  u32 VAR_13 = 0;
  for (VAR_7=0; VAR_7<VAR_5-VAR_4+1; VAR_7++) {
   VAR_13 = VAR_4 + FUNC_2()%(VAR_5-VAR_4+1);
   VAR_8 = FUNC_6(VAR_6, VAR_12, &VAR_3->id.daddr, FUNC_1(VAR_13), VAR_3->id.proto, VAR_3->props.family);
   if (VAR_8 == ((void*)0)) {
    VAR_3->id.spi = FUNC_1(VAR_13);
    break;
   }
   FUNC_7(VAR_8);
  }
 }
 if (VAR_3->id.spi) {
  FUNC_3(&VAR_2);
  VAR_7 = FUNC_5(VAR_6, &VAR_3->id.daddr, VAR_3->id.spi, VAR_3->id.proto, VAR_3->props.family);
  FUNC_0(&VAR_3->byspi, VAR_6->xfrm.state_byspi+VAR_7);
  FUNC_4(&VAR_2);

  VAR_9 = 0;
 }

unlock:
 FUNC_4(&VAR_3->lock);

 return VAR_9;
}
