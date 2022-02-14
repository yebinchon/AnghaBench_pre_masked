
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int val; } ;
typedef TYPE_1__ swp_entry_t ;
struct swap_info_struct {int type; } ;
struct page {int dummy; } ;


 struct page* FUNC_0 (int *,int ) ;
 int FUNC_1 (struct page*) ;
 int VAR_0 ;
 TYPE_1__ FUNC_2 (int ,unsigned long) ;
 int FUNC_3 (struct page*) ;
 scalar_t__ FUNC_4 (struct page*) ;
 int FUNC_5 (struct page*) ;

__attribute__((used)) static int
FUNC_6(struct swap_info_struct *VAR_1, unsigned long VAR_2)
{
 swp_entry_t VAR_3 = FUNC_2(VAR_1->type, VAR_2);
 struct page *VAR_4;
 int VAR_5 = 0;

 VAR_4 = FUNC_0(&VAR_0, VAR_3.val);
 if (!VAR_4)
  return 0;







 if (FUNC_4(VAR_4)) {
  VAR_5 = FUNC_3(VAR_4);
  FUNC_5(VAR_4);
 }
 FUNC_1(VAR_4);
 return VAR_5;
}
