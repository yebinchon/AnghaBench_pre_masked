
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int val; } ;
typedef TYPE_1__ swp_entry_t ;
struct page {int dummy; } ;


 int FUNC_0 (struct page*) ;
 int FUNC_1 (struct page*) ;
 int FUNC_2 (struct page*) ;
 int FUNC_3 (struct page*) ;
 int FUNC_4 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_5 (struct page*,TYPE_1__,int) ;
 TYPE_1__ FUNC_6 () ;
 int FUNC_7 (struct page*) ;
 int FUNC_8 (TYPE_1__,int *) ;
 scalar_t__ FUNC_9 (int ) ;

int FUNC_10(struct page *VAR_3)
{
 swp_entry_t VAR_4;
 int VAR_5;

 FUNC_4(!FUNC_0(VAR_3));
 FUNC_4(!FUNC_2(VAR_3));

 VAR_4 = FUNC_6();
 if (!VAR_4.val)
  return 0;

 if (FUNC_9(FUNC_1(VAR_3)))
  if (FUNC_9(FUNC_7(VAR_3))) {
   FUNC_8(VAR_4, ((void*)0));
   return 0;
  }
 VAR_5 = FUNC_5(VAR_3, VAR_4,
   VAR_0|VAR_1|VAR_2);

 if (!VAR_5) {
  FUNC_3(VAR_3);
  return 1;
 } else {




  FUNC_8(VAR_4, ((void*)0));
  return 0;
 }
}
