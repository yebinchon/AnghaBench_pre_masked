
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct page*) ;
 scalar_t__ FUNC_1 (struct page*) ;
 scalar_t__ FUNC_2 (struct page*) ;
 scalar_t__ FUNC_3 (struct page*) ;
 int FUNC_4 (struct page*) ;
 int FUNC_5 (struct page*,int) ;
 int FUNC_6 (int,int *) ;
 int FUNC_7 (int *) ;
 struct page* FUNC_8 (struct page*) ;
 int FUNC_9 (struct page*) ;
 int FUNC_10 (struct page*) ;
 int FUNC_11 (struct page*,unsigned long,int) ;
 int VAR_1 ;
 unsigned long FUNC_12 (struct page*) ;
 int FUNC_13 (char*,unsigned long) ;
 int FUNC_14 (struct page*) ;
 int FUNC_15 (struct page*,int) ;
 int FUNC_16 (struct page*) ;
 scalar_t__ FUNC_17 (int ) ;

int FUNC_18(struct page *VAR_2, int VAR_3)
{
 int VAR_4;
 unsigned long VAR_5 = FUNC_12(VAR_2);
 struct page *VAR_6 = FUNC_8(VAR_2);

 if (FUNC_1(VAR_2)) {
  FUNC_13("soft offline: %#lx page already poisoned\n", VAR_5);
  return -VAR_0;
 }
 if (!FUNC_2(VAR_2) && FUNC_3(VAR_6)) {
  if (FUNC_0(VAR_6) && FUNC_17(FUNC_16(VAR_6))) {
   FUNC_13("soft offline: %#lx: failed to split THP\n",
    VAR_5);
   return -VAR_0;
  }
 }

 VAR_4 = FUNC_11(VAR_2, VAR_5, VAR_3);
 if (VAR_4 < 0)
  return VAR_4;
 if (VAR_4) {
  if (FUNC_2(VAR_2))
   VAR_4 = FUNC_15(VAR_2, VAR_3);
  else
   VAR_4 = FUNC_5(VAR_2, VAR_3);
 } else {
  if (FUNC_2(VAR_2)) {
   FUNC_14(VAR_6);
   FUNC_10(VAR_6);
   FUNC_6(1 << FUNC_9(VAR_6),
     &VAR_1);
  } else {
   FUNC_4(VAR_2);
   FUNC_7(&VAR_1);
  }
 }
 return VAR_4;
}
