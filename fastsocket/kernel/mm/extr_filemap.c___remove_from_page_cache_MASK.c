
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {struct address_space* mapping; int index; } ;
struct address_space {int backing_dev_info; int nrpages; int page_tree; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (struct page*) ;
 scalar_t__ FUNC_2 (struct page*) ;
 int FUNC_3 (struct page*,int ) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (struct page*,int ) ;
 scalar_t__ FUNC_6 (struct address_space*) ;
 int FUNC_7 (struct page*) ;
 int FUNC_8 (int *,int ) ;

void FUNC_9(struct page *VAR_4)
{
 struct address_space *VAR_5 = VAR_4->mapping;

 FUNC_8(&VAR_5->page_tree, VAR_4->index);
 VAR_4->mapping = ((void*)0);

 VAR_5->nrpages--;
 FUNC_3(VAR_4, VAR_2);
 if (FUNC_2(VAR_4))
  FUNC_3(VAR_4, VAR_3);
 FUNC_0(FUNC_7(VAR_4));
 if (FUNC_1(VAR_4) && FUNC_6(VAR_5)) {
  FUNC_5(VAR_4, VAR_1);
  FUNC_4(VAR_5->backing_dev_info, VAR_0);
 }
}
