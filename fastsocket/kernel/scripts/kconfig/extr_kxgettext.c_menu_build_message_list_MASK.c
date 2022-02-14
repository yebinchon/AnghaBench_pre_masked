
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct menu {int * prompt; struct menu* next; struct menu* list; int lineno; TYPE_2__* file; TYPE_1__* sym; } ;
struct TYPE_4__ {char* name; } ;
struct TYPE_3__ {int * name; } ;


 int FUNC_0 (struct menu*) ;
 int FUNC_1 (struct menu*) ;
 scalar_t__ FUNC_2 (struct menu*) ;
 int FUNC_3 (int ,int *,char*,int ) ;

__attribute__((used)) static void FUNC_4(struct menu *VAR_0)
{
 struct menu *VAR_1;

 FUNC_3(FUNC_1(VAR_0), ((void*)0),
       VAR_0->file == ((void*)0) ? "Root Menu" : VAR_0->file->name,
       VAR_0->lineno);

 if (VAR_0->sym != ((void*)0) && FUNC_2(VAR_0))
  FUNC_3(FUNC_0(VAR_0), VAR_0->sym->name,
        VAR_0->file == ((void*)0) ? "Root Menu" : VAR_0->file->name,
        VAR_0->lineno);

 for (VAR_1 = VAR_0->list; VAR_1 != ((void*)0); VAR_1 = VAR_1->next)
  if (VAR_1->prompt != ((void*)0))
   FUNC_4(VAR_1);
}
