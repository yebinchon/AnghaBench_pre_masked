
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vm_area_struct {int dummy; } ;
struct resv_map {int refs; } ;


 int FUNC_0 (int *) ;
 struct resv_map* FUNC_1 (struct vm_area_struct*) ;

__attribute__((used)) static void FUNC_2(struct vm_area_struct *VAR_0)
{
 struct resv_map *VAR_1 = FUNC_1(VAR_0);
 if (VAR_1)
  FUNC_0(&VAR_1->refs);
}
