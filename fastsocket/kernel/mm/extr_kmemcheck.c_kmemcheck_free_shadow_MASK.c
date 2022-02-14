
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int * shadow; } ;


 int FUNC_0 (struct page*,int) ;
 int FUNC_1 (struct page*) ;
 int FUNC_2 (struct page*,int) ;
 struct page* FUNC_3 (int *) ;

void FUNC_4(struct page *VAR_0, int VAR_1)
{
 struct page *VAR_2;
 int VAR_3;
 int VAR_4;

 if (!FUNC_1(VAR_0))
  return;

 VAR_3 = 1 << VAR_1;

 FUNC_2(VAR_0, VAR_3);

 VAR_2 = FUNC_3(VAR_0[0].shadow);

 for(VAR_4 = 0; VAR_4 < VAR_3; ++VAR_4)
  VAR_0[VAR_4].shadow = ((void*)0);

 FUNC_0(VAR_2, VAR_1);
}
