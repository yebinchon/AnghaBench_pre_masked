
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int dummy; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 int FUNC_1 (struct page*) ;
 char* FUNC_2 (struct page*,int ) ;
 int FUNC_3 (char*,int ) ;
 int FUNC_4 (char*,char*,size_t) ;

__attribute__((used)) static void
FUNC_5(struct page **VAR_5, size_t VAR_6,
  size_t VAR_7, size_t VAR_8)
{
 struct page **VAR_9, **VAR_10;
 char *VAR_11, *VAR_12;
 size_t VAR_13;

 FUNC_0(VAR_6 <= VAR_7);

 VAR_6 += VAR_8;
 VAR_7 += VAR_8;

 VAR_10 = VAR_5 + (VAR_6 >> VAR_3);
 VAR_9 = VAR_5 + (VAR_7 >> VAR_3);

 VAR_6 &= ~VAR_2;
 VAR_7 &= ~VAR_2;

 do {

  if (VAR_6 == 0) {
   VAR_6 = VAR_4;
   VAR_10--;
  }
  if (VAR_7 == 0) {
   VAR_7 = VAR_4;
   VAR_9--;
  }

  VAR_13 = VAR_8;
  if (VAR_13 > VAR_6)
   VAR_13 = VAR_6;
  if (VAR_13 > VAR_7)
   VAR_13 = VAR_7;
  VAR_6 -= VAR_13;
  VAR_7 -= VAR_13;

  VAR_12 = FUNC_2(*VAR_10, VAR_0);
  VAR_11 = FUNC_2(*VAR_9, VAR_1);
  FUNC_4(VAR_12 + VAR_6, VAR_11 + VAR_7, VAR_13);
  FUNC_1(*VAR_10);
  FUNC_3(VAR_11, VAR_1);
  FUNC_3(VAR_12, VAR_0);

 } while ((VAR_8 -= VAR_13) != 0);
}
