
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int lru; } ;
typedef struct page* (* new_page_t ) (struct page*,unsigned long,int**) ;
typedef enum migrate_mode { ____Placeholder_migrate_mode } migrate_mode ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (struct page*) ;
 int FUNC_1 (struct page*,struct page*,int,int,int) ;
 int FUNC_2 (struct page*,scalar_t__) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct page*) ;
 scalar_t__ FUNC_5 (struct page*) ;
 int FUNC_6 (struct page*) ;
 int FUNC_7 (struct page*) ;
 int FUNC_8 (struct page*) ;
 scalar_t__ FUNC_9 (int ) ;

__attribute__((used)) static int FUNC_10(new_page_t VAR_3, unsigned long VAR_4,
   struct page *VAR_5, int VAR_6, bool VAR_7,
   enum migrate_mode VAR_8)
{
 int VAR_9 = 0;
 int *VAR_10 = ((void*)0);
 struct page *VAR_11 = VAR_3(VAR_5, VAR_4, &VAR_10);

 if (!VAR_11)
  return -VAR_1;

 if (FUNC_4(VAR_5) == 1) {

  goto out;
 }

 if (FUNC_9(FUNC_0(VAR_5)))
  if (FUNC_9(FUNC_8(VAR_5)))
   goto out;

 VAR_9 = FUNC_1(VAR_5, VAR_11, VAR_6, VAR_7, VAR_8);
out:
 if (VAR_9 != -VAR_0) {






   FUNC_3(&VAR_5->lru);
  FUNC_2(VAR_5, VAR_2 +
    FUNC_5(VAR_5));
  FUNC_7(VAR_5);
 }




 FUNC_7(VAR_11);
 if (VAR_10) {
  if (VAR_9)
   *VAR_10 = VAR_9;
  else
   *VAR_10 = FUNC_6(VAR_11);
 }
 return VAR_9;
}
