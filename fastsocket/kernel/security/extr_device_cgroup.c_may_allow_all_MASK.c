
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dev_cgroup {scalar_t__ behavior; } ;


 scalar_t__ VAR_0 ;

__attribute__((used)) static inline int FUNC_0(struct dev_cgroup *VAR_1)
{
 if (!VAR_1)
  return 1;
 return VAR_1->behavior == VAR_0;
}
