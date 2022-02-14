
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct match_list {struct match* first; } ;
struct match {int pattern; struct match* next; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct match*) ;

__attribute__((used)) static void
FUNC_2(struct match_list *VAR_0)
{
 struct match *VAR_1, *VAR_2;

 for (VAR_1 = VAR_0->first; VAR_1 != ((void*)0); ) {
  VAR_2 = VAR_1;
  VAR_1 = VAR_1->next;
  FUNC_0(&(VAR_2->pattern));
  FUNC_1(VAR_2);
 }
}
