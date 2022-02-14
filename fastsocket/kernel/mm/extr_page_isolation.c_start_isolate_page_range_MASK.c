
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int dummy; } ;
typedef int start_pfn ;
typedef int end_pfn ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 struct page* FUNC_1 (unsigned long,int) ;
 int VAR_1 ;
 int FUNC_2 (unsigned long) ;
 scalar_t__ FUNC_3 (struct page*) ;
 int FUNC_4 (int ) ;

int
FUNC_5(unsigned long VAR_2, unsigned long VAR_3)
{
 unsigned long VAR_4;
 unsigned long VAR_5;
 struct page *VAR_6;

 FUNC_0((VAR_2) & (VAR_1 - 1));
 FUNC_0((VAR_3) & (VAR_1 - 1));

 for (VAR_4 = VAR_2;
      VAR_4 < VAR_3;
      VAR_4 += VAR_1) {
  VAR_6 = FUNC_1(VAR_4, VAR_1);
  if (VAR_6 && FUNC_3(VAR_6)) {
   VAR_5 = VAR_4;
   goto undo;
  }
 }
 return 0;
undo:
 for (VAR_4 = VAR_2;
      VAR_4 < VAR_5;
      VAR_4 += VAR_1)
  FUNC_4(FUNC_2(VAR_4));

 return -VAR_0;
}
