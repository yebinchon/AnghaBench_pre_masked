
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mm_struct {int owner; } ;
struct mem_cgroup {int css; } ;


 int FUNC_0 (int *) ;
 struct mem_cgroup* FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 scalar_t__ FUNC_5 (int) ;

__attribute__((used)) static struct mem_cgroup *FUNC_6(struct mm_struct *VAR_0)
{
 struct mem_cgroup *VAR_1 = ((void*)0);

 if (!VAR_0)
  return ((void*)0);





 FUNC_3();
 do {
  VAR_1 = FUNC_1(FUNC_2(VAR_0->owner));
  if (FUNC_5(!VAR_1))
   break;
 } while (!FUNC_0(&VAR_1->css));
 FUNC_4();
 return VAR_1;
}
