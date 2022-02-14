
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int _mapcount; } ;
struct address_space {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct page*) ;
 int FUNC_1 (struct page*) ;
 int FUNC_2 (struct page*) ;
 int FUNC_3 (struct page*,int ) ;
 int FUNC_4 (int,int *) ;
 int FUNC_5 (struct address_space*) ;
 int FUNC_6 (struct page*) ;
 int FUNC_7 (struct page*,int) ;
 int FUNC_8 (struct page*) ;
 struct address_space* FUNC_9 (struct page*) ;
 scalar_t__ FUNC_10 (struct page*) ;
 int FUNC_11 (struct page*) ;
 scalar_t__ FUNC_12 (int ) ;

void FUNC_13(struct page *VAR_3)
{
 struct address_space *VAR_4 = FUNC_9(VAR_3);


 if (!FUNC_4(-1, &VAR_3->_mapcount))
  return;
 if (VAR_4 && !FUNC_5(VAR_4) &&
     FUNC_10(VAR_3)) {
  FUNC_8(VAR_3);
  FUNC_11(VAR_3);
 }




 if (FUNC_12(FUNC_1(VAR_3)))
  return;
 if (FUNC_0(VAR_3)) {
  FUNC_6(VAR_3);
  if (!FUNC_2(VAR_3))
   FUNC_3(VAR_3, VAR_0);
  else
   FUNC_3(VAR_3,
           VAR_1);
 } else {
  FUNC_3(VAR_3, VAR_2);
  FUNC_7(VAR_3, -1);
 }
}
