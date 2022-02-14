
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int shadow; } ;


 int FUNC_0 (struct page*) ;
 int FUNC_1 (int) ;
 scalar_t__ FUNC_2 (struct page*) ;
 int FUNC_3 (struct page*) ;
 int FUNC_4 (struct page*) ;
 struct page* FUNC_5 (int ) ;

void FUNC_6(struct page *VAR_0, unsigned int VAR_1)
{
 int VAR_2;

 FUNC_1(FUNC_0(VAR_0));
 FUNC_1(!FUNC_3(VAR_0));
 for (VAR_2 = 1; VAR_2 < (1 << VAR_1); VAR_2++)
  FUNC_4(VAR_0 + VAR_2);
}
