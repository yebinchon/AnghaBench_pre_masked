
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {unsigned long val; } ;
typedef TYPE_1__ swp_entry_t ;
struct page {int dummy; } ;
struct TYPE_5__ {int tree_lock; int page_tree; } ;


 int FUNC_0 (struct page*) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 int VAR_1 ;
 int FUNC_2 (struct page*) ;
 int FUNC_3 (struct page*) ;
 int FUNC_4 (struct page*) ;
 int FUNC_5 (struct page*) ;
 int FUNC_6 (int) ;
 int FUNC_7 (struct page*,int ) ;
 int VAR_2 ;
 scalar_t__ FUNC_8 (int) ;
 int FUNC_9 (struct page*) ;
 int FUNC_10 (struct page*) ;
 int FUNC_11 (int *,unsigned long,struct page*) ;
 int FUNC_12 (struct page*,unsigned long) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int *) ;
 TYPE_2__ VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_15 (int) ;

__attribute__((used)) static int FUNC_16(struct page *VAR_5, swp_entry_t VAR_6)
{
 int VAR_7;

 FUNC_6(!FUNC_2(VAR_5));
 FUNC_6(FUNC_4(VAR_5));
 FUNC_6(!FUNC_3(VAR_5));

 FUNC_9(VAR_5);
 FUNC_5(VAR_5);
 FUNC_12(VAR_5, VAR_6.val);

 FUNC_13(&VAR_3.tree_lock);
 VAR_7 = FUNC_11(&VAR_3.page_tree, VAR_6.val, VAR_5);
 if (FUNC_8(!VAR_7)) {
  VAR_4++;
  FUNC_7(VAR_5, VAR_1);
  FUNC_1(VAR_2);
 }
 FUNC_14(&VAR_3.tree_lock);

 if (FUNC_15(VAR_7)) {





  FUNC_6(VAR_7 == -VAR_0);
  FUNC_12(VAR_5, 0UL);
  FUNC_0(VAR_5);
  FUNC_10(VAR_5);
 }

 return VAR_7;
}
