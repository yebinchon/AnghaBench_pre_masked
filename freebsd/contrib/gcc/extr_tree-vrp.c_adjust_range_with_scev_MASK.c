
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ type; scalar_t__ min; scalar_t__ max; int equiv; } ;
typedef TYPE_1__ value_range_t ;
typedef scalar_t__ tree ;
struct loop {int num; } ;
typedef enum ev_direction { ____Placeholder_ev_direction } ev_direction ;
struct TYPE_6__ {int * parray; } ;


 size_t FUNC_0 (scalar_t__) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 scalar_t__ FUNC_3 (scalar_t__) ;
 scalar_t__ FUNC_4 (scalar_t__) ;
 scalar_t__ FUNC_5 (scalar_t__) ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_6 (struct loop*,scalar_t__) ;
 int FUNC_7 (scalar_t__,scalar_t__) ;
 TYPE_3__* VAR_8 ;
 scalar_t__ FUNC_8 (scalar_t__,int ) ;
 scalar_t__ FUNC_9 (scalar_t__,int ) ;
 scalar_t__ FUNC_10 (struct loop*,int ) ;
 scalar_t__ FUNC_11 (scalar_t__) ;
 scalar_t__ FUNC_12 (scalar_t__) ;
 scalar_t__ FUNC_13 (scalar_t__) ;
 scalar_t__ FUNC_14 (scalar_t__,scalar_t__) ;
 int FUNC_15 (scalar_t__) ;
 scalar_t__ FUNC_16 (scalar_t__,scalar_t__,scalar_t__,int ,int) ;
 int FUNC_17 (TYPE_1__*,scalar_t__,scalar_t__,scalar_t__,int ) ;
 scalar_t__ FUNC_18 (scalar_t__,scalar_t__) ;
 int FUNC_19 (scalar_t__) ;

__attribute__((used)) static void
FUNC_20 (value_range_t *VAR_9, struct loop *VAR_10, tree VAR_11,
   tree VAR_12)
{
  tree VAR_13, VAR_14, VAR_15, VAR_16, VAR_17, VAR_18, VAR_19, VAR_20;
  enum ev_direction VAR_21;



  if (VAR_9->type == VAR_4)
    return;

  VAR_15 = FUNC_10 (VAR_10, FUNC_6 (VAR_10, VAR_12));
  if (FUNC_2 (VAR_15) != VAR_3)
    return;

  VAR_13 = FUNC_9 (VAR_15, VAR_10->num);
  VAR_14 = FUNC_8 (VAR_15, VAR_10->num);





  if (VAR_14 == VAR_2
      || !FUNC_11 (VAR_14)
      || !FUNC_19 (VAR_13))
    return;

  VAR_21 = FUNC_15 (VAR_15);
  if (

      VAR_21 == VAR_1

      || FUNC_16 (VAR_13, VAR_14, VAR_11,
    VAR_8->parray[FUNC_0 (VAR_15)],
    1))
    return;

  VAR_20 = FUNC_3 (VAR_12);



  if (FUNC_1 (VAR_20) && FUNC_11 (VAR_13))
    return;






  if (FUNC_1 (VAR_20) || !FUNC_5 (VAR_20))
    VAR_16 = FUNC_14 (VAR_20, VAR_20);
  else
    VAR_16 = FUNC_5 (VAR_20);
  if (FUNC_1 (VAR_20) || !FUNC_4 (VAR_20))
    VAR_17 = FUNC_18 (VAR_20, VAR_20);
  else
    VAR_17 = FUNC_4 (VAR_20);

  if (VAR_9->type == VAR_7 || VAR_9->type == VAR_6)
    {
      VAR_18 = VAR_16;
      VAR_19 = VAR_17;




      if (VAR_21 == VAR_0)
 VAR_19 = VAR_13;
      else
 VAR_18 = VAR_13;





      if (FUNC_7 (VAR_18, VAR_19) == 1)
 return;

      FUNC_17 (VAR_9, VAR_5, VAR_18, VAR_19, VAR_9->equiv);
    }
  else if (VAR_9->type == VAR_5)
    {
      VAR_18 = VAR_9->min;
      VAR_19 = VAR_9->max;

      if (VAR_21 == VAR_0)
 {


   if (FUNC_7 (VAR_13, VAR_19) == -1)
     {
       VAR_19 = VAR_13;





       if (FUNC_7 (VAR_18, VAR_19) == 1)
  return;
     }





   if (FUNC_12 (VAR_18))
     VAR_18 = VAR_16;
 }
      else
 {

   if (FUNC_7 (VAR_13, VAR_18) == 1)
     {
       VAR_18 = VAR_13;


       if (FUNC_7 (VAR_18, VAR_19) == 1)
  return;
     }

   if (FUNC_13 (VAR_19))
     VAR_19 = VAR_17;
 }

      FUNC_17 (VAR_9, VAR_5, VAR_18, VAR_19, VAR_9->equiv);
    }
}
