
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_7__ {int family; int saddr; int reqid; int mode; } ;
struct TYPE_6__ {scalar_t__ proto; int daddr; } ;
struct TYPE_8__ {int v; int m; } ;
struct TYPE_5__ {scalar_t__ seq; } ;
struct xfrm_state {TYPE_3__ props; TYPE_2__ id; TYPE_4__ mark; TYPE_1__ km; } ;
struct net {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct xfrm_state* FUNC_0 (struct net*,TYPE_4__*,int,int ,int ,scalar_t__,int *,int *,int ) ;
 struct xfrm_state* FUNC_1 (struct net*,int,scalar_t__) ;
 int FUNC_2 (struct xfrm_state*) ;
 int FUNC_3 (struct xfrm_state*) ;
 struct xfrm_state* FUNC_4 (struct xfrm_state*,int,int) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 scalar_t__ FUNC_7 (int *,int *,int) ;
 int FUNC_8 (scalar_t__,int ) ;
 int FUNC_9 (struct xfrm_state*) ;
 int VAR_2 ;
 int FUNC_10 (struct xfrm_state*) ;
 struct net* FUNC_11 (struct xfrm_state*) ;

int FUNC_12(struct xfrm_state *VAR_3)
{
 struct net *VAR_4 = FUNC_11(VAR_3);
 struct xfrm_state *VAR_5, *VAR_6;
 int VAR_7;
 int VAR_8;
 u32 VAR_9 = VAR_3->mark.v & VAR_3->mark.m;
 int VAR_10 = FUNC_8(VAR_3->id.proto, VAR_1);

 VAR_7 = VAR_3->props.family;

 VAR_6 = ((void*)0);

 FUNC_5(&VAR_2);

 VAR_5 = FUNC_4(VAR_3, VAR_10, VAR_7);
 if (VAR_5) {
  VAR_6 = VAR_5;
  VAR_5 = ((void*)0);
  VAR_8 = -VAR_0;
  goto out;
 }

 if (VAR_10 && VAR_3->km.seq) {
  VAR_5 = FUNC_1(VAR_4, VAR_9, VAR_3->km.seq);
  if (VAR_5 && ((VAR_5->id.proto != VAR_3->id.proto) ||
      FUNC_7(&VAR_5->id.daddr, &VAR_3->id.daddr, VAR_7))) {
   VAR_6 = VAR_5;
   VAR_5 = ((void*)0);
  }
 }

 if (VAR_10 && !VAR_5)
  VAR_5 = FUNC_0(VAR_4, &VAR_3->mark, VAR_7, VAR_3->props.mode,
         VAR_3->props.reqid, VAR_3->id.proto,
         &VAR_3->id.daddr, &VAR_3->props.saddr, 0);

 FUNC_2(VAR_3);
 FUNC_3(VAR_3);
 VAR_8 = 0;

out:
 FUNC_6(&VAR_2);

 if (VAR_5) {
  FUNC_9(VAR_5);
  FUNC_10(VAR_5);
 }

 if (VAR_6)
  FUNC_10(VAR_6);

 return VAR_8;
}
