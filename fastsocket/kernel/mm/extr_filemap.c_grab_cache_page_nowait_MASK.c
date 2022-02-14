
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int dummy; } ;
struct address_space {int dummy; } ;
typedef int pgoff_t ;


 int VAR_0 ;
 int VAR_1 ;
 struct page* FUNC_0 (int) ;
 scalar_t__ FUNC_1 (struct page*,struct address_space*,int ,int ) ;
 struct page* FUNC_2 (struct address_space*,int ) ;
 int FUNC_3 (struct address_space*) ;
 int FUNC_4 (struct page*) ;
 scalar_t__ FUNC_5 (struct page*) ;

struct page *
FUNC_6(struct address_space *VAR_2, pgoff_t VAR_3)
{
 struct page *VAR_4 = FUNC_2(VAR_2, VAR_3);

 if (VAR_4) {
  if (FUNC_5(VAR_4))
   return VAR_4;
  FUNC_4(VAR_4);
  return ((void*)0);
 }
 VAR_4 = FUNC_0(FUNC_3(VAR_2) & ~VAR_1);
 if (VAR_4 && FUNC_1(VAR_4, VAR_2, VAR_3, VAR_0)) {
  FUNC_4(VAR_4);
  VAR_4 = ((void*)0);
 }
 return VAR_4;
}
