
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int swp_entry_t ;
struct swap_info_struct {int dummy; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct swap_info_struct*,int ,int) ;
 struct swap_info_struct* FUNC_2 (int ) ;
 int VAR_0 ;

void FUNC_3(swp_entry_t VAR_1)
{
 struct swap_info_struct *VAR_2;

 VAR_2 = FUNC_2(VAR_1);
 if (VAR_2) {
  FUNC_1(VAR_2, VAR_1, 1);
  FUNC_0(&VAR_0);
 }
}
