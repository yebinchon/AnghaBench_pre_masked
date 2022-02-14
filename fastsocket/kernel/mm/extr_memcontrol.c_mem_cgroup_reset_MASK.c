
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mem_cgroup {int memsw; int res; } ;
struct cgroup {int dummy; } ;


 int FUNC_0 (unsigned int) ;
 int FUNC_1 (unsigned int) ;


 int VAR_0 ;
 struct mem_cgroup* FUNC_2 (struct cgroup*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static int FUNC_5(struct cgroup *VAR_1, unsigned int VAR_2)
{
 struct mem_cgroup *VAR_3;
 int VAR_4, VAR_5;

 VAR_3 = FUNC_2(VAR_1);
 VAR_4 = FUNC_1(VAR_2);
 VAR_5 = FUNC_0(VAR_2);
 switch (VAR_5) {
 case 128:
  if (VAR_4 == VAR_0)
   FUNC_4(&VAR_3->res);
  else
   FUNC_4(&VAR_3->memsw);
  break;
 case 129:
  if (VAR_4 == VAR_0)
   FUNC_3(&VAR_3->res);
  else
   FUNC_3(&VAR_3->memsw);
  break;
 }

 return 0;
}
