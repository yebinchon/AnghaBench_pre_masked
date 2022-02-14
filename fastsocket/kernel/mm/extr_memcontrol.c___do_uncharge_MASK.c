
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct memcg_batch_info {int bytes; int memsw_bytes; struct mem_cgroup* memcg; int do_batch; } ;
struct mem_cgroup {int memsw; int res; } ;
typedef enum charge_type { ____Placeholder_charge_type } charge_type ;
struct TYPE_2__ {struct memcg_batch_info memcg_batch; } ;


 int const VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_1__* VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct mem_cgroup*) ;
 int FUNC_1 (int *,int) ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int) ;

__attribute__((used)) static void
FUNC_4(struct mem_cgroup *VAR_5, const enum charge_type VAR_6, int VAR_7)
{
 struct memcg_batch_info *VAR_8 = ((void*)0);
 bool VAR_9 = 1;


 if (!VAR_4 || VAR_6 == VAR_0)
  VAR_9 = 0;

 VAR_8 = &VAR_3->memcg_batch;





 if (!VAR_8->memcg)
  VAR_8->memcg = VAR_5;
 if (!VAR_8->do_batch || FUNC_2(VAR_2))
  goto direct_uncharge;

 if (VAR_7 > VAR_1)
  goto direct_uncharge;






 if (VAR_8->memcg != VAR_5)
  goto direct_uncharge;

 VAR_8->bytes += VAR_7;
 if (VAR_9)
  VAR_8->memsw_bytes += VAR_7;
 return;
direct_uncharge:
 FUNC_1(&VAR_5->res, VAR_7);
 if (VAR_9)
  FUNC_1(&VAR_5->memsw, VAR_7);
 if (FUNC_3(VAR_8->memcg != VAR_5))
  FUNC_0(VAR_5);
 return;
}
