
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int dummy; } ;
struct list_head {int dummy; } ;


 scalar_t__ FUNC_0 (struct page*) ;
 int FUNC_1 (struct page*) ;
 int FUNC_2 (struct page*) ;
 int FUNC_3 (struct page*,struct list_head*) ;
 scalar_t__ FUNC_4 (struct page*) ;
 int FUNC_5 (struct page*) ;
 scalar_t__ FUNC_6 (int) ;
 int FUNC_7 (struct page*) ;

__attribute__((used)) static int FUNC_8(struct page *VAR_0, struct list_head *VAR_1)
{
 if (!VAR_0 || FUNC_0(VAR_0))


  return 0;

 FUNC_2(VAR_0);
 FUNC_1(VAR_0);
 FUNC_5(VAR_0);
 FUNC_7(VAR_0);

 if (FUNC_4(VAR_0)) {
  int VAR_2 = FUNC_3(VAR_0, VAR_1);
  if (FUNC_6(VAR_2))
   return VAR_2;
 }
 return 0;
}
