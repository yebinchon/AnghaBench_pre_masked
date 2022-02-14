
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct page*) ;
 int FUNC_1 () ;
 int FUNC_2 (int,int ) ;
 int FUNC_3 (struct page**,int,int ) ;

void FUNC_4(struct page **VAR_1, int VAR_2)
{
 struct page **VAR_3 = VAR_1;

 FUNC_1();
 while (VAR_2) {
  int VAR_4 = FUNC_2(VAR_2, VAR_0);
  int VAR_5;

  for (VAR_5 = 0; VAR_5 < VAR_4; VAR_5++)
   FUNC_0(VAR_3[VAR_5]);
  FUNC_3(VAR_3, VAR_4, 0);
  VAR_3 += VAR_4;
  VAR_2 -= VAR_4;
 }
}
