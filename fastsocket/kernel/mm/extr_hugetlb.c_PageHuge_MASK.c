
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int dummy; } ;
typedef int compound_page_dtor ;


 int FUNC_0 (struct page*) ;
 struct page* FUNC_1 (struct page*) ;
 int * VAR_0 ;
 int * FUNC_2 (struct page*) ;

int FUNC_3(struct page *VAR_1)
{
 compound_page_dtor *VAR_2;

 if (!FUNC_0(VAR_1))
  return 0;

 VAR_1 = FUNC_1(VAR_1);
 VAR_2 = FUNC_2(VAR_1);

 return VAR_2 == VAR_0;
}
