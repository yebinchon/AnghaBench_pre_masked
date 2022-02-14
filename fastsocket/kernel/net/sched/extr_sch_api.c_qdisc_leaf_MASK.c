
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct Qdisc_class_ops {unsigned long (* get ) (struct Qdisc*,int ) ;int (* put ) (struct Qdisc*,unsigned long) ;struct Qdisc* (* leaf ) (struct Qdisc*,unsigned long) ;} ;
struct Qdisc {TYPE_1__* ops; } ;
struct TYPE_2__ {struct Qdisc_class_ops* cl_ops; } ;


 unsigned long FUNC_0 (struct Qdisc*,int ) ;
 struct Qdisc* FUNC_1 (struct Qdisc*,unsigned long) ;
 int FUNC_2 (struct Qdisc*,unsigned long) ;

__attribute__((used)) static struct Qdisc *FUNC_3(struct Qdisc *VAR_0, u32 VAR_1)
{
 unsigned long VAR_2;
 struct Qdisc *VAR_3;
 const struct Qdisc_class_ops *VAR_4 = VAR_0->ops->cl_ops;

 if (VAR_4 == ((void*)0))
  return ((void*)0);
 VAR_2 = VAR_4->get(VAR_0, VAR_1);

 if (VAR_2 == 0)
  return ((void*)0);
 VAR_3 = VAR_4->leaf(VAR_0, VAR_2);
 VAR_4->put(VAR_0, VAR_2);
 return VAR_3;
}
