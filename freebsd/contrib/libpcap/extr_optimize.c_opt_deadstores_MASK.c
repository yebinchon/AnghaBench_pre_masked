
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct stmt {int code; } ;
struct slist {int s; struct slist* next; } ;
struct block {int out_use; int s; struct slist* stmts; } ;
struct TYPE_4__ {scalar_t__ done; } ;
typedef TYPE_1__ opt_state_t ;


 int FUNC_0 (int ,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (TYPE_1__*,int *,struct stmt**) ;
 int FUNC_2 (char*,int ,int) ;

__attribute__((used)) static void
FUNC_3(opt_state_t *VAR_2, register struct block *VAR_3)
{
 register struct slist *VAR_4;
 register int VAR_5;
 struct stmt *VAR_6[VAR_1];

 FUNC_2((char *)VAR_6, 0, sizeof VAR_6);

 for (VAR_4 = VAR_3->stmts; VAR_4 != 0; VAR_4 = VAR_4->next)
  FUNC_1(VAR_2, &VAR_4->s, VAR_6);
 FUNC_1(VAR_2, &VAR_3->s, VAR_6);

 for (VAR_5 = 0; VAR_5 < VAR_1; ++VAR_5)
  if (VAR_6[VAR_5] && !FUNC_0(VAR_3->out_use, VAR_5)) {
   VAR_6[VAR_5]->code = VAR_0;
   VAR_2->done = 0;
  }
}
