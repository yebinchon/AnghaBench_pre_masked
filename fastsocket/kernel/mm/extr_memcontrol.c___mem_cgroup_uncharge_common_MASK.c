
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page_cgroup {struct mem_cgroup* mem_cgroup; } ;
struct page {int mapping; } ;
struct mem_cgroup {int dummy; } ;
typedef enum charge_type { ____Placeholder_charge_type } charge_type ;


 int FUNC_0 (struct page_cgroup*) ;



 int VAR_0 ;
 int FUNC_1 (struct page*) ;
 int FUNC_2 (struct page_cgroup*) ;
 int FUNC_3 (struct page_cgroup*) ;
 scalar_t__ FUNC_4 (struct page*) ;
 scalar_t__ FUNC_5 (struct page*) ;
 int FUNC_6 (int) ;
 int FUNC_7 (struct mem_cgroup*,int,int) ;
 int FUNC_8 (struct page*) ;
 scalar_t__ VAR_1 ;
 int FUNC_9 (struct page_cgroup*) ;
 struct page_cgroup* FUNC_10 (struct page*) ;
 int FUNC_11 (struct mem_cgroup*,struct page_cgroup*,int) ;
 scalar_t__ FUNC_12 () ;
 int FUNC_13 (struct mem_cgroup*) ;
 int FUNC_14 (struct mem_cgroup*) ;
 scalar_t__ FUNC_15 (struct mem_cgroup*) ;
 int FUNC_16 (struct mem_cgroup*,int) ;
 int FUNC_17 (struct mem_cgroup*,struct page*) ;
 int FUNC_18 (struct page*) ;
 int FUNC_19 (struct page*) ;
 scalar_t__ FUNC_20 (int) ;
 int FUNC_21 (struct page_cgroup*) ;

__attribute__((used)) static struct mem_cgroup *
FUNC_22(struct page *VAR_2, enum charge_type VAR_3)
{
 struct page_cgroup *VAR_4;
 struct mem_cgroup *VAR_5 = ((void*)0);
 int VAR_6 = VAR_0;

 if (FUNC_12())
  return ((void*)0);

 if (FUNC_4(VAR_2))
  return ((void*)0);

 if (FUNC_5(VAR_2)) {
  VAR_6 <<= FUNC_8(VAR_2);
  FUNC_6(!FUNC_5(VAR_2));
 }




 VAR_4 = FUNC_10(VAR_2);
 if (FUNC_20(!VAR_4 || !FUNC_3(VAR_4)))
  return ((void*)0);

 FUNC_9(VAR_4);

 VAR_5 = VAR_4->mem_cgroup;

 if (!FUNC_3(VAR_4))
  goto unlock_out;

 switch (VAR_3) {
 case 129:
 case 130:

  if (FUNC_19(VAR_2) || FUNC_2(VAR_4))
   goto unlock_out;
  break;
 case 128:
  if (!FUNC_1(VAR_2)) {
   if (VAR_2->mapping && !FUNC_18(VAR_2))
    goto unlock_out;
  } else if (FUNC_19(VAR_2))
    goto unlock_out;
  break;
 default:
  break;
 }

 FUNC_11(VAR_5, VAR_4, -VAR_6);

 FUNC_0(VAR_4);






 FUNC_21(VAR_4);




 if (FUNC_15(VAR_5))
  FUNC_17(VAR_5, VAR_2);
 if (VAR_1 && VAR_3 == 128) {
  FUNC_16(VAR_5, 1);
  FUNC_13(VAR_5);
 }
 if (!FUNC_14(VAR_5))
  FUNC_7(VAR_5, VAR_3, VAR_6);

 return VAR_5;

unlock_out:
 FUNC_21(VAR_4);
 return ((void*)0);
}
