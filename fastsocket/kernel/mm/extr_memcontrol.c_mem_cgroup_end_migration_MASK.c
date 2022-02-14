
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page_cgroup {int dummy; } ;
struct page {int dummy; } ;
struct mem_cgroup {int css; } ;


 int FUNC_0 (struct page_cgroup*) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (struct page*) ;
 int FUNC_2 (struct page*,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct page_cgroup*) ;
 struct page_cgroup* FUNC_6 (struct page*) ;
 int FUNC_7 (struct page*) ;
 int FUNC_8 (struct page_cgroup*) ;

void FUNC_9(struct mem_cgroup *VAR_1,
 struct page *VAR_2, struct page *VAR_3, bool VAR_4)
{
 struct page *VAR_5, *VAR_6;
 struct page_cgroup *VAR_7;

 if (!VAR_1)
  return;

 FUNC_3(&VAR_1->css);
 if (!VAR_4) {
  VAR_5 = VAR_2;
  VAR_6 = VAR_3;
 } else {
  VAR_5 = VAR_3;
  VAR_6 = VAR_2;
 }





 VAR_7 = FUNC_6(VAR_2);
 FUNC_5(VAR_7);
 FUNC_0(VAR_7);
 FUNC_8(VAR_7);

 if (VAR_6 != VAR_2)
  VAR_7 = FUNC_6(VAR_6);
 FUNC_2(VAR_6, VAR_0);

 VAR_7 = FUNC_6(VAR_5);
 if (FUNC_1(VAR_5))
  FUNC_7(VAR_5);






 FUNC_4(&VAR_1->css);
}
