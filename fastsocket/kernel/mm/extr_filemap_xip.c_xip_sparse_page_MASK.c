
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct page* VAR_2 ;
 struct page* FUNC_0 (int) ;

__attribute__((used)) static struct page *FUNC_1(void)
{
 if (!VAR_2) {
  struct page *VAR_3 = FUNC_0(VAR_0 | VAR_1);

  if (VAR_3)
   VAR_2 = VAR_3;
 }
 return VAR_2;
}
