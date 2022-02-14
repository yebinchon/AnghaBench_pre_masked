
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct valuelist {struct valuelist* prev; struct valuelist* next; int port; int * name; } ;
struct protoent {int p_proto; int p_name; } ;


 int FUNC_0 () ;
 int FUNC_1 (struct valuelist*) ;
 struct protoent* FUNC_2 () ;
 scalar_t__ FUNC_3 (int) ;
 struct valuelist* VAR_0 ;
 int FUNC_4 (int) ;
 int * FUNC_5 (int ) ;

void
FUNC_6(void) {
 struct protoent *VAR_1;
 struct valuelist *VAR_2;




 FUNC_4(1);

 while ((VAR_1 = FUNC_2()) != ((void*)0)) {
  VAR_2 = (struct valuelist *)FUNC_3(sizeof(struct valuelist));
  if (!VAR_2)
   break;
  VAR_2->name = FUNC_5(VAR_1->p_name);
  if (VAR_2->name == ((void*)0)) {
   FUNC_1(VAR_2);
   break;
  }
  VAR_2->port = VAR_1->p_proto;
  VAR_2->next = VAR_0;
  VAR_2->prev = ((void*)0);
  if (VAR_0)
   VAR_0->prev = VAR_2;
  VAR_0 = VAR_2;
 }
 FUNC_0();
}
