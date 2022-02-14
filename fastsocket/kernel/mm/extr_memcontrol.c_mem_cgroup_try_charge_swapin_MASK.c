
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int dummy; } ;
struct mm_struct {int dummy; } ;
struct mem_cgroup {int css; } ;
typedef int gfp_t ;


 int VAR_0 ;
 int FUNC_0 (struct page*) ;
 int FUNC_1 (struct mm_struct*,int ,struct mem_cgroup**,int,struct page*,int ) ;
 int FUNC_2 (int *) ;
 int VAR_1 ;
 struct mm_struct VAR_2 ;
 scalar_t__ FUNC_3 () ;
 struct mem_cgroup* FUNC_4 (struct page*) ;
 scalar_t__ FUNC_5 (int) ;

int FUNC_6(struct mm_struct *VAR_3,
     struct page *VAR_4,
     gfp_t VAR_5, struct mem_cgroup **VAR_6)
{
 struct mem_cgroup *VAR_7;
 int VAR_8;

 if (FUNC_3())
  return 0;

 if (!VAR_1)
  goto charge_cur_mm;






 if (!FUNC_0(VAR_4))
  goto charge_cur_mm;
 VAR_7 = FUNC_4(VAR_4);
 if (!VAR_7)
  goto charge_cur_mm;
 *VAR_6 = VAR_7;
 VAR_8 = FUNC_1(((void*)0), VAR_5, VAR_6, 1, VAR_4, VAR_0);
 FUNC_2(&VAR_7->css);
 return VAR_8;
charge_cur_mm:
 if (FUNC_5(!VAR_3))
  VAR_3 = &VAR_2;
 return FUNC_1(VAR_3, VAR_5, VAR_6, 1, VAR_4, VAR_0);
}
