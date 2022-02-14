
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int lru; } ;
struct list_head {int dummy; } ;
struct address_space {int dummy; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct list_head*) ;
 struct page* FUNC_2 (struct list_head*) ;
 int FUNC_3 (struct address_space*,struct page*) ;

__attribute__((used)) static void FUNC_4(struct address_space *VAR_0,
           struct list_head *VAR_1)
{
 struct page *VAR_2;

 while (!FUNC_1(VAR_1)) {
  VAR_2 = FUNC_2(VAR_1);
  FUNC_0(&VAR_2->lru);
  FUNC_3(VAR_0, VAR_2);
 }
}
