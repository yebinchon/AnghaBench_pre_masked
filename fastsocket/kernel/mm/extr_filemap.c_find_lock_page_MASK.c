
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {scalar_t__ index; struct address_space* mapping; } ;
struct address_space {int dummy; } ;
typedef scalar_t__ pgoff_t ;


 int FUNC_0 (int) ;
 struct page* FUNC_1 (struct address_space*,scalar_t__) ;
 int FUNC_2 (struct page*) ;
 int FUNC_3 (struct page*) ;
 int FUNC_4 (struct page*) ;
 scalar_t__ FUNC_5 (int) ;
 int FUNC_6 (struct page*) ;

struct page *FUNC_7(struct address_space *VAR_0, pgoff_t VAR_1)
{
 struct page *VAR_2;

repeat:
 VAR_2 = FUNC_1(VAR_0, VAR_1);
 if (VAR_2 && !FUNC_4(VAR_2)) {
  FUNC_2(VAR_2);

  if (FUNC_5(VAR_2->mapping != VAR_0)) {
   FUNC_6(VAR_2);
   FUNC_3(VAR_2);
   goto repeat;
  }
  FUNC_0(VAR_2->index != VAR_1);
 }
 return VAR_2;
}
