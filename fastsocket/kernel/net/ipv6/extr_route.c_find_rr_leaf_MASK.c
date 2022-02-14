
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct TYPE_3__ {struct rt6_info* rt6_next; } ;
struct TYPE_4__ {TYPE_1__ dst; } ;
struct rt6_info {scalar_t__ rt6i_metric; TYPE_2__ u; } ;
struct fib6_node {struct rt6_info* leaf; } ;


 struct rt6_info* FUNC_0 (struct rt6_info*,int,int,int*,struct rt6_info*,int*) ;

__attribute__((used)) static struct rt6_info *FUNC_1(struct fib6_node *VAR_0,
         struct rt6_info *VAR_1,
         u32 VAR_2, int VAR_3, int VAR_4,
         bool *VAR_5)
{
 struct rt6_info *VAR_6, *VAR_7;
 int VAR_8 = -1;

 VAR_7 = ((void*)0);
 for (VAR_6 = VAR_1; VAR_6 && VAR_6->rt6i_metric == VAR_2;
      VAR_6 = VAR_6->u.dst.rt6_next)
  VAR_7 = FUNC_0(VAR_6, VAR_3, VAR_4, &VAR_8, VAR_7, VAR_5);
 for (VAR_6 = VAR_0->leaf; VAR_6 && VAR_6 != VAR_1 && VAR_6->rt6i_metric == VAR_2;
      VAR_6 = VAR_6->u.dst.rt6_next)
  VAR_7 = FUNC_0(VAR_6, VAR_3, VAR_4, &VAR_8, VAR_7, VAR_5);

 return VAR_7;
}
