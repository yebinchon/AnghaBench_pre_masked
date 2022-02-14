
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int mapping; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct page*,char*) ;
 int FUNC_2 (struct page*) ;
 int FUNC_3 (struct page*) ;
 scalar_t__ FUNC_4 (struct page*) ;
 int FUNC_5 (struct page*) ;
 int FUNC_6 (struct page*) ;

void FUNC_7(struct page *VAR_0)
{
 FUNC_0(!FUNC_2(VAR_0));
 FUNC_0(VAR_0->mapping);

 if (FUNC_4(VAR_0) && !FUNC_5(VAR_0))
  FUNC_1(VAR_0, "failed to free page");

 FUNC_6(VAR_0);
 FUNC_3(VAR_0);
}
