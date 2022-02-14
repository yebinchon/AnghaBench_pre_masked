
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {struct page* first_page; } ;


 int FUNC_0 (struct page*) ;
 int FUNC_1 (struct page*) ;
 struct page* FUNC_2 (struct page*,struct page*,int) ;
 int FUNC_3 (struct page*,unsigned long) ;
 int FUNC_4 (struct page*,int ) ;

__attribute__((used)) static void FUNC_5(struct page *VAR_0, unsigned long VAR_1)
{
 int VAR_2;
 int VAR_3 = 1 << VAR_1;
 struct page *VAR_4 = VAR_0 + 1;


 FUNC_3(VAR_0, VAR_1);
 FUNC_0(VAR_0);
 for (VAR_2 = 1; VAR_2 < VAR_3; VAR_2++, VAR_4 = FUNC_2(VAR_4, VAR_0, VAR_2)) {
  FUNC_1(VAR_4);
  FUNC_4(VAR_4, 0);
  VAR_4->first_page = VAR_0;
 }
}
