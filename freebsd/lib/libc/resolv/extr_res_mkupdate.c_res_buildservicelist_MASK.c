
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int16_t ;
struct valuelist {struct valuelist* prev; struct valuelist* next; int port; struct valuelist* proto; struct valuelist* name; } ;
struct servent {scalar_t__ s_port; int s_proto; int s_name; } ;


 int FUNC_0 () ;
 int FUNC_1 (struct valuelist*) ;
 struct servent* FUNC_2 () ;
 scalar_t__ FUNC_3 (int) ;
 int FUNC_4 (int ) ;
 struct valuelist* VAR_0 ;
 int FUNC_5 (int) ;
 void* FUNC_6 (int ) ;

__attribute__((used)) static void
FUNC_7(void) {
 struct servent *VAR_1;
 struct valuelist *VAR_2;




 FUNC_5(1);

 while ((VAR_1 = FUNC_2()) != ((void*)0)) {
  VAR_2 = (struct valuelist *)FUNC_3(sizeof(struct valuelist));
  if (!VAR_2)
   break;
  VAR_2->name = FUNC_6(VAR_1->s_name);
  VAR_2->proto = FUNC_6(VAR_1->s_proto);
  if ((VAR_2->name == ((void*)0)) || (VAR_2->proto == ((void*)0))) {
   if (VAR_2->name) FUNC_1(VAR_2->name);
   if (VAR_2->proto) FUNC_1(VAR_2->proto);
   FUNC_1(VAR_2);
   break;
  }
  VAR_2->port = FUNC_4((u_int16_t)VAR_1->s_port);
  VAR_2->next = VAR_0;
  VAR_2->prev = ((void*)0);
  if (VAR_0)
   VAR_0->prev = VAR_2;
  VAR_0 = VAR_2;
 }
 FUNC_0();
}
