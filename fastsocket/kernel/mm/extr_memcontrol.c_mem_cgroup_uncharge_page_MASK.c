
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {scalar_t__ mapping; } ;


 int VAR_0 ;
 int FUNC_0 (struct page*) ;
 int FUNC_1 (struct page*,int ) ;
 scalar_t__ FUNC_2 (struct page*) ;

void FUNC_3(struct page *VAR_1)
{

 if (FUNC_2(VAR_1))
  return;
 if (VAR_1->mapping && !FUNC_0(VAR_1))
  return;
 FUNC_1(VAR_1, VAR_0);
}
