
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int dummy; } ;
struct hstate {int dummy; } ;


 int FUNC_0 () ;
 int FUNC_1 (struct page*,struct page*) ;
 struct page* FUNC_2 (struct page*,struct page*,int) ;
 struct hstate* FUNC_3 (struct page*) ;
 int FUNC_4 (struct hstate*) ;

__attribute__((used)) static void FUNC_5(struct page *VAR_0, struct page *VAR_1)
{
 int VAR_2;
 struct hstate *VAR_3 = FUNC_3(VAR_1);
 struct page *VAR_4 = VAR_0;
 struct page *VAR_5 = VAR_1;

 for (VAR_2 = 0; VAR_2 < FUNC_4(VAR_3); ) {
  FUNC_0();
  FUNC_1(VAR_0, VAR_1);

  VAR_2++;
  VAR_0 = FUNC_2(VAR_0, VAR_4, VAR_2);
  VAR_1 = FUNC_2(VAR_1, VAR_5, VAR_2);
 }
}
