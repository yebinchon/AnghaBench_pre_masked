
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int dummy; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 char* FUNC_0 (struct page*,int ) ;
 int FUNC_1 (char*,int ) ;
 int FUNC_2 (char*,char*,size_t) ;

void
FUNC_3(char *VAR_4, struct page **VAR_5, size_t VAR_6, size_t VAR_7)
{
 struct page **VAR_8;
 char *VAR_9;
 size_t VAR_10;

 VAR_8 = VAR_5 + (VAR_6 >> VAR_2);
 VAR_6 &= ~VAR_1;

 do {
  VAR_10 = VAR_3 - VAR_6;
  if (VAR_10 > VAR_7)
   VAR_10 = VAR_7;

  VAR_9 = FUNC_0(*VAR_8, VAR_0);
  FUNC_2(VAR_4, VAR_9 + VAR_6, VAR_10);
  FUNC_1(VAR_9, VAR_0);

  VAR_6 += VAR_10;
  if (VAR_6 == VAR_3) {
   VAR_6 = 0;
   VAR_8++;
  }
  VAR_4 += VAR_10;

 } while ((VAR_7 -= VAR_10) != 0);
}
