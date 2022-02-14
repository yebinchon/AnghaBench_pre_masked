
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int val; } ;
typedef TYPE_1__ swp_entry_t ;
struct swap_info_struct {int dummy; } ;
struct page {int dummy; } ;


 scalar_t__ FUNC_0 (struct page*) ;
 int FUNC_1 (struct page*) ;
 scalar_t__ VAR_0 ;
 int FUNC_2 (struct page*) ;
 int FUNC_3 (struct page*) ;
 struct page* FUNC_4 (int *,int ) ;
 scalar_t__ FUNC_5 (TYPE_1__) ;
 int FUNC_6 (struct page*) ;
 int FUNC_7 (struct page*) ;
 int FUNC_8 (int *) ;
 scalar_t__ FUNC_9 (struct swap_info_struct*,TYPE_1__,int) ;
 struct swap_info_struct* FUNC_10 (TYPE_1__) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_11 (struct page*) ;
 int FUNC_12 (struct page*) ;
 scalar_t__ FUNC_13 () ;

int FUNC_14(swp_entry_t VAR_3)
{
 struct swap_info_struct *VAR_4;
 struct page *VAR_5 = ((void*)0);

 if (FUNC_5(VAR_3))
  return 1;

 VAR_4 = FUNC_10(VAR_3);
 if (VAR_4) {
  if (FUNC_9(VAR_4, VAR_3, 1) == VAR_0) {
   VAR_5 = FUNC_4(&VAR_2, VAR_3.val);
   if (VAR_5 && !FUNC_11(VAR_5)) {
    FUNC_6(VAR_5);
    VAR_5 = ((void*)0);
   }
  }
  FUNC_8(&VAR_1);
 }
 if (VAR_5) {




  if (FUNC_0(VAR_5) && !FUNC_1(VAR_5) &&
    (!FUNC_7(VAR_5) || FUNC_13())) {
   FUNC_3(VAR_5);
   FUNC_2(VAR_5);
  }
  FUNC_12(VAR_5);
  FUNC_6(VAR_5);
 }
 return VAR_4 != ((void*)0);
}
