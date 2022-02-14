
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct rt6_info {TYPE_1__* rt6i_node; } ;
struct dst_entry {int dummy; } ;
struct TYPE_2__ {scalar_t__ fn_sernum; } ;



__attribute__((used)) static struct dst_entry *FUNC_0(struct dst_entry *VAR_0, u32 VAR_1)
{
 struct rt6_info *VAR_2;

 VAR_2 = (struct rt6_info *) VAR_0;

 if (VAR_2 && VAR_2->rt6i_node && (VAR_2->rt6i_node->fn_sernum == VAR_1))
  return VAR_0;

 return ((void*)0);
}
