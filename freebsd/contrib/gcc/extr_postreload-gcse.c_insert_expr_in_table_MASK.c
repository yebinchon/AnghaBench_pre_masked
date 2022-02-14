
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct occr {void* insn; scalar_t__ deleted_p; struct occr* next; } ;
struct expr {struct occr* avail_occr; int hash; void* expr; } ;
typedef void* rtx ;
typedef int hashval_t ;


 scalar_t__ FUNC_0 (void*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (void*,int*) ;
 scalar_t__ FUNC_2 (int ,struct expr*,int ,int ) ;
 scalar_t__ FUNC_3 (int *,int) ;
 int FUNC_4 (int *,struct expr*) ;
 int VAR_3 ;

__attribute__((used)) static void
FUNC_5 (rtx VAR_4, rtx VAR_5)
{
  int VAR_6;
  hashval_t VAR_7;
  struct expr *VAR_8, **VAR_9;
  struct occr *VAR_10, *VAR_11 = ((void*)0);

  VAR_7 = FUNC_1 (VAR_4, &VAR_6);




  if (VAR_6)
    return;






  VAR_8 = (struct expr *) FUNC_3 (&VAR_1,
         sizeof (struct expr));
  VAR_8->expr = VAR_4;
  VAR_8->hash = VAR_7;
  VAR_8->avail_occr = ((void*)0);

  VAR_9 = (struct expr **) FUNC_2 (VAR_2, VAR_8,
          VAR_7, VAR_0);

  if (! (*VAR_9))

    *VAR_9 = VAR_8;
  else
    {


      FUNC_4 (&VAR_1, VAR_8);
      VAR_8 = *VAR_9;
    }


  VAR_10 = VAR_8->avail_occr;
  while (VAR_10 && FUNC_0 (VAR_10->insn) != FUNC_0 (VAR_5))
    {


      VAR_11 = VAR_10;
      VAR_10 = VAR_10->next;
    }

  if (VAR_10)




    VAR_10->insn = VAR_5;
  else
    {

      VAR_10 = (struct occr *) FUNC_3 (&VAR_3,
        sizeof (struct occr));


      if (VAR_8->avail_occr == ((void*)0))
        VAR_8->avail_occr = VAR_10;
      else
        VAR_11->next = VAR_10;

      VAR_10->insn = VAR_5;
      VAR_10->next = ((void*)0);
      VAR_10->deleted_p = 0;
    }
}
