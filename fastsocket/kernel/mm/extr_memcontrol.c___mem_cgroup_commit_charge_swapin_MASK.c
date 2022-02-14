
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int val; } ;
typedef TYPE_1__ swp_entry_t ;
struct page_cgroup {int dummy; } ;
struct page {int dummy; } ;
struct mem_cgroup {int css; int memsw; } ;
typedef enum charge_type { ____Placeholder_charge_type } charge_type ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct page*) ;
 int FUNC_1 (struct mem_cgroup*,struct page_cgroup*,int,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 scalar_t__ VAR_1 ;
 struct page_cgroup* FUNC_4 (struct page*) ;
 scalar_t__ FUNC_5 () ;
 int FUNC_6 (struct mem_cgroup*) ;
 struct mem_cgroup* FUNC_7 (unsigned short) ;
 int FUNC_8 (struct page*) ;
 int FUNC_9 (struct page*) ;
 int FUNC_10 (struct mem_cgroup*) ;
 int FUNC_11 (struct mem_cgroup*,int) ;
 int FUNC_12 (struct page*) ;
 int FUNC_13 () ;
 int FUNC_14 () ;
 int FUNC_15 (int *,int ) ;
 unsigned short FUNC_16 (TYPE_1__,int ) ;

__attribute__((used)) static void
FUNC_17(struct page *VAR_2, struct mem_cgroup *VAR_3,
     enum charge_type VAR_4)
{
 struct page_cgroup *VAR_5;

 if (FUNC_5())
  return;
 if (!VAR_3)
  return;
 FUNC_2(&VAR_3->css);
 VAR_5 = FUNC_4(VAR_2);
 FUNC_9(VAR_2);
 FUNC_1(VAR_3, VAR_5, VAR_4, VAR_0);
 FUNC_8(VAR_2);







 if (VAR_1 && FUNC_0(VAR_2)) {
  swp_entry_t VAR_6 = {.val = FUNC_12(VAR_2)};
  unsigned short VAR_7;
  struct mem_cgroup *VAR_8;

  VAR_7 = FUNC_16(VAR_6, 0);
  FUNC_13();
  VAR_8 = FUNC_7(VAR_7);
  if (VAR_8) {




   if (!FUNC_6(VAR_8))
    FUNC_15(&VAR_8->memsw, VAR_0);
   FUNC_11(VAR_8, 0);
   FUNC_10(VAR_8);
  }
  FUNC_14();
 }





 FUNC_3(&VAR_3->css);
}
