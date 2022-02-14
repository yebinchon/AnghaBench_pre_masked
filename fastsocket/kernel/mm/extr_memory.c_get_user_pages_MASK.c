
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vm_area_struct {int dummy; } ;
struct task_struct {int dummy; } ;
struct page {int dummy; } ;
struct mm_struct {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct task_struct*,struct mm_struct*,unsigned long,int,int,struct page**,struct vm_area_struct**) ;

int FUNC_1(struct task_struct *VAR_4, struct mm_struct *VAR_5,
  unsigned long VAR_6, int VAR_7, int VAR_8, int VAR_9,
  struct page **VAR_10, struct vm_area_struct **VAR_11)
{
 int VAR_12 = VAR_2;

 if (VAR_10)
  VAR_12 |= VAR_1;
 if (VAR_8)
  VAR_12 |= VAR_3;
 if (VAR_9)
  VAR_12 |= VAR_0;

 return FUNC_0(VAR_4, VAR_5, VAR_6, VAR_7, VAR_12, VAR_10, VAR_11);
}
