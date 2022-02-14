
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct listen_list {int com; struct listen_list* next; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct listen_list*) ;

void
FUNC_2(struct listen_list* VAR_0)
{
 struct listen_list *VAR_1 = VAR_0, *VAR_2;
 while(VAR_1) {
  VAR_2 = VAR_1->next;
  FUNC_0(VAR_1->com);
  FUNC_1(VAR_1);
  VAR_1 = VAR_2;
 }
}
