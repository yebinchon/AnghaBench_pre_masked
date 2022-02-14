
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int dummy; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 int FUNC_0 (struct page*) ;
 char* FUNC_1 (struct page*,int ) ;
 int FUNC_2 (char*,int ) ;
 int FUNC_3 (char*,char const*,size_t) ;

__attribute__((used)) static void
FUNC_4(struct page **VAR_4, size_t VAR_5, const char *VAR_6, size_t VAR_7)
{
 struct page **VAR_8;
 char *VAR_9;
 size_t VAR_10;

 VAR_8 = VAR_4 + (VAR_5 >> VAR_2);
 VAR_5 &= ~VAR_1;

 for (;;) {
  VAR_10 = VAR_3 - VAR_5;
  if (VAR_10 > VAR_7)
   VAR_10 = VAR_7;

  VAR_9 = FUNC_1(*VAR_8, VAR_0);
  FUNC_3(VAR_9 + VAR_5, VAR_6, VAR_10);
  FUNC_2(VAR_9, VAR_0);

  VAR_7 -= VAR_10;
  if (VAR_7 == 0)
   break;

  VAR_5 += VAR_10;
  if (VAR_5 == VAR_3) {
   FUNC_0(*VAR_8);
   VAR_5 = 0;
   VAR_8++;
  }
  VAR_6 += VAR_10;
 }
 FUNC_0(*VAR_8);
}
