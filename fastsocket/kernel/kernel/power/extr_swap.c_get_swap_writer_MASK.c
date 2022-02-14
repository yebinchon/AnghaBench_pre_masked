
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct swap_map_page {int dummy; } ;
struct swap_map_handle {scalar_t__ k; int cur_swap; struct swap_map_page* cur; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (struct swap_map_handle*) ;
 int VAR_3 ;

__attribute__((used)) static int FUNC_3(struct swap_map_handle *VAR_4)
{
 VAR_4->cur = (struct swap_map_page *)FUNC_1(VAR_2);
 if (!VAR_4->cur)
  return -VAR_0;
 VAR_4->cur_swap = FUNC_0(VAR_3);
 if (!VAR_4->cur_swap) {
  FUNC_2(VAR_4);
  return -VAR_1;
 }
 VAR_4->k = 0;
 return 0;
}
