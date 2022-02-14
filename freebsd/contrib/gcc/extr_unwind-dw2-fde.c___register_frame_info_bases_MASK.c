
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ uword ;
struct TYPE_5__ {int encoding; } ;
struct TYPE_6__ {TYPE_2__ b; scalar_t__ i; } ;
struct TYPE_4__ {void const* single; } ;
struct object {struct object* next; int * fde_end; TYPE_3__ s; TYPE_1__ u; void* dbase; void* tbase; void* pc_begin; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 () ;
 int VAR_1 ;
 struct object* VAR_2 ;

void
FUNC_3 (const void *VAR_3, struct object *VAR_4,
        void *VAR_5, void *VAR_6)
{

  if ((uword *) VAR_3 == 0 || *(uword *) VAR_3 == 0)
    return;

  VAR_4->pc_begin = (void *)-1;
  VAR_4->tbase = VAR_5;
  VAR_4->dbase = VAR_6;
  VAR_4->u.single = VAR_3;
  VAR_4->s.i = 0;
  VAR_4->s.b.encoding = VAR_0;




  FUNC_2 ();
  FUNC_0 (&VAR_1);

  VAR_4->next = VAR_2;
  VAR_2 = VAR_4;

  FUNC_1 (&VAR_1);
}
