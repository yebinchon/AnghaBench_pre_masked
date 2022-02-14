
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
 int FUNC_0 (struct task_struct*,struct mm_struct*,unsigned long,int,int,struct page**,struct vm_area_struct**) ;

int FUNC_1(struct task_struct *VAR_2, struct mm_struct *VAR_3,
 unsigned long VAR_4, int VAR_5, int VAR_6, int VAR_7,
 struct page **VAR_8, struct vm_area_struct **VAR_9)
{
 int VAR_10 = 0;

 if (VAR_6)
  VAR_10 |= VAR_1;
 if (VAR_7)
  VAR_10 |= VAR_0;

 return FUNC_0(VAR_2, VAR_3, VAR_4, VAR_5, VAR_10, VAR_8, VAR_9);
}
