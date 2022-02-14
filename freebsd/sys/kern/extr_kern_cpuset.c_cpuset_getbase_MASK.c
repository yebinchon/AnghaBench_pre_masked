
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cpuset {scalar_t__ cs_id; struct cpuset* cs_parent; } ;


 scalar_t__ VAR_0 ;

__attribute__((used)) static struct cpuset *
FUNC_0(struct cpuset *VAR_1)
{

 if (VAR_1->cs_id == VAR_0)
  VAR_1 = VAR_1->cs_parent;
 return (VAR_1);
}
