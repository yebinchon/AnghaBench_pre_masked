
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ tree ;
struct z_candidate {int dummy; } ;
struct TYPE_6__ {int ellipsis_p; int this_p; scalar_t__ bad_p; } ;
typedef TYPE_1__ conversion ;


 int FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 scalar_t__ FUNC_3 (scalar_t__) ;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_4 (scalar_t__) ;
 int FUNC_5 (scalar_t__) ;
 scalar_t__ FUNC_6 (scalar_t__) ;
 scalar_t__ FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 struct z_candidate* FUNC_9 (struct z_candidate**,scalar_t__,scalar_t__,int,TYPE_1__**,scalar_t__,scalar_t__,int) ;
 TYPE_1__** FUNC_10 (int) ;
 TYPE_1__* FUNC_11 (scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_12 (scalar_t__) ;
 scalar_t__ FUNC_13 (scalar_t__,int ) ;
 int FUNC_14 (int) ;
 TYPE_1__* FUNC_15 (scalar_t__,scalar_t__,scalar_t__,int,int) ;
 int FUNC_16 (scalar_t__) ;
 scalar_t__ FUNC_17 (scalar_t__) ;
 scalar_t__ FUNC_18 (scalar_t__,scalar_t__) ;
 int FUNC_19 (scalar_t__) ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static struct z_candidate *
FUNC_20 (struct z_candidate **VAR_2,
   tree VAR_3, tree VAR_4, tree VAR_5,
   tree VAR_6, tree VAR_7,
   int VAR_8)
{
  tree VAR_9 = FUNC_7 (FUNC_5 (VAR_3));
  int VAR_10, VAR_11;
  conversion **VAR_12;
  tree VAR_13, VAR_14;
  tree VAR_15;
  int VAR_16 = 1;




  FUNC_14 (!FUNC_0 (VAR_3) || FUNC_2 (VAR_3));



  if (FUNC_1 (VAR_3))
    {
      VAR_9 = FUNC_18 (VAR_3, VAR_9);
      VAR_15 = VAR_5;
      VAR_5 = FUNC_18 (VAR_3, VAR_5);
    }
  else
    VAR_15 = VAR_5;

  VAR_11 = FUNC_16 (VAR_5);
  VAR_12 = FUNC_10 (VAR_11);
  VAR_13 = VAR_9;
  for (VAR_10 = 0; VAR_10 < VAR_11; ++VAR_10)
    {
      if (VAR_13 == VAR_0 || VAR_13 == VAR_1)
 break;
      VAR_13 = FUNC_4 (VAR_13);
    }

  if (VAR_10 < VAR_11 && VAR_13)
    VAR_16 = 0;


  else if (!FUNC_19 (VAR_13))
    VAR_16 = 0;

  if (! VAR_16)
    goto out;





  VAR_13 = VAR_9;
  VAR_14 = VAR_5;

  for (VAR_10 = 0; VAR_10 < VAR_11; ++VAR_10)
    {
      tree VAR_17 = FUNC_6 (VAR_14);
      tree VAR_18 = FUNC_17 (VAR_17);
      conversion *VAR_19;
      int VAR_20;

      if (VAR_13 == VAR_1)
 break;

      VAR_20 = (VAR_10 == 0 && FUNC_3 (VAR_3)
   && ! FUNC_1 (VAR_3));

      if (VAR_13)
 {
   tree VAR_21 = FUNC_6 (VAR_13);
   if (VAR_4 && VAR_20)
     {
       VAR_21
  = FUNC_13 (VAR_4,
     FUNC_8 (FUNC_5 (VAR_21)));
       VAR_21 = FUNC_12 (VAR_21);
     }

   VAR_19 = FUNC_15 (VAR_21, VAR_18, VAR_17,
                    0, VAR_8);
 }
      else
 {
   VAR_19 = FUNC_11 (VAR_18, VAR_17);
   VAR_19->ellipsis_p = 1;
 }

      if (VAR_19 && VAR_20)
 VAR_19->this_p = 1;

      VAR_12[VAR_10] = VAR_19;
      if (! VAR_19)
 {
   VAR_16 = 0;
   break;
 }

      if (VAR_19->bad_p)
 VAR_16 = -1;

      if (VAR_13)
 VAR_13 = FUNC_4 (VAR_13);
      VAR_14 = FUNC_4 (VAR_14);
    }

 out:
  return FUNC_9 (VAR_2, VAR_3, VAR_15, VAR_11, VAR_12,
   VAR_6, VAR_7, VAR_16);
}
