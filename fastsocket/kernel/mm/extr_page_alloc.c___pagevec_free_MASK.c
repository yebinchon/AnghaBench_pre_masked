
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pagevec {int cold; int * pages; } ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (struct pagevec*) ;
 int FUNC_2 (int ,int ) ;

void FUNC_3(struct pagevec *VAR_0)
{
 int VAR_1 = FUNC_1(VAR_0);

 while (--VAR_1 >= 0) {
  FUNC_2(VAR_0->pages[VAR_1], VAR_0->cold);
  FUNC_0(VAR_0->pages[VAR_1], VAR_0->cold);
 }
}
