
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct xfrm_policy_afinfo {int (* init_path ) (struct xfrm_dst*,struct dst_entry*,int) ;} ;
struct xfrm_dst {int dummy; } ;
struct dst_entry {TYPE_1__* ops; } ;
struct TYPE_2__ {int family; } ;


 int VAR_0 ;
 int FUNC_0 (struct xfrm_dst*,struct dst_entry*,int) ;
 struct xfrm_policy_afinfo* FUNC_1 (int ) ;
 int FUNC_2 (struct xfrm_policy_afinfo*) ;

__attribute__((used)) static inline int FUNC_3(struct xfrm_dst *VAR_1, struct dst_entry *VAR_2,
     int VAR_3)
{
 struct xfrm_policy_afinfo *VAR_4 =
  FUNC_1(VAR_2->ops->family);
 int VAR_5;

 if (!VAR_4)
  return -VAR_0;

 VAR_5 = VAR_4->init_path(VAR_1, VAR_2, VAR_3);

 FUNC_2(VAR_4);

 return VAR_5;
}
