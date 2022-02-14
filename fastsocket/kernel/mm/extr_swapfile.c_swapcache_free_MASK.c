
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int swp_entry_t ;
struct swap_info_struct {int dummy; } ;
struct page {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct page*,int ,int) ;
 int FUNC_1 (int *) ;
 unsigned char FUNC_2 (struct swap_info_struct*,int ,int ) ;
 struct swap_info_struct* FUNC_3 (int ) ;
 int VAR_1 ;

void FUNC_4(swp_entry_t VAR_2, struct page *VAR_3)
{
 struct swap_info_struct *VAR_4;
 unsigned char VAR_5;

 VAR_4 = FUNC_3(VAR_2);
 if (VAR_4) {
  VAR_5 = FUNC_2(VAR_4, VAR_2, VAR_0);
  if (VAR_3)
   FUNC_0(VAR_3, VAR_2, VAR_5 != 0);
  FUNC_1(&VAR_1);
 }
}
