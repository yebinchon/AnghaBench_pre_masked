
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scan_control {int target_mem_cgroup; } ;
struct page {int dummy; } ;
struct mem_cgroup_zone {int dummy; } ;
typedef enum page_references { ____Placeholder_page_references } page_references ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (struct page*) ;
 int FUNC_1 (struct page*) ;
 int FUNC_2 (struct page*) ;
 unsigned long VAR_4 ;
 int FUNC_3 (struct page*,int,int ,unsigned long*) ;

__attribute__((used)) static enum page_references FUNC_4(struct page *VAR_5,
        struct mem_cgroup_zone *VAR_6,
        struct scan_control *VAR_7)
{
 int VAR_8, VAR_9;
 unsigned long VAR_10;

 VAR_8 = FUNC_3(VAR_5, 1, VAR_7->target_mem_cgroup,
       &VAR_10);
 VAR_9 = FUNC_2(VAR_5);





 if (VAR_10 & VAR_4)
  return VAR_2;

 if (VAR_8) {
  if (FUNC_0(VAR_5))
   return VAR_0;
  FUNC_1(VAR_5);

  if (VAR_9)
   return VAR_0;

  return VAR_1;
 }


 if (VAR_9)
  return VAR_3;

 return VAR_2;
}
