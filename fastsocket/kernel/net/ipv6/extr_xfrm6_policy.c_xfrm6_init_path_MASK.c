
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {int rt6i_nfheader_len; } ;
struct TYPE_8__ {TYPE_3__ rt6; } ;
struct xfrm_dst {TYPE_4__ u; int path_cookie; } ;
struct rt6_info {TYPE_2__* rt6i_node; } ;
struct dst_entry {TYPE_1__* ops; } ;
struct TYPE_6__ {int fn_sernum; } ;
struct TYPE_5__ {scalar_t__ family; } ;


 scalar_t__ VAR_0 ;

__attribute__((used)) static int FUNC_0(struct xfrm_dst *VAR_1, struct dst_entry *VAR_2,
      int VAR_3)
{
 if (VAR_2->ops->family == VAR_0) {
  struct rt6_info *VAR_4 = (struct rt6_info*)VAR_2;
  if (VAR_4->rt6i_node)
   VAR_1->path_cookie = VAR_4->rt6i_node->fn_sernum;
 }

 VAR_1->u.rt6.rt6i_nfheader_len = VAR_3;

 return 0;
}
