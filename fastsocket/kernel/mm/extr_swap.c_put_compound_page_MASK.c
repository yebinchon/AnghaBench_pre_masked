
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int _count; int _mapcount; struct page* first_page; } ;


 scalar_t__ FUNC_0 (struct page*) ;
 scalar_t__ FUNC_1 (struct page*) ;
 int FUNC_2 (struct page*) ;
 int FUNC_3 (int) ;
 int FUNC_4 (struct page*) ;
 int FUNC_5 (struct page*) ;
 int FUNC_6 (int *) ;
 scalar_t__ FUNC_7 (int *) ;
 unsigned long FUNC_8 (struct page*) ;
 struct page* FUNC_9 (struct page*) ;
 int FUNC_10 (struct page*,unsigned long) ;
 scalar_t__ FUNC_11 (struct page*) ;
 scalar_t__ FUNC_12 (int) ;
 scalar_t__ FUNC_13 (struct page*) ;
 scalar_t__ FUNC_14 (struct page*) ;
 scalar_t__ FUNC_15 (int) ;

__attribute__((used)) static void FUNC_16(struct page *VAR_0)
{
 if (FUNC_15(FUNC_2(VAR_0))) {

  struct page *VAR_1 = FUNC_9(VAR_0);
  if (FUNC_12(VAR_0 != VAR_1 &&
      FUNC_11(VAR_1))) {
   unsigned long VAR_2;
   if (FUNC_1(VAR_1)) {
    if (FUNC_2(VAR_0)) {
     if (FUNC_14(VAR_1))
      FUNC_3(1);

     FUNC_6(&VAR_0->_mapcount);
     goto skip_lock_tail;
    } else
     goto skip_lock;
   }






   VAR_2 = FUNC_8(VAR_1);
   if (FUNC_15(!FUNC_2(VAR_0))) {

    FUNC_10(VAR_1, VAR_2);
skip_lock:
    if (FUNC_14(VAR_1))
     FUNC_5(VAR_1);
out_put_single:
    if (FUNC_14(VAR_0))
     FUNC_5(VAR_0);
    return;
   }
   FUNC_3(VAR_1 != VAR_0->first_page);






   if (FUNC_14(VAR_1))
    FUNC_3(1);

   FUNC_3(FUNC_13(VAR_0) <= 0);
   FUNC_6(&VAR_0->_mapcount);
   FUNC_3(FUNC_7(&VAR_1->_count) <= 0);
   FUNC_3(FUNC_7(&VAR_0->_count) != 0);
   FUNC_10(VAR_1, VAR_2);

skip_lock_tail:
   if (FUNC_14(VAR_1)) {
    if (FUNC_0(VAR_1))
     FUNC_4(VAR_1);
    else
     FUNC_5(VAR_1);
   }
  } else {

   FUNC_3(FUNC_2(VAR_0));
   goto out_put_single;
  }
 } else if (FUNC_14(VAR_0)) {
  if (FUNC_0(VAR_0))
   FUNC_4(VAR_0);
  else
   FUNC_5(VAR_0);
 }
}
