
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct outbound_list {struct outbound_entry* first; } ;
struct outbound_entry {int qsent; struct outbound_entry* next; } ;


 int FUNC_0 (struct outbound_list*) ;
 int FUNC_1 (int ,struct outbound_entry*) ;

void
FUNC_2(struct outbound_list* VAR_0)
{
 struct outbound_entry *VAR_1, *VAR_2;
 VAR_1 = VAR_0->first;
 while(VAR_1) {
  VAR_2 = VAR_1->next;
  FUNC_1(VAR_1->qsent, VAR_1);

  VAR_1 = VAR_2;
 }
 FUNC_0(VAR_0);
}
