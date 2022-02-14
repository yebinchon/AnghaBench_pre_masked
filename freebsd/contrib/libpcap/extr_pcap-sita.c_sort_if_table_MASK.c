
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {struct TYPE_3__* next; int name; } ;
typedef TYPE_1__ pcap_if_t ;


 TYPE_1__* VAR_0 ;
 scalar_t__ FUNC_0 (int ,int ) ;

__attribute__((used)) static void FUNC_1(void) {
 pcap_if_t *VAR_1, *VAR_2, *VAR_3, *VAR_4;
 int VAR_5;

 if (!VAR_0) return;

 while (1) {
  VAR_1 = VAR_0;
  VAR_3 = 0;
  VAR_5 = 0;
  while ((VAR_2 = VAR_1->next)) {
   if (FUNC_0(VAR_1->name, VAR_2->name) > 0) {
    if (VAR_3) {
     VAR_4 = VAR_2->next;
     VAR_3->next = VAR_2;
     VAR_2->next = VAR_1;
     VAR_1->next = VAR_4;
    } else {
     VAR_4 = VAR_2->next;
     VAR_0= VAR_2;
     VAR_2->next = VAR_1;
     VAR_1->next = VAR_4;
    }
    VAR_1 = VAR_2;
    VAR_3 = VAR_1;
    VAR_5 = 1;
   }
   VAR_3 = VAR_1;
   VAR_1 = VAR_1->next;
  }
  if (VAR_5 == 0)
   return;
 }
 return;
}
