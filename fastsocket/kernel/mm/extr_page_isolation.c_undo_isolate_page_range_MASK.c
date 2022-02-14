
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int dummy; } ;
typedef int start_pfn ;
typedef int end_pfn ;


 int FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 struct page* FUNC_1 (unsigned long,int) ;
 scalar_t__ FUNC_2 (struct page*) ;
 int VAR_1 ;
 int FUNC_3 (struct page*) ;

int
FUNC_4(unsigned long VAR_2, unsigned long VAR_3)
{
 unsigned long VAR_4;
 struct page *VAR_5;
 FUNC_0((VAR_2) & (VAR_1 - 1));
 FUNC_0((VAR_3) & (VAR_1 - 1));
 for (VAR_4 = VAR_2;
      VAR_4 < VAR_3;
      VAR_4 += VAR_1) {
  VAR_5 = FUNC_1(VAR_4, VAR_1);
  if (!VAR_5 || FUNC_2(VAR_5) != VAR_0)
   continue;
  FUNC_3(VAR_5);
 }
 return 0;
}
