
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {struct page* first_page; } ;


 int FUNC_0 (struct page*) ;
 int FUNC_1 (struct page*) ;
 int VAR_0 ;
 int FUNC_2 (struct page*,unsigned long) ;
 int FUNC_3 (struct page*,int ) ;
 int FUNC_4 (struct page*,int ) ;

void FUNC_5(struct page *VAR_1, unsigned long VAR_2)
{
 int VAR_3;
 int VAR_4 = 1 << VAR_2;

 FUNC_3(VAR_1, VAR_0);
 FUNC_2(VAR_1, VAR_2);
 FUNC_0(VAR_1);
 for (VAR_3 = 1; VAR_3 < VAR_4; VAR_3++) {
  struct page *VAR_5 = VAR_1 + VAR_3;
  FUNC_1(VAR_5);
  FUNC_4(VAR_5, 0);
  VAR_5->first_page = VAR_1;
 }
}
