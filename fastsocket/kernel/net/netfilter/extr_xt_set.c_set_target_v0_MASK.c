
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct xt_target_param {int family; struct xt_set_info_target_v0* targinfo; } ;
struct TYPE_10__ {int flags; int dim; } ;
struct TYPE_11__ {TYPE_4__ compat; } ;
struct TYPE_12__ {scalar_t__ index; TYPE_5__ u; } ;
struct TYPE_7__ {int flags; int dim; } ;
struct TYPE_8__ {TYPE_1__ compat; } ;
struct TYPE_9__ {scalar_t__ index; TYPE_2__ u; } ;
struct xt_set_info_target_v0 {TYPE_6__ del_set; TYPE_3__ add_set; } ;
struct sk_buff {int dummy; } ;


 scalar_t__ VAR_0 ;
 unsigned int VAR_1 ;
 int FUNC_0 (scalar_t__,struct sk_buff*,int ,int ,int ) ;
 int FUNC_1 (scalar_t__,struct sk_buff*,int ,int ,int ) ;

__attribute__((used)) static unsigned int
FUNC_2(struct sk_buff *VAR_2, const struct xt_target_param *VAR_3)
{
 const struct xt_set_info_target_v0 *VAR_4 = VAR_3->targinfo;

 if (VAR_4->add_set.index != VAR_0)
  FUNC_0(VAR_4->add_set.index, VAR_2, VAR_3->family,
      VAR_4->add_set.u.compat.dim,
      VAR_4->add_set.u.compat.flags);
 if (VAR_4->del_set.index != VAR_0)
  FUNC_1(VAR_4->del_set.index, VAR_2, VAR_3->family,
      VAR_4->del_set.u.compat.dim,
      VAR_4->del_set.u.compat.flags);

 return VAR_1;
}
