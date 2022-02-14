
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {struct address_space* mapping; } ;
struct address_space {int backing_dev_info; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct page*) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (struct page*,int ) ;
 scalar_t__ FUNC_3 (struct address_space*) ;
 int FUNC_4 (unsigned int) ;

void FUNC_5(struct page *VAR_2, unsigned int VAR_3)
{
 if (FUNC_0(VAR_2)) {
  struct address_space *VAR_4 = VAR_2->mapping;
  if (VAR_4 && FUNC_3(VAR_4)) {
   FUNC_2(VAR_2, VAR_1);
   FUNC_1(VAR_4->backing_dev_info,
     VAR_0);
   if (VAR_3)
    FUNC_4(VAR_3);
  }
 }
}
