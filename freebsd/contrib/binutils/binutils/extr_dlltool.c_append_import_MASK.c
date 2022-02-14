
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int nfuncs; TYPE_1__* functail; struct TYPE_5__* next; TYPE_1__* funchead; void* dllname; } ;
typedef TYPE_2__ iheadtype ;
typedef int ifunctype ;
struct TYPE_4__ {int ord; struct TYPE_4__* next; void* name; } ;


 TYPE_2__* VAR_0 ;
 scalar_t__ FUNC_0 (void*,char const*) ;
 void* FUNC_1 (int) ;
 void* FUNC_2 (char const*) ;

__attribute__((used)) static void
FUNC_3 (const char *VAR_1, const char *VAR_2, int VAR_3)
{
  iheadtype **VAR_4;
  iheadtype *VAR_5;

  for (VAR_4 = &VAR_0; *VAR_4 != ((void*)0); VAR_4 = &(*VAR_4)->next)
    {
      if (FUNC_0 ((*VAR_4)->dllname, VAR_2) == 0)
 {
   VAR_5 = *VAR_4;
   VAR_5->functail->next = FUNC_1 (sizeof (ifunctype));
   VAR_5->functail = VAR_5->functail->next;
   VAR_5->functail->ord = VAR_3;
   VAR_5->functail->name = FUNC_2 (VAR_1);
   VAR_5->functail->next = ((void*)0);
   VAR_5->nfuncs++;
   return;
 }
    }

  VAR_5 = FUNC_1 (sizeof (iheadtype));
  VAR_5->dllname = FUNC_2 (VAR_2);
  VAR_5->nfuncs = 1;
  VAR_5->funchead = FUNC_1 (sizeof (ifunctype));
  VAR_5->functail = VAR_5->funchead;
  VAR_5->next = ((void*)0);
  VAR_5->functail->name = FUNC_2 (VAR_1);
  VAR_5->functail->ord = VAR_3;
  VAR_5->functail->next = ((void*)0);

  *VAR_4 = VAR_5;
}
