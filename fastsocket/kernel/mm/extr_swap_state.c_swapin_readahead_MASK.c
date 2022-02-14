
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int swp_entry_t ;
struct vm_area_struct {int dummy; } ;
struct page {int dummy; } ;
typedef int gfp_t ;


 int FUNC_0 () ;
 int FUNC_1 (struct page*) ;
 struct page* FUNC_2 (int ,int ,struct vm_area_struct*,unsigned long) ;
 int FUNC_3 (int ,unsigned long) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,unsigned long*) ;

struct page *FUNC_6(swp_entry_t VAR_0, gfp_t VAR_1,
   struct vm_area_struct *VAR_2, unsigned long VAR_3)
{
 int VAR_4;
 struct page *VAR_5;
 unsigned long VAR_6;
 unsigned long VAR_7;
 VAR_4 = FUNC_5(VAR_0, &VAR_6);
 for (VAR_7 = VAR_6 + VAR_4; VAR_6 < VAR_7; VAR_6++) {

  VAR_5 = FUNC_2(FUNC_3(FUNC_4(VAR_0), VAR_6),
      VAR_1, VAR_2, VAR_3);
  if (!VAR_5)
   break;
  FUNC_1(VAR_5);
 }
 FUNC_0();
 return FUNC_2(VAR_0, VAR_1, VAR_2, VAR_3);
}
