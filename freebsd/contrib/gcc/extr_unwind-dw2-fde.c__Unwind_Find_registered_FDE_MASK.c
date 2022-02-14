
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int encoding; scalar_t__ mixed_encoding; } ;
struct TYPE_8__ {TYPE_1__ b; } ;
struct object {void* pc_begin; TYPE_2__ s; int dbase; int tbase; struct object* next; } ;
struct dwarf_eh_bases {void* func; int dbase; int tbase; } ;
struct TYPE_9__ {int pc_begin; } ;
typedef TYPE_3__ fde ;
typedef scalar_t__ _Unwind_Ptr ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int,struct object*) ;
 int FUNC_3 (TYPE_3__ const*) ;
 int FUNC_4 () ;
 int VAR_0 ;
 int FUNC_5 (int,int ,int ,scalar_t__*) ;
 TYPE_3__* FUNC_6 (struct object*,void*) ;
 struct object* VAR_1 ;
 struct object* VAR_2 ;

const fde *
FUNC_7 (void *VAR_3, struct dwarf_eh_bases *VAR_4)
{
  struct object *VAR_5;
  const fde *VAR_6 = ((void*)0);

  FUNC_4 ();
  FUNC_0 (&VAR_0);




  for (VAR_5 = VAR_1; VAR_5; VAR_5 = VAR_5->next)
    if (VAR_3 >= VAR_5->pc_begin)
      {
 VAR_6 = FUNC_6 (VAR_5, VAR_3);
 if (VAR_6)
   goto fini;
 break;
      }


  while ((VAR_5 = VAR_2))
    {
      struct object **VAR_7;

      VAR_2 = VAR_5->next;
      VAR_6 = FUNC_6 (VAR_5, VAR_3);


      for (VAR_7 = &VAR_1; *VAR_7 ; VAR_7 = &(*VAR_7)->next)
 if ((*VAR_7)->pc_begin < VAR_5->pc_begin)
   break;
      VAR_5->next = *VAR_7;
      *VAR_7 = VAR_5;

      if (VAR_6)
 goto fini;
    }

 fini:
  FUNC_1 (&VAR_0);

  if (VAR_6)
    {
      int VAR_8;
      _Unwind_Ptr VAR_9;

      VAR_4->tbase = VAR_5->tbase;
      VAR_4->dbase = VAR_5->dbase;

      VAR_8 = VAR_5->s.b.encoding;
      if (VAR_5->s.b.mixed_encoding)
 VAR_8 = FUNC_3 (VAR_6);
      FUNC_5 (VAR_8, FUNC_2 (VAR_8, VAR_5),
        VAR_6->pc_begin, &VAR_9);
      VAR_4->func = (void *) VAR_9;
    }

  return VAR_6;
}
