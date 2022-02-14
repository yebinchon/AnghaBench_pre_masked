
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int from_array; int encoding; } ;
struct TYPE_6__ {TYPE_2__ b; scalar_t__ i; } ;
struct TYPE_4__ {void* array; } ;
struct object {struct object* next; TYPE_3__ s; TYPE_1__ u; void* dbase; void* tbase; void* pc_begin; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 () ;
 int VAR_1 ;
 struct object* VAR_2 ;

void
FUNC_3 (void *VAR_3, struct object *VAR_4,
       void *VAR_5, void *VAR_6)
{
  VAR_4->pc_begin = (void *)-1;
  VAR_4->tbase = VAR_5;
  VAR_4->dbase = VAR_6;
  VAR_4->u.array = VAR_3;
  VAR_4->s.i = 0;
  VAR_4->s.b.from_array = 1;
  VAR_4->s.b.encoding = VAR_0;

  FUNC_2 ();
  FUNC_0 (&VAR_1);

  VAR_4->next = VAR_2;
  VAR_2 = VAR_4;

  FUNC_1 (&VAR_1);
}
