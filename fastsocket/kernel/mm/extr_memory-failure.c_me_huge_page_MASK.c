
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct page*) ;
 int VAR_1 ;
 struct page* FUNC_1 (struct page*) ;
 int FUNC_2 (struct page*) ;
 scalar_t__ FUNC_3 (struct page*) ;

__attribute__((used)) static int FUNC_4(struct page *VAR_2, unsigned long VAR_3)
{
 int VAR_4 = 0;
 struct page *VAR_5 = FUNC_1(VAR_2);
 if (!(FUNC_3(VAR_5) || FUNC_0(VAR_5))) {
  VAR_4 = FUNC_2(VAR_5);
  if (!VAR_4)
   return VAR_1;
 }
 return VAR_0;
}
