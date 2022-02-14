
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vm_area_struct {int dummy; } ;
struct resv_map {int refs; } ;


 int FUNC_0 (int *,int ) ;
 int VAR_0 ;
 struct resv_map* FUNC_1 (struct vm_area_struct*) ;

__attribute__((used)) static void FUNC_2(struct vm_area_struct *VAR_1)
{
 struct resv_map *VAR_2 = FUNC_1(VAR_1);

 if (!VAR_2)
  return;
 FUNC_0(&VAR_2->refs, VAR_0);
}
