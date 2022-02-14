
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int val; } ;
typedef TYPE_1__ swp_entry_t ;
struct page {int dummy; } ;
struct TYPE_5__ {int tree_lock; } ;


 int FUNC_0 (struct page*) ;
 int FUNC_1 (struct page*) ;
 int FUNC_2 (struct page*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (TYPE_1__,struct page*) ;
 TYPE_2__ VAR_0 ;

void FUNC_6(struct page *VAR_1)
{
 swp_entry_t VAR_2;

 VAR_2.val = FUNC_2(VAR_1);

 FUNC_3(&VAR_0.tree_lock);
 FUNC_0(VAR_1);
 FUNC_4(&VAR_0.tree_lock);

 FUNC_5(VAR_2, VAR_1);
 FUNC_1(VAR_1);
}
