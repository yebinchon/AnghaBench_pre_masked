
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct valuelist {int port; int name; struct valuelist* next; struct valuelist* prev; } ;
struct protoent {int p_proto; int p_name; } ;


 struct valuelist* VAR_0 ;

__attribute__((used)) static struct protoent *
FUNC_0(int VAR_1) {
 struct valuelist **VAR_2 = &VAR_0;
 struct valuelist *VAR_3 = *VAR_2;
 static struct protoent VAR_4;

 for (; VAR_3 != ((void*)0); VAR_3 = VAR_3->next)
  if (VAR_3->port == VAR_1) {
   if (VAR_3 != *VAR_2) {
    VAR_3->prev->next = VAR_3->next;
    if (VAR_3->next)
     VAR_3->next->prev = VAR_3->prev;
    (*VAR_2)->prev = VAR_3;
    VAR_3->next = *VAR_2;
    *VAR_2 = VAR_3;
   }
   VAR_4.p_name = VAR_3->name;
   VAR_4.p_proto = VAR_3->port;
   return (&VAR_4);
  }
 return (0);
}
