
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int dummy; } ;
struct mm_struct {int dummy; } ;
struct mem_cgroup {int dummy; } ;
typedef int gfp_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct page*) ;
 scalar_t__ FUNC_1 (struct page*) ;
 int FUNC_2 (struct page*,struct mem_cgroup*,int ) ;
 struct mm_struct VAR_2 ;
 int FUNC_3 (struct page*,struct mm_struct*,int ,int ,struct mem_cgroup*) ;
 scalar_t__ FUNC_4 () ;
 int FUNC_5 (struct mm_struct*,struct page*,int ,struct mem_cgroup**) ;
 scalar_t__ FUNC_6 (struct page*) ;
 scalar_t__ FUNC_7 (int) ;

int FUNC_8(struct page *VAR_3, struct mm_struct *VAR_4,
    gfp_t VAR_5)
{
 struct mem_cgroup *VAR_6 = ((void*)0);
 int VAR_7;

 if (FUNC_4())
  return 0;
 if (FUNC_0(VAR_3))
  return 0;

 if (FUNC_7(!VAR_4))
  VAR_4 = &VAR_2;

 if (FUNC_6(VAR_3))
  return FUNC_3(VAR_3, VAR_4, VAR_5,
    VAR_0, ((void*)0));


 if (FUNC_1(VAR_3)) {
  VAR_7 = FUNC_5(VAR_4, VAR_3, VAR_5, &VAR_6);
  if (!VAR_7)
   FUNC_2(VAR_3, VAR_6,
     VAR_1);
 } else
  VAR_7 = FUNC_3(VAR_3, VAR_4, VAR_5,
     VAR_1, VAR_6);

 return VAR_7;
}
