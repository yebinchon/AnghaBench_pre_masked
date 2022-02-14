
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xfrm_policy_afinfo {int (* get_tos ) (struct flowi*) ;} ;
struct flowi {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct flowi*) ;
 struct xfrm_policy_afinfo* FUNC_1 (int) ;
 int FUNC_2 (struct xfrm_policy_afinfo*) ;

__attribute__((used)) static inline int FUNC_3(struct flowi *VAR_1, int VAR_2)
{
 struct xfrm_policy_afinfo *VAR_3 = FUNC_1(VAR_2);
 int VAR_4;

 if (!VAR_3)
  return -VAR_0;

 VAR_4 = VAR_3->get_tos(VAR_1);

 FUNC_2(VAR_3);

 return VAR_4;
}
