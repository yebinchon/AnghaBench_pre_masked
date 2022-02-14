
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct match_file {int pathname; struct match_file* next; } ;
struct entry_list {struct match_file* first; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct match_file*) ;

__attribute__((used)) static void
FUNC_2(struct entry_list *VAR_0)
{
 struct match_file *VAR_1, *VAR_2;

 for (VAR_1 = VAR_0->first; VAR_1 != ((void*)0); ) {
  VAR_2 = VAR_1;
  VAR_1 = VAR_1->next;
  FUNC_0(&(VAR_2->pathname));
  FUNC_1(VAR_2);
 }
}
