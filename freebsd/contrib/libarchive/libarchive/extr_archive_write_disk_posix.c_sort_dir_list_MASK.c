
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fixup_entry {struct fixup_entry* next; int name; } ;


 scalar_t__ FUNC_0 (int ,int ) ;

__attribute__((used)) static struct fixup_entry *
FUNC_1(struct fixup_entry *VAR_0)
{
 struct fixup_entry *VAR_1, *VAR_2, *VAR_3;

 if (VAR_0 == ((void*)0))
  return (((void*)0));

 if (VAR_0->next == ((void*)0))
  return (VAR_0);


 VAR_3 = VAR_0;
 VAR_1 = VAR_0->next->next;
 while (VAR_1 != ((void*)0)) {

  VAR_1 = VAR_1->next;
  if (VAR_1 != ((void*)0))
   VAR_1 = VAR_1->next;
  VAR_3 = VAR_3->next;
 }

 VAR_2 = VAR_3->next;
 VAR_3->next = ((void*)0);
 VAR_1 = VAR_0;


 VAR_1 = FUNC_1(VAR_1);
 VAR_2 = FUNC_1(VAR_2);



 if (FUNC_0(VAR_1->name, VAR_2->name) > 0) {
  VAR_3 = VAR_0 = VAR_1;
  VAR_1 = VAR_1->next;
 } else {
  VAR_3 = VAR_0 = VAR_2;
  VAR_2 = VAR_2->next;
 }


 while (VAR_1 != ((void*)0) && VAR_2 != ((void*)0)) {
  if (FUNC_0(VAR_1->name, VAR_2->name) > 0) {
   VAR_3->next = VAR_1;
   VAR_1 = VAR_1->next;
  } else {
   VAR_3->next = VAR_2;
   VAR_2 = VAR_2->next;
  }
  VAR_3 = VAR_3->next;
 }


 if (VAR_1 != ((void*)0))
  VAR_3->next = VAR_1;
 if (VAR_2 != ((void*)0))
  VAR_3->next = VAR_2;

 return (VAR_0);
}
