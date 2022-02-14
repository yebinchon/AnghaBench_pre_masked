
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct mem_cgroup {int memsw; int res; } ;
struct cgroup {int dummy; } ;
struct cftype {int private; } ;


 int FUNC_0 () ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int VAR_0 ;


 struct mem_cgroup* FUNC_3 (struct cgroup*) ;
 int FUNC_4 (struct mem_cgroup*,int) ;
 int FUNC_5 (int *,int) ;

__attribute__((used)) static u64 FUNC_6(struct cgroup *VAR_1, struct cftype *VAR_2)
{
 struct mem_cgroup *VAR_3 = FUNC_3(VAR_1);
 u64 VAR_4;
 int VAR_5, VAR_6;

 VAR_5 = FUNC_2(VAR_2->private);
 VAR_6 = FUNC_1(VAR_2->private);
 switch (VAR_5) {
 case 129:
  if (VAR_6 == VAR_0)
   VAR_4 = FUNC_4(VAR_3, 0);
  else
   VAR_4 = FUNC_5(&VAR_3->res, VAR_6);
  break;
 case 128:
  if (VAR_6 == VAR_0)
   VAR_4 = FUNC_4(VAR_3, 1);
  else
   VAR_4 = FUNC_5(&VAR_3->memsw, VAR_6);
  break;
 default:
  FUNC_0();
  break;
 }
 return VAR_4;
}
