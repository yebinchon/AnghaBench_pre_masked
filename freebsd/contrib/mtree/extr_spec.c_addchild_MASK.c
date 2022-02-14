
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {struct TYPE_8__* prev; struct TYPE_8__* next; struct TYPE_8__* child; int name; } ;
typedef TYPE_1__ NODE ;


 int FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (TYPE_1__*,TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*,TYPE_1__*) ;
 scalar_t__ FUNC_3 (int ,int ) ;

__attribute__((used)) static void
FUNC_4(NODE *VAR_1, NODE *VAR_2)
{
 NODE *VAR_3;
 NODE *VAR_4;
 NODE *VAR_5;

 NODE *VAR_6;
 NODE *VAR_7;
 int VAR_8;

 VAR_3 = ((void*)0);
 VAR_4 = ((void*)0);
 VAR_5 = ((void*)0);
 VAR_7 = ((void*)0);
 VAR_6 = VAR_1->child;
 if (VAR_6 == ((void*)0)) {

  VAR_1->child = VAR_2;
  return;
 }
 for (; VAR_6 != ((void*)0); VAR_7 = VAR_6, VAR_6 = VAR_6->next) {
  if (FUNC_3(VAR_2->name, VAR_6->name) == 0) {
   VAR_3 = VAR_6;
  }
  if (VAR_0) {
   VAR_8 = FUNC_1(VAR_2, VAR_6);
   if (VAR_8 == 0) {
    VAR_4 = VAR_6;
   } else if (VAR_8 > 0) {
    VAR_5 = VAR_6;
   }
  }
 }
 if (! VAR_0) {
  if (VAR_3 != ((void*)0)) {

   VAR_4 = VAR_3;
  } else {

   VAR_5 = VAR_7;
  }
 }

 if (VAR_3 != ((void*)0)) {






  FUNC_2(VAR_3, VAR_2);
  if (VAR_3 == VAR_4) {

   return;
  }
  if (VAR_3 == VAR_5 || VAR_3->prev == VAR_5) {





   return;
  }
  VAR_2 = VAR_3;
  if (VAR_2->prev)
   VAR_2->prev->next = VAR_2->next;
  else {

   VAR_1->child = VAR_2->next;
   FUNC_0(VAR_2->next != ((void*)0));
  }
  if (VAR_2->next)
   VAR_2->next->prev = VAR_2->prev;
  VAR_2->prev = ((void*)0);
  VAR_2->next = ((void*)0);
 }

 if (VAR_5 == ((void*)0)) {

  VAR_1->child->prev = VAR_2;
  VAR_2->next = VAR_1->child;
  VAR_2->prev = ((void*)0);
  VAR_1->child = VAR_2;
 } else {

  VAR_2->next = VAR_5->next;
  VAR_5->next = VAR_2;
  VAR_2->prev = VAR_5;
  if (VAR_2->next)
   VAR_2->next->prev = VAR_2;
 }
 return;
}
