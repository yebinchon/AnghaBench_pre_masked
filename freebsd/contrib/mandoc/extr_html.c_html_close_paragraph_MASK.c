
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tag {scalar_t__ closed; int tag; struct tag* next; } ;
struct html {struct tag* tag; } ;





 int FUNC_0 (struct html*,struct tag*) ;

void
FUNC_1(struct html *VAR_0)
{
 struct tag *VAR_1;

 for (VAR_1 = VAR_0->tag; VAR_1 != ((void*)0) && VAR_1->closed == 0; VAR_1 = VAR_1->next) {
  switch(VAR_1->tag) {
  case 129:
  case 128:
   FUNC_0(VAR_0, VAR_1);
   break;
  case 130:
   FUNC_0(VAR_0, VAR_1);
   continue;
  default:
   continue;
  }
  break;
 }
}
