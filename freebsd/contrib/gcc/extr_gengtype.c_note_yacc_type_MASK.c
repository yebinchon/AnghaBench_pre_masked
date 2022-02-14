
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ type_p ;
struct fileloc {int dummy; } ;
typedef TYPE_2__* pair_p ;
typedef int options_p ;
struct TYPE_7__ {scalar_t__ type; struct TYPE_7__* next; int * name; int line; TYPE_1__* opt; } ;
struct TYPE_6__ {int * info; } ;


 int FUNC_0 (char*,int ,struct fileloc*) ;
 int FUNC_1 (int *,char*,int *) ;
 int FUNC_2 (char*,int,struct fileloc*,TYPE_2__*,int ) ;
 scalar_t__ FUNC_3 (int *,int *) ;

void
FUNC_4 (options_p VAR_0, pair_p VAR_1, pair_p VAR_2,
  struct fileloc *VAR_3)
{
  pair_p VAR_4;
  pair_p *VAR_5;

  for (VAR_4 = VAR_2; VAR_4; VAR_4 = VAR_4->next)
    {
      pair_p VAR_6;

      if (VAR_4->name == ((void*)0))
 continue;

      if (VAR_4->type == (type_p) 1)
 {
   pair_p VAR_7;
   int VAR_8 = 0;

   for (VAR_7 = VAR_2; VAR_7; VAR_7 = VAR_7->next)
     if (VAR_7->type != (type_p) 1
  && FUNC_3 (VAR_7->opt->info, VAR_4->opt->info) == 0)
       {
  VAR_8 = 1;
  break;
       }
   if (! VAR_8)
     continue;
 }

      for (VAR_6 = VAR_1; VAR_6; VAR_6 = VAR_6->next)
 if (FUNC_3 (VAR_6->name, VAR_4->name) == 0)
   VAR_4->type = VAR_6->type;
      if (VAR_4->type == ((void*)0))
 {
   FUNC_1 (&VAR_4->line,
    "couldn't match fieldname `%s'", VAR_4->name);
   VAR_4->name = ((void*)0);
 }
    }

  VAR_5 = &VAR_2;
  while (*VAR_5)
    {
      pair_p VAR_9 = *VAR_5;

      if (VAR_9->name == ((void*)0)
   || VAR_9->type == (type_p) 1)
 *VAR_5 = VAR_9->next;
      else
 VAR_5 = &VAR_9->next;
    }

  FUNC_0 ("YYSTYPE", FUNC_2 ("yy_union", 1, VAR_3, VAR_2, VAR_0), VAR_3);
}
