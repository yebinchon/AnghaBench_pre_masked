
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ x_start; scalar_t__ y_start; int ninsns; int local_count; int input_valid; } ;
struct TYPE_5__ {scalar_t__ x_start; scalar_t__ ninsns; } ;
struct equiv_info {int mode; int need_rerun; int check_input_conflict; int had_input_conflict; int dying_inputs; TYPE_1__ cur; int * x_local; int * y_local; int y_local_live; int x_local_live; int input_reg; int y_input; int x_input; TYPE_2__ best_match; int y_block; int x_block; scalar_t__ y_end; scalar_t__ x_end; } ;
typedef scalar_t__ rtx ;
typedef int regset_head ;


 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (scalar_t__) ;
 int VAR_0 ;
 int FUNC_5 (scalar_t__) ;
 scalar_t__ FUNC_6 (scalar_t__) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_7 (scalar_t__) ;
 scalar_t__ FUNC_8 (int *,int ,int) ;
 scalar_t__ FUNC_9 (int ,int ) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (struct equiv_info*,int) ;
 int FUNC_12 (struct equiv_info*) ;
 int FUNC_13 (int) ;
 int FUNC_14 () ;
 int FUNC_15 (scalar_t__,scalar_t__,struct equiv_info*) ;
 scalar_t__ FUNC_16 (scalar_t__) ;
 int FUNC_17 (struct equiv_info*) ;
 scalar_t__ FUNC_18 (scalar_t__) ;
 int FUNC_19 (int ) ;
 int FUNC_20 (scalar_t__) ;
 int FUNC_21 (TYPE_2__*,struct equiv_info*) ;
 int FUNC_22 (int,struct equiv_info*) ;
 int FUNC_23 (scalar_t__,scalar_t__,struct equiv_info*) ;
 int FUNC_24 (TYPE_2__*,struct equiv_info*) ;

