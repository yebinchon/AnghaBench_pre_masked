
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int pte_t ;
typedef int pmd_t ;
struct TYPE_5__ {int page_table_lock; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 TYPE_1__ VAR_1 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (TYPE_1__*,int *,int *) ;
 int FUNC_4 (int ) ;
 int * FUNC_5 (TYPE_1__*,unsigned long) ;
 int FUNC_6 (TYPE_1__*,int *) ;
 int FUNC_7 () ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;

int FUNC_10(pmd_t *VAR_2, unsigned long VAR_3)
{
 pte_t *VAR_4 = FUNC_5(&VAR_1, VAR_3);
 if (!VAR_4)
  return -VAR_0;

 FUNC_7();

 FUNC_8(&VAR_1.page_table_lock);
 if (FUNC_1(FUNC_2(*VAR_2))) {
  FUNC_3(&VAR_1, VAR_2, VAR_4);
  VAR_4 = ((void*)0);
 } else
  FUNC_0(FUNC_4(*VAR_2));
 FUNC_9(&VAR_1.page_table_lock);
 if (VAR_4)
  FUNC_6(&VAR_1, VAR_4);
 return 0;
}
