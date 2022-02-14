
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct qdisc_walker {int dummy; } ;
struct check_loop_arg {int depth; struct Qdisc* p; } ;
struct Qdisc_class_ops {struct Qdisc* (* leaf ) (struct Qdisc*,unsigned long) ;} ;
struct Qdisc {TYPE_1__* ops; } ;
struct TYPE_2__ {struct Qdisc_class_ops* cl_ops; } ;


 int VAR_0 ;
 int FUNC_0 (struct Qdisc*,struct Qdisc*,int) ;
 struct Qdisc* FUNC_1 (struct Qdisc*,unsigned long) ;

__attribute__((used)) static int
FUNC_2(struct Qdisc *VAR_1, unsigned long VAR_2, struct qdisc_walker *VAR_3)
{
 struct Qdisc *VAR_4;
 const struct Qdisc_class_ops *VAR_5 = VAR_1->ops->cl_ops;
 struct check_loop_arg *VAR_6 = (struct check_loop_arg *)VAR_3;

 VAR_4 = VAR_5->leaf(VAR_1, VAR_2);
 if (VAR_4) {
  if (VAR_4 == VAR_6->p || VAR_6->depth > 7)
   return -VAR_0;
  return FUNC_0(VAR_4, VAR_6->p, VAR_6->depth + 1);
 }
 return 0;
}
