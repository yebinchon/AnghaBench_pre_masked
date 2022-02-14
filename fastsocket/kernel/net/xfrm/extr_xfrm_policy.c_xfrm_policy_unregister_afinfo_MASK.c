
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xfrm_policy_afinfo {size_t family; int * garbage_collect; struct dst_ops* dst_ops; } ;
struct dst_ops {int * link_failure; int * negative_advice; int * check; int * kmem_cachep; } ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 int FUNC_0 (struct xfrm_policy_afinfo*,int *) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 () ;
 scalar_t__ FUNC_5 (int) ;
 struct xfrm_policy_afinfo** VAR_3 ;
 int VAR_4 ;

int FUNC_6(struct xfrm_policy_afinfo *VAR_5)
{
 int VAR_6 = 0;
 if (FUNC_5(VAR_5 == ((void*)0)))
  return -VAR_1;
 if (FUNC_5(VAR_5->family >= VAR_2))
  return -VAR_0;
 FUNC_2(&VAR_4);
 if (FUNC_1(VAR_3[VAR_5->family] != ((void*)0))) {
  if (FUNC_5(VAR_3[VAR_5->family] != VAR_5))
   VAR_6 = -VAR_1;
  else
   FUNC_0(VAR_3[VAR_5->family],
      ((void*)0));
 }
 FUNC_3(&VAR_4);
 if (!VAR_6) {
  struct dst_ops *VAR_7 = VAR_5->dst_ops;

  FUNC_4();

  VAR_7->kmem_cachep = ((void*)0);
  VAR_7->check = ((void*)0);
  VAR_7->negative_advice = ((void*)0);
  VAR_7->link_failure = ((void*)0);
  VAR_5->garbage_collect = ((void*)0);
 }
 return VAR_6;
}
