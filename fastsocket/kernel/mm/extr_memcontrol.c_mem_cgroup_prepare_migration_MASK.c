
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page_cgroup {struct mem_cgroup* mem_cgroup; } ;
struct page {int dummy; } ;
struct mem_cgroup {int css; } ;
typedef enum charge_type { ____Placeholder_charge_type } charge_type ;


 int FUNC_0 (struct page_cgroup*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_1 (struct page*) ;
 scalar_t__ FUNC_2 (struct page_cgroup*) ;
 int FUNC_3 (struct page_cgroup*) ;
 int FUNC_4 (struct mem_cgroup*,struct page_cgroup*,int,int ) ;
 int FUNC_5 (int *,int ,struct mem_cgroup**,int,struct page*,int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (struct page_cgroup*) ;
 struct page_cgroup* FUNC_9 (struct page*) ;
 scalar_t__ FUNC_10 () ;
 int FUNC_11 (struct page*) ;
 scalar_t__ FUNC_12 (struct page*) ;
 int FUNC_13 (struct page_cgroup*) ;

int FUNC_14(struct page *VAR_6,
 struct page *VAR_7, struct mem_cgroup **VAR_8)
{
 struct page_cgroup *VAR_9;
 struct mem_cgroup *VAR_10 = ((void*)0);
 enum charge_type VAR_11;
 int VAR_12 = 0;

 if (FUNC_10())
  return 0;

 VAR_9 = FUNC_9(VAR_6);
 FUNC_8(VAR_9);
 if (FUNC_2(VAR_9)) {
  VAR_10 = VAR_9->mem_cgroup;
  FUNC_6(&VAR_10->css);
  if (FUNC_1(VAR_6))
   FUNC_3(VAR_9);
 }
 FUNC_13(VAR_9);




 if (!VAR_10)
  return 0;

 *VAR_8 = VAR_10;
 VAR_12 = FUNC_5(((void*)0), VAR_1, VAR_8, 0,
       VAR_6, VAR_5);
 FUNC_7(&VAR_10->css);
 if (VAR_12 || *VAR_8 == ((void*)0)) {
  if (FUNC_1(VAR_6)) {
   FUNC_8(VAR_9);
   FUNC_0(VAR_9);
   FUNC_13(VAR_9);



   FUNC_11(VAR_6);
  }
  return -VAR_0;
 }






 VAR_9 = FUNC_9(VAR_7);
 if (FUNC_1(VAR_6))
  VAR_11 = VAR_3;
 else if (FUNC_12(VAR_6))
  VAR_11 = VAR_2;
 else
  VAR_11 = VAR_4;
 FUNC_4(VAR_10, VAR_9, VAR_11, VAR_5);
 return VAR_12;
}
