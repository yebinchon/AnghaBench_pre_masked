
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct xfrm_policy_afinfo {int dummy; } ;
struct TYPE_2__ {int * ops; } ;
struct xfrm_dst {TYPE_1__ flo; } ;
struct dst_ops {int dummy; } ;
struct net {struct dst_ops xfrm6_dst_ops; struct dst_ops xfrm4_dst_ops; } ;




 int FUNC_0 () ;
 int VAR_0 ;
 int VAR_1 ;
 struct xfrm_dst* FUNC_1 (int ) ;
 struct xfrm_dst* FUNC_2 (struct dst_ops*) ;
 scalar_t__ FUNC_3 (struct xfrm_dst*) ;
 int VAR_2 ;
 struct xfrm_policy_afinfo* FUNC_4 (int) ;
 int FUNC_5 (struct xfrm_policy_afinfo*) ;

__attribute__((used)) static inline struct xfrm_dst *FUNC_6(struct net *VAR_3, int VAR_4)
{
 struct xfrm_policy_afinfo *VAR_5 = FUNC_4(VAR_4);
 struct dst_ops *VAR_6;
 struct xfrm_dst *VAR_7;

 if (!VAR_5)
  return FUNC_1(-VAR_0);

 switch (VAR_4) {
 case 129:
  VAR_6 = &VAR_3->xfrm4_dst_ops;
  break;





 default:
  FUNC_0();
 }
 VAR_7 = FUNC_2(VAR_6);
 FUNC_5(VAR_5);

 if (FUNC_3(VAR_7))
  VAR_7->flo.ops = &VAR_2;
 else
  VAR_7 = FUNC_1(-VAR_1);

 return VAR_7;
}
