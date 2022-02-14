
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vm_area_struct {int vm_flags; } ;
struct resv_map {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int VAR_1 ;
 int FUNC_1 (struct vm_area_struct*) ;
 int FUNC_2 (struct vm_area_struct*) ;

__attribute__((used)) static struct resv_map *FUNC_3(struct vm_area_struct *VAR_2)
{
 FUNC_0(!FUNC_2(VAR_2));
 if (!(VAR_2->vm_flags & VAR_1))
  return (struct resv_map *)(FUNC_1(VAR_2) &
       ~VAR_0);
 return ((void*)0);
}
