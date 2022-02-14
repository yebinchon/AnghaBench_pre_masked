
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct memcg_stock_pcp {int charge; struct mem_cgroup* cached; } ;
struct mem_cgroup {int memsw; int res; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *,int ) ;

__attribute__((used)) static void FUNC_1(struct memcg_stock_pcp *VAR_1)
{
 struct mem_cgroup *VAR_2 = VAR_1->cached;

 if (VAR_1->charge) {
  FUNC_0(&VAR_2->res, VAR_1->charge);
  if (VAR_0)
   FUNC_0(&VAR_2->memsw, VAR_1->charge);
 }
 VAR_1->cached = ((void*)0);
 VAR_1->charge = 0;
}
