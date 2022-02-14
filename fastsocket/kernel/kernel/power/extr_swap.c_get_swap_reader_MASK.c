
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct swap_map_page {int dummy; } ;
struct swap_map_handle {scalar_t__ k; struct swap_map_page* cur; } ;
typedef int sector_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,struct swap_map_page*,int *) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (struct swap_map_handle*) ;

__attribute__((used)) static int FUNC_3(struct swap_map_handle *VAR_4, sector_t VAR_5)
{
 int VAR_6;

 if (!VAR_5)
  return -VAR_0;

 VAR_4->cur = (struct swap_map_page *)FUNC_1(VAR_3 | VAR_2);
 if (!VAR_4->cur)
  return -VAR_1;

 VAR_6 = FUNC_0(VAR_5, VAR_4->cur, ((void*)0));
 if (VAR_6) {
  FUNC_2(VAR_4);
  return VAR_6;
 }
 VAR_4->k = 0;
 return 0;
}
