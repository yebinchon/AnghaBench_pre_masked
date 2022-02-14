
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ stop; int fn; scalar_t__ count; scalar_t__ skip; } ;
struct check_loop_arg {int depth; TYPE_3__ w; struct Qdisc* p; } ;
struct Qdisc {TYPE_2__* ops; } ;
struct TYPE_5__ {TYPE_1__* cl_ops; } ;
struct TYPE_4__ {int (* walk ) (struct Qdisc*,TYPE_3__*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct Qdisc*,TYPE_3__*) ;

__attribute__((used)) static int FUNC_1(struct Qdisc *VAR_2, struct Qdisc *VAR_3, int VAR_4)
{
 struct check_loop_arg VAR_5;

 if (VAR_2->ops->cl_ops == ((void*)0))
  return 0;

 VAR_5.w.stop = VAR_5.w.skip = VAR_5.w.count = 0;
 VAR_5.w.fn = VAR_1;
 VAR_5.depth = VAR_4;
 VAR_5.p = VAR_3;
 VAR_2->ops->cl_ops->walk(VAR_2, &VAR_5.w);
 return VAR_5.w.stop ? -VAR_0 : 0;
}
