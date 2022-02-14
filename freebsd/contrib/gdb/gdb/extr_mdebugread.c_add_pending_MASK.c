
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct type {int dummy; } ;
struct mdebug_pending {char* s; struct mdebug_pending* next; struct type* t; } ;
struct TYPE_4__ {int objfile_obstack; } ;
struct TYPE_3__ {int * fdr; } ;
typedef int FDR ;


 TYPE_2__* VAR_0 ;
 TYPE_1__* VAR_1 ;
 struct mdebug_pending* FUNC_0 (int *,char*) ;
 scalar_t__ FUNC_1 (int *,int) ;
 struct mdebug_pending** VAR_2 ;

__attribute__((used)) static void
FUNC_2 (FDR *VAR_3, char *VAR_4, struct type *VAR_5)
{
  int VAR_6 = VAR_3 - VAR_1->fdr;
  struct mdebug_pending *VAR_7 = FUNC_0 (VAR_3, VAR_4);


  if (!VAR_7)
    {
      VAR_7 = ((struct mdebug_pending *)
    FUNC_1 (&VAR_0->objfile_obstack,
     sizeof (struct mdebug_pending)));
      VAR_7->s = VAR_4;
      VAR_7->t = VAR_5;
      VAR_7->next = VAR_2[VAR_6];
      VAR_2[VAR_6] = VAR_7;
    }
}
