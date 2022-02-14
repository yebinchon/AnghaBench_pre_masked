
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {struct address_space* mapping; } ;
struct address_space {int dummy; } ;


 int FUNC_0 () ;
 int FUNC_1 (struct page*,int ) ;
 int FUNC_2 (struct page*) ;
 scalar_t__ FUNC_3 (struct page*) ;
 int FUNC_4 (struct page*) ;
 int FUNC_5 (struct page*) ;

__attribute__((used)) static void FUNC_6(struct address_space *VAR_0,
          struct page *VAR_1)
{
 if (FUNC_3(VAR_1)) {
  if (!FUNC_4(VAR_1))
   FUNC_0();
  VAR_1->mapping = VAR_0;
  FUNC_1(VAR_1, 0);
  VAR_1->mapping = ((void*)0);
  FUNC_5(VAR_1);
 }
 FUNC_2(VAR_1);
}
