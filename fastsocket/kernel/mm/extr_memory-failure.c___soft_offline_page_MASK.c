
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int flags; int lru; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_1 (struct page*) ;
 int FUNC_2 (struct page*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct page*,scalar_t__) ;
 int FUNC_5 (struct page*) ;
 int FUNC_6 (struct page*) ;
 int FUNC_7 (int *,int *) ;
 int FUNC_8 (struct page*) ;
 int FUNC_9 (int *,int ,int ,int,int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_10 (struct page*) ;
 scalar_t__ FUNC_11 (struct page*) ;
 unsigned long FUNC_12 (struct page*) ;
 int VAR_7 ;
 int FUNC_13 (char*,unsigned long,...) ;
 int FUNC_14 (struct page*) ;
 int FUNC_15 (struct page*) ;
 int FUNC_16 (struct page*) ;

__attribute__((used)) static int FUNC_17(struct page *VAR_8, int VAR_9)
{
 int VAR_10;
 unsigned long VAR_11 = FUNC_12(VAR_8);







 FUNC_8(VAR_8);
 FUNC_16(VAR_8);
 if (FUNC_1(VAR_8)) {
  FUNC_15(VAR_8);
  FUNC_14(VAR_8);
  FUNC_13("soft offline: %#lx page already poisoned\n", VAR_11);
  return -VAR_0;
 }




 VAR_10 = FUNC_5(VAR_8);
 FUNC_15(VAR_8);




 if (VAR_10 == 1) {
  FUNC_14(VAR_8);
  FUNC_13("soft_offline: %#lx: invalidated\n", VAR_11);
  FUNC_2(VAR_8);
  FUNC_3(&VAR_6);
  return 0;
 }






 VAR_10 = FUNC_6(VAR_8);




 FUNC_14(VAR_8);
 if (!VAR_10) {
  FUNC_0(VAR_7);
  FUNC_4(VAR_8, VAR_4 +
         FUNC_11(VAR_8));
  FUNC_7(&VAR_8->lru, &VAR_7);
  VAR_10 = FUNC_9(&VAR_7, VAR_5, VAR_3,
       0, VAR_2);
  if (VAR_10) {
   FUNC_13("soft offline: %#lx: migration failed %d, type %lx\n",
    VAR_11, VAR_10, VAR_8->flags);
   if (VAR_10 > 0)
    VAR_10 = -VAR_1;
  } else {
   FUNC_2(VAR_8);
   FUNC_3(&VAR_6);
  }
 } else {
  FUNC_13("soft offline: %#lx: isolation failed: %d, page count %d, type %lx\n",
   VAR_11, VAR_10, FUNC_10(VAR_8), VAR_8->flags);
 }
 return VAR_10;
}
