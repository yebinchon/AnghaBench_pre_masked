
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int lru; } ;
struct anon_vma {int dummy; } ;
typedef struct page* (* new_page_t ) (struct page*,unsigned long,int**) ;
typedef enum migrate_mode { ____Placeholder_migrate_mode } migrate_mode ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct page*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (struct anon_vma*) ;
 int FUNC_2 (struct anon_vma*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct page*) ;
 int FUNC_5 (struct page*,struct page*,int,int) ;
 struct anon_vma* FUNC_6 (struct page*) ;
 int FUNC_7 (struct page*) ;
 int FUNC_8 (struct page*) ;
 int FUNC_9 (struct anon_vma*) ;
 int FUNC_10 (struct page*) ;
 int FUNC_11 (struct page*,struct page*) ;
 int FUNC_12 (struct page*,int) ;
 int FUNC_13 (struct page*) ;
 int FUNC_14 (struct page*) ;

__attribute__((used)) static int FUNC_15(new_page_t VAR_6,
    unsigned long VAR_7, struct page *VAR_8,
    int VAR_9, bool VAR_10,
    enum migrate_mode VAR_11)
{
 int VAR_12 = 0;
 int *VAR_13 = ((void*)0);
 struct page *VAR_14 = VAR_6(VAR_8, VAR_7, &VAR_13);
 struct anon_vma *VAR_15 = ((void*)0);

 if (!VAR_14)
  return -VAR_1;

 VAR_12 = -VAR_0;

 if (!FUNC_13(VAR_8)) {
  if (!VAR_9 || VAR_11 != VAR_2)
   goto out;
  FUNC_4(VAR_8);
 }

 if (FUNC_0(VAR_8)) {
  VAR_15 = FUNC_6(VAR_8);
  if (VAR_15) {
   FUNC_2(VAR_15);
   FUNC_9(VAR_15);
  }
 }

 FUNC_12(VAR_8, VAR_5|VAR_4|VAR_3);

 if (!FUNC_7(VAR_8))
  VAR_12 = FUNC_5(VAR_14, VAR_8, 1, VAR_11);

 if (VAR_12)
  FUNC_11(VAR_8, VAR_8);

 if (VAR_15)
  FUNC_1(VAR_15);
out:
 FUNC_14(VAR_8);

 if (VAR_12 != -VAR_0) {
  FUNC_3(&VAR_8->lru);
  FUNC_10(VAR_8);
 }

 FUNC_10(VAR_14);

 if (VAR_13) {
  if (VAR_12)
   *VAR_13 = VAR_12;
  else
   *VAR_13 = FUNC_8(VAR_14);
 }
 return VAR_12;
}
