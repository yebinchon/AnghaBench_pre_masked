
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vm_area_struct {int dummy; } ;
struct mm_struct {scalar_t__ map_count; } ;


 int VAR_0 ;
 int FUNC_0 (struct mm_struct*,struct vm_area_struct*,unsigned long,int) ;
 scalar_t__ VAR_1 ;

int FUNC_1(struct mm_struct *VAR_2, struct vm_area_struct *VAR_3,
       unsigned long VAR_4, int VAR_5)
{
 if (VAR_2->map_count >= VAR_1)
  return -VAR_0;

 return FUNC_0(VAR_2, VAR_3, VAR_4, VAR_5);
}
