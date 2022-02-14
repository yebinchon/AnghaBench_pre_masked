
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct mem_cgroup {int memsw; int res; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct mem_cgroup*) ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (int *,int ) ;
 int VAR_2 ;

u64 FUNC_3(struct mem_cgroup *VAR_3)
{
 u64 VAR_4;

 VAR_4 = FUNC_2(&VAR_3->res, VAR_1);




 if (FUNC_0(VAR_3)) {
  u64 VAR_5;

  VAR_4 += VAR_2 << VAR_0;
  VAR_5 = FUNC_2(&VAR_3->memsw, VAR_1);





  VAR_4 = FUNC_1(VAR_4, VAR_5);
 }

 return VAR_4;
}