int
FUNC_25 (int VAR_5, struct equiv_info *VAR_6)
{
  rtx VAR_7, VAR_8;
  rtx VAR_9, VAR_10;
  int VAR_11;

  if (VAR_5 & VAR_4)
    {
      VAR_7 = FUNC_1 (VAR_6->x_block);
      VAR_8 = FUNC_1 (VAR_6->y_block);
      if (!VAR_7 || !VAR_8)
 return 0;
    }
  else
    {
      VAR_7 = VAR_6->cur.x_start;
      VAR_8 = VAR_6->cur.y_start;
    }
  if (!FUNC_22 (VAR_5, VAR_6))
    FUNC_14 ();




  VAR_9 = FUNC_0 (VAR_6->x_block);
  if (FUNC_16 (VAR_9)
      || (FUNC_18 (VAR_9) && !FUNC_19 (FUNC_5 (VAR_9))))
    {
      VAR_6->cur.x_start = VAR_9;
      VAR_9 = FUNC_6 (VAR_9);
    }

  VAR_10 = FUNC_0 (VAR_6->y_block);
  if (FUNC_16 (VAR_10)
      || (FUNC_18 (VAR_10) && !FUNC_19 (FUNC_5 (VAR_10))))
    {
      VAR_6->cur.y_start = VAR_10;



      if (!FUNC_20 (VAR_10) && !FUNC_18 (VAR_10) && VAR_6->cur.x_start)
 VAR_6->cur.ninsns++;
      VAR_10 = FUNC_6 (VAR_10);
    }

  if (VAR_5 & VAR_2)
    {


      FUNC_13 (!VAR_6->cur.x_start == !VAR_6->cur.y_start);
      if (VAR_6->cur.x_start)
 {
   if (FUNC_7 (VAR_6->cur.x_start)
       ? !FUNC_11 (VAR_6, 0)
       : !FUNC_15 (VAR_6->cur.x_start, VAR_6->cur.y_start, VAR_6))
     FUNC_14 ();
 }
      else if (FUNC_7 (VAR_9) && FUNC_7 (VAR_10))
 {
   VAR_6->cur.x_start = VAR_9;
   VAR_6->cur.y_start = VAR_10;
   VAR_9 = FUNC_6 (VAR_9);
   VAR_10 = FUNC_6 (VAR_10);
   VAR_6->cur.ninsns++;
   if (!FUNC_11 (VAR_6, 0))
     FUNC_14 ();
 }
      if (VAR_6->cur.x_start && VAR_6->mode & VAR_1)
 FUNC_23 (VAR_6->cur.x_start, VAR_6->cur.y_start, VAR_6);
    }

  FUNC_21 (&VAR_6->best_match, VAR_6);
  VAR_6->x_end = VAR_9;
  VAR_6->y_end = VAR_10;
  if (VAR_6->cur.x_start != VAR_7)
    for (;;)
      {

 while (!FUNC_4 (VAR_9) && VAR_9 != VAR_7)
   VAR_9 = FUNC_6 (VAR_9);

 while (!FUNC_4 (VAR_10) && VAR_10 != VAR_8)
   VAR_10 = FUNC_6 (VAR_10);

 if (!FUNC_15 (VAR_9, VAR_10, VAR_6))
   break;
 if (FUNC_4 (VAR_9))
   {
     if (VAR_6->mode & VAR_1)
       FUNC_23 (VAR_9, VAR_10, VAR_6);
     VAR_6->cur.ninsns++;
     FUNC_21 (&VAR_6->best_match, VAR_6);
   }
 if (VAR_9 == VAR_7 || VAR_10 == VAR_8)
   {




     if (VAR_6->best_match.x_start != VAR_6->cur.x_start
  && (VAR_9 == FUNC_1 (VAR_6->x_block)
      || VAR_10 == FUNC_1 (VAR_6->y_block)))
       {
  VAR_6->cur.ninsns++;
  FUNC_21 (&VAR_6->best_match, VAR_6);
  VAR_6->cur.ninsns--;
  if (VAR_6->best_match.ninsns > VAR_6->cur.ninsns)
    VAR_6->best_match.ninsns = VAR_6->cur.ninsns;
       }
     break;
   }
 VAR_9 = FUNC_6 (VAR_9);
 VAR_10 = FUNC_6 (VAR_10);
      }



  FUNC_10 (0);


  FUNC_24 (&VAR_6->best_match, VAR_6);




  if (VAR_6->cur.ninsns)
    {
      VAR_9 = VAR_6->cur.x_start;
      VAR_10 = VAR_6->cur.y_start;
      while (VAR_9 != VAR_7 && !FUNC_4 (FUNC_6 (VAR_9)))
 VAR_9 = FUNC_6 (VAR_9);

      while (VAR_10 != VAR_8 && !FUNC_4 (FUNC_6 (VAR_10)))
 VAR_10 = FUNC_6 (VAR_10);

      VAR_6->cur.x_start = VAR_9;
      VAR_6->cur.y_start = VAR_10;
    }

  if (!VAR_6->cur.input_valid)
    VAR_6->x_input = VAR_6->y_input = VAR_6->input_reg = VAR_0;
  if (!VAR_6->need_rerun)
    {
      FUNC_12 (VAR_6);
      if (VAR_6->mode & VAR_1)
 {
   if (VAR_6->check_input_conflict && ! FUNC_17 (VAR_6))
     FUNC_14 ();
 }
      else
 {
   bool VAR_12 = VAR_6->had_input_conflict;

   if (!VAR_12
       && VAR_6->dying_inputs > 1
       && FUNC_9 (VAR_6->x_local_live, VAR_6->y_local_live))
     {
       regset_head VAR_13;

       FUNC_3 (&VAR_13);
       for (VAR_11 = 0; VAR_11 < VAR_6->cur.local_count; VAR_11++)
  {
    if (FUNC_8 (&VAR_13, VAR_6->y_local[VAR_11], 0))
      {
        VAR_12 = 1;
        break;
      }
    FUNC_8 (&VAR_13, VAR_6->x_local[VAR_11], 1);
  }
       FUNC_2 (&VAR_13);
     }
   if (VAR_12 && !VAR_6->check_input_conflict)
     VAR_6->need_rerun = 1;
   VAR_6->check_input_conflict = VAR_12;
 }
    }

  if (VAR_6->mode & VAR_3
      && (VAR_6->cur.x_start != VAR_7 || VAR_6->cur.y_start != VAR_8))
    return 0;
  return VAR_6->cur.ninsns;
}
