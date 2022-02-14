
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_1__ ;


struct TYPE_13__ {scalar_t__ type; scalar_t__ equiv; int min; int max; } ;
typedef TYPE_1__ value_range_t ;
typedef int tree ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_2 (scalar_t__,scalar_t__) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (TYPE_1__*,TYPE_1__*) ;
 int FUNC_6 () ;
 scalar_t__ FUNC_7 (int ) ;
 scalar_t__ FUNC_8 (TYPE_1__*) ;
 int FUNC_9 (TYPE_1__*,scalar_t__,int ,int ,scalar_t__) ;
 int FUNC_10 (TYPE_1__*,int ) ;
 int FUNC_11 (TYPE_1__*) ;
 int FUNC_12 (TYPE_1__*) ;
 scalar_t__ FUNC_13 (TYPE_1__*,TYPE_1__*) ;
 scalar_t__ FUNC_14 (int ) ;
 scalar_t__ FUNC_15 (int ) ;

__attribute__((used)) static void
FUNC_16 (value_range_t *VAR_4, value_range_t *VAR_5)
{
  if (VAR_4->type == VAR_2)
    {
      FUNC_5 (VAR_4, VAR_5);
      return;
    }

  if (VAR_5->type == VAR_2)
    {

      return;
    }

  if (VAR_4->type == VAR_3)
    {

      return;
    }

  if (VAR_5->type == VAR_3)
    {
      FUNC_11 (VAR_4);
      return;
    }

  if (VAR_4->type == VAR_1 && VAR_5->type == VAR_1)
    {


      if (FUNC_13 (VAR_4, VAR_5))
 {
   int VAR_6;
   tree VAR_7, VAR_8;




   VAR_6 = FUNC_4 (VAR_4->min, VAR_5->min);
   if (VAR_6 == 0 || VAR_6 == 1)
     VAR_7 = VAR_5->min;
   else if (VAR_6 == -1)
     VAR_7 = VAR_4->min;
   else
     {
       FUNC_11 (VAR_4);
       return;
     }




   VAR_6 = FUNC_4 (VAR_4->max, VAR_5->max);
   if (VAR_6 == 0 || VAR_6 == -1)
     VAR_8 = VAR_5->max;
   else if (VAR_6 == 1)
     VAR_8 = VAR_4->max;
   else
     {
       FUNC_11 (VAR_4);
       return;
     }


   if (FUNC_0 (FUNC_1 (VAR_7))
       && ((FUNC_15 (VAR_7) || FUNC_7 (VAR_7))
    && (FUNC_14 (VAR_8) || FUNC_7 (VAR_8))))
     {
       FUNC_11 (VAR_4);
       return;
     }



   if (VAR_4->equiv && VAR_5->equiv && VAR_4->equiv != VAR_5->equiv)
     FUNC_2 (VAR_4->equiv, VAR_5->equiv);
   else if (VAR_4->equiv && !VAR_5->equiv)
     FUNC_3 (VAR_4->equiv);

   FUNC_9 (VAR_4, VAR_4->type, VAR_7, VAR_8, VAR_4->equiv);
 }
      else
 goto no_meet;
    }
  else if (VAR_4->type == VAR_0 && VAR_5->type == VAR_0)
    {

      if (FUNC_4 (VAR_4->min, VAR_5->min) == 0
   && FUNC_4 (VAR_4->max, VAR_5->max) == 0
   && FUNC_4 (VAR_4->min, VAR_4->max) == 0)
 {


   if (VAR_4->equiv && VAR_5->equiv && VAR_4->equiv != VAR_5->equiv)
     FUNC_2 (VAR_4->equiv, VAR_5->equiv);
   else if (VAR_4->equiv && !VAR_5->equiv)
     FUNC_3 (VAR_4->equiv);
 }
      else
 goto no_meet;
    }
  else if (VAR_4->type == VAR_0 || VAR_5->type == VAR_0)
    {



      if (!FUNC_12 (VAR_4)
   && !FUNC_12 (VAR_5)
   && !FUNC_13 (VAR_4, VAR_5))
 {



   if (VAR_5->type == VAR_0)
     FUNC_9 (VAR_4, VAR_5->type, VAR_5->min, VAR_5->max, VAR_4->equiv);



   if (VAR_4->equiv && VAR_5->equiv && VAR_4->equiv != VAR_5->equiv)
     FUNC_2 (VAR_4->equiv, VAR_5->equiv);
   else if (VAR_4->equiv && !VAR_5->equiv)
     FUNC_3 (VAR_4->equiv);
 }
      else
 goto no_meet;
    }
  else
    FUNC_6 ();

  return;

no_meet:





  if (!FUNC_12 (VAR_4)
      && ((VAR_4->type == VAR_1 && !FUNC_8 (VAR_4))
   || (VAR_4->type == VAR_0 && FUNC_8 (VAR_4)))
      && !FUNC_12 (VAR_5)
      && ((VAR_5->type == VAR_1 && !FUNC_8 (VAR_5))
   || (VAR_5->type == VAR_0 && FUNC_8 (VAR_5))))
    {
      FUNC_10 (VAR_4, FUNC_1 (VAR_4->min));



      if (VAR_4->equiv)
 FUNC_3 (VAR_4->equiv);
    }
  else
    FUNC_11 (VAR_4);
}
