
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int dummy; } ;
struct address_space {int dummy; } ;
typedef enum migrate_mode { ____Placeholder_migrate_mode } migrate_mode ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct page*) ;
 int FUNC_2 (struct page*,struct page*) ;
 int FUNC_3 (struct address_space*,struct page*,struct page*,int *,int) ;

int FUNC_4(struct address_space *VAR_0,
  struct page *VAR_1, struct page *VAR_2, enum migrate_mode VAR_3)
{
 int VAR_4;

 FUNC_0(FUNC_1(VAR_2));

 VAR_4 = FUNC_3(VAR_0, VAR_1, VAR_2, ((void*)0), VAR_3);

 if (VAR_4)
  return VAR_4;

 FUNC_2(VAR_1, VAR_2);
 return 0;
}
