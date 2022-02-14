
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int parent; } ;
struct mem_cgroup {TYPE_1__ res; } ;


 struct mem_cgroup* FUNC_0 (int ,int ) ;
 int VAR_0 ;

__attribute__((used)) static struct mem_cgroup *FUNC_1(struct mem_cgroup *VAR_1)
{
 if (!VAR_1->res.parent)
  return ((void*)0);
 return FUNC_0(VAR_1->res.parent, VAR_0);
}
