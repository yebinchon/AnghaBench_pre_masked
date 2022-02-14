
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mdebug_pending {char* s; struct mdebug_pending* next; } ;
struct TYPE_2__ {int * fdr; } ;
typedef int FDR ;


 TYPE_1__* VAR_0 ;
 struct mdebug_pending** VAR_1 ;

__attribute__((used)) static struct mdebug_pending *
FUNC_0 (FDR *VAR_2, char *VAR_3)
{
  int VAR_4 = VAR_2 - VAR_0->fdr;
  struct mdebug_pending *VAR_5;


  for (VAR_5 = VAR_1[VAR_4]; VAR_5; VAR_5 = VAR_5->next)
    if (VAR_5->s == VAR_3)
      break;
  return VAR_5;
}
