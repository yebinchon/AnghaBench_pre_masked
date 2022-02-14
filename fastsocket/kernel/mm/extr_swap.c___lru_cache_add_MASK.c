
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pagevec {int dummy; } ;
struct page {int dummy; } ;
typedef enum lru_list { ____Placeholder_lru_list } lru_list ;


 int FUNC_0 (struct pagevec*,int) ;
 struct pagevec* FUNC_1 (int ) ;
 int VAR_0 ;
 int FUNC_2 (struct page*) ;
 int FUNC_3 (struct pagevec*,struct page*) ;
 int FUNC_4 (int ) ;

void FUNC_5(struct page *VAR_1, enum lru_list VAR_2)
{
 struct pagevec *VAR_3 = &FUNC_1(VAR_0)[VAR_2];

 FUNC_2(VAR_1);
 if (!FUNC_3(VAR_3, VAR_1))
  FUNC_0(VAR_3, VAR_2);
 FUNC_4(VAR_0);
}
