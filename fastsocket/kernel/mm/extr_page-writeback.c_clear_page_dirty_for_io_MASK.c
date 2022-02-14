
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int dummy; } ;
struct address_space {int backing_dev_info; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int VAR_1 ;
 int FUNC_1 (struct page*) ;
 int FUNC_2 (struct page*) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (struct page*,int ) ;
 scalar_t__ FUNC_5 (struct address_space*) ;
 struct address_space* FUNC_6 (struct page*) ;
 scalar_t__ FUNC_7 (struct page*) ;
 int FUNC_8 (struct page*) ;

int FUNC_9(struct page *VAR_2)
{
 struct address_space *VAR_3 = FUNC_6(VAR_2);

 FUNC_0(!FUNC_1(VAR_2));

 if (VAR_3 && FUNC_5(VAR_3)) {
  if (FUNC_7(VAR_2))
   FUNC_8(VAR_2);
  if (FUNC_2(VAR_2)) {
   FUNC_4(VAR_2, VAR_1);
   FUNC_3(VAR_3->backing_dev_info,
     VAR_0);
   return 1;
  }
  return 0;
 }
 return FUNC_2(VAR_2);
}
