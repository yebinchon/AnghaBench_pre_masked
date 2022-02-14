
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int dummy; } ;
typedef enum lru_list { ____Placeholder_lru_list } lru_list ;


 int FUNC_0 (struct page*) ;
 int FUNC_1 (struct page*) ;
 int FUNC_2 (struct page*) ;
 scalar_t__ FUNC_3 (struct page*) ;
 int FUNC_4 (struct page*) ;
 int FUNC_5 (int) ;
 int FUNC_6 (struct page*,int) ;

void FUNC_7(struct page *VAR_0, enum lru_list VAR_1)
{
 if (FUNC_2(VAR_0)) {
  FUNC_5(FUNC_4(VAR_0));
  FUNC_0(VAR_0);
 } else if (FUNC_4(VAR_0)) {
  FUNC_5(FUNC_2(VAR_0));
  FUNC_1(VAR_0);
 }

 FUNC_5(FUNC_3(VAR_0) || FUNC_2(VAR_0) || FUNC_4(VAR_0));
 FUNC_6(VAR_0, VAR_1);
}
