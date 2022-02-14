
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct xt_target_param {int family; struct xt_set_info_target* targinfo; } ;
struct TYPE_3__ {scalar_t__ index; int flags; int dim; } ;
struct TYPE_4__ {scalar_t__ index; int flags; int dim; } ;
struct xt_set_info_target {TYPE_1__ del_set; TYPE_2__ add_set; } ;
struct sk_buff {int dummy; } ;


 scalar_t__ VAR_0 ;
 unsigned int VAR_1 ;
 int FUNC_0 (scalar_t__,struct sk_buff*,int ,int ,int ) ;
 int FUNC_1 (scalar_t__,struct sk_buff*,int ,int ,int ) ;

__attribute__((used)) static unsigned int
FUNC_2(struct sk_buff *VAR_2, const struct xt_target_param *VAR_3)
{
 const struct xt_set_info_target *VAR_4 = VAR_3->targinfo;

 if (VAR_4->add_set.index != VAR_0)
  FUNC_0(VAR_4->add_set.index,
      VAR_2, VAR_3->family,
      VAR_4->add_set.dim,
      VAR_4->add_set.flags);
 if (VAR_4->del_set.index != VAR_0)
  FUNC_1(VAR_4->del_set.index,
      VAR_2, VAR_3->family,
      VAR_4->del_set.dim,
      VAR_4->del_set.flags);

 return VAR_1;
}
