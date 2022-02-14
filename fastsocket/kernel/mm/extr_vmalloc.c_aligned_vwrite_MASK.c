
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int dummy; } ;


 int VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long VAR_2 ;
 void* FUNC_0 (struct page*,int ) ;
 int FUNC_1 (void*,int ) ;
 int FUNC_2 (void*,char*,unsigned long) ;
 struct page* FUNC_3 (char*) ;

__attribute__((used)) static int FUNC_4(char *VAR_3, char *VAR_4, unsigned long VAR_5)
{
 struct page *VAR_6;
 int VAR_7 = 0;

 while (VAR_5) {
  unsigned long VAR_8, VAR_9;

  VAR_8 = (unsigned long)VAR_4 & ~VAR_1;
  VAR_9 = VAR_2 - VAR_8;
  if (VAR_9 > VAR_5)
   VAR_9 = VAR_5;
  VAR_6 = FUNC_3(VAR_4);







  if (VAR_6) {




   void *VAR_10 = FUNC_0(VAR_6, VAR_0);
   FUNC_2(VAR_10 + VAR_8, VAR_3, VAR_9);
   FUNC_1(VAR_10, VAR_0);
  }
  VAR_4 += VAR_9;
  VAR_3 += VAR_9;
  VAR_7 += VAR_9;
  VAR_5 -= VAR_9;
 }
 return VAR_7;
}
