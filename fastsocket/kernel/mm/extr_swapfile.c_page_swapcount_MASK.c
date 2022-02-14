
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int val; } ;
typedef TYPE_1__ swp_entry_t ;
struct swap_info_struct {int * swap_map; } ;
struct page {int dummy; } ;


 int FUNC_0 (struct page*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ) ;
 struct swap_info_struct* FUNC_3 (TYPE_1__) ;
 int VAR_0 ;
 size_t FUNC_4 (TYPE_1__) ;

__attribute__((used)) static inline int FUNC_5(struct page *VAR_1)
{
 int VAR_2 = 0;
 struct swap_info_struct *VAR_3;
 swp_entry_t VAR_4;

 VAR_4.val = FUNC_0(VAR_1);
 VAR_3 = FUNC_3(VAR_4);
 if (VAR_3) {
  VAR_2 = FUNC_2(VAR_3->swap_map[FUNC_4(VAR_4)]);
  FUNC_1(&VAR_0);
 }
 return VAR_2;
}
