
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int dummy; } ;
struct address_space {int dummy; } ;
typedef int pgoff_t ;
typedef int gfp_t ;


 int VAR_0 ;
 int VAR_1 ;
 struct page* FUNC_0 (int) ;
 int FUNC_1 (struct page*,struct address_space*,int ,int) ;
 struct page* FUNC_2 (struct address_space*,int ) ;
 int FUNC_3 (struct page*) ;
 scalar_t__ FUNC_4 (int) ;

struct page *FUNC_5(struct address_space *VAR_2,
  pgoff_t VAR_3, gfp_t VAR_4)
{
 struct page *VAR_5;
 int VAR_6;
repeat:
 VAR_5 = FUNC_2(VAR_2, VAR_3);
 if (!VAR_5) {
  VAR_5 = FUNC_0(VAR_4);
  if (!VAR_5)
   return ((void*)0);






  VAR_6 = FUNC_1(VAR_5, VAR_2, VAR_3,
   (VAR_4 & VAR_1));
  if (FUNC_4(VAR_6)) {
   FUNC_3(VAR_5);
   VAR_5 = ((void*)0);
   if (VAR_6 == -VAR_0)
    goto repeat;
  }
 }
 return VAR_5;
}
