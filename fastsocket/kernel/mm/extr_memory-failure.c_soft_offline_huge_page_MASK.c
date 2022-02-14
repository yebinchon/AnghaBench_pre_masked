
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
 scalar_t__ FUNC_1 (struct page*) ;
 int FUNC_2 (int,int *) ;
 struct page* FUNC_3 (struct page*) ;
 int FUNC_4 (struct page*) ;
 int FUNC_5 (struct page*) ;
 int FUNC_6 (int *,int *) ;
 int FUNC_7 (struct page*) ;
 int FUNC_8 (int *,int ,int ,int,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 unsigned long FUNC_9 (struct page*) ;
 int VAR_6 ;
 int FUNC_10 (char*,unsigned long,...) ;
 int FUNC_11 (struct page*) ;
 int FUNC_12 (struct page*) ;
 int FUNC_13 (struct page*) ;

__attribute__((used)) static int FUNC_14(struct page *VAR_7, int VAR_8)
{
 int VAR_9;
 unsigned long VAR_10 = FUNC_9(VAR_7);
 struct page *VAR_11 = FUNC_3(VAR_7);
 FUNC_0(VAR_6);





 FUNC_7(VAR_11);
 if (FUNC_1(VAR_11)) {
  FUNC_13(VAR_11);
  FUNC_11(VAR_11);
  FUNC_10("soft offline: %#lx hugepage already poisoned\n", VAR_10);
  return -VAR_0;
 }
 FUNC_13(VAR_11);



 FUNC_6(&VAR_11->lru, &VAR_6);
 VAR_9 = FUNC_8(&VAR_6, VAR_4, VAR_3, 0,
    VAR_2);
 if (VAR_9) {
  FUNC_10("soft offline: %#lx: migration failed %d, type %lx\n",
   VAR_10, VAR_9, VAR_7->flags);
  if (VAR_9 > 0)
   VAR_9 = -VAR_1;
 } else {
  FUNC_12(VAR_11);
  FUNC_5(VAR_11);
  FUNC_2(1 << FUNC_4(VAR_11),
    &VAR_5);
 }
 return VAR_9;
}
