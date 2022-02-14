
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ tree ;
struct z_candidate {scalar_t__ fn; } ;
struct TYPE_6__ {int ellipsis_p; scalar_t__ bad_p; } ;
typedef TYPE_1__ conversion ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 scalar_t__ FUNC_3 (scalar_t__) ;
 scalar_t__ FUNC_4 (scalar_t__) ;
 struct z_candidate* FUNC_5 (struct z_candidate**,scalar_t__,scalar_t__,int,TYPE_1__**,scalar_t__,scalar_t__,int) ;
 TYPE_1__** FUNC_6 (int) ;
 TYPE_1__* FUNC_7 (scalar_t__,scalar_t__) ;
 TYPE_1__* FUNC_8 (scalar_t__,scalar_t__,scalar_t__,int,int) ;
 int FUNC_9 (scalar_t__) ;
 scalar_t__ FUNC_10 (scalar_t__) ;
 int FUNC_11 (scalar_t__) ;
 scalar_t__ VAR_2 ;

__attribute__((used)) static struct z_candidate *
FUNC_12 (struct z_candidate **VAR_3, tree VAR_4, tree VAR_5,
      tree VAR_6, tree VAR_7, tree VAR_8)
{
  tree VAR_9 = FUNC_2 (FUNC_2 (VAR_4));
  int VAR_10, VAR_11, VAR_12, VAR_13;
  tree VAR_14, VAR_15, VAR_16;
  conversion **VAR_17;

  for (VAR_14 = VAR_9; FUNC_1 (VAR_14) != VAR_0; )
    VAR_14 = FUNC_2 (VAR_14);
  VAR_14 = FUNC_4 (VAR_14);

  VAR_11 = FUNC_9 (VAR_6) + 1;
  VAR_17 = FUNC_6 (VAR_11);
  VAR_15 = VAR_14;
  VAR_16 = VAR_6;
  VAR_12 = 1;
  VAR_13 = VAR_1;


  if (*VAR_3 && (*VAR_3)->fn == VAR_9)
    return ((void*)0);

  for (VAR_10 = 0; VAR_10 < VAR_11; ++VAR_10)
    {
      tree VAR_18 = VAR_10 == 0 ? VAR_5 : FUNC_3 (VAR_16);
      tree VAR_19 = FUNC_10 (VAR_18);
      conversion *VAR_20;

      if (VAR_10 == 0)
 VAR_20 = FUNC_8 (VAR_9, VAR_19, VAR_18, 0,
     VAR_13);
      else if (VAR_15 == VAR_2)
 break;
      else if (VAR_15)
 VAR_20 = FUNC_8 (FUNC_3 (VAR_15), VAR_19, VAR_18,
                  0, VAR_13);
      else
 {
   VAR_20 = FUNC_7 (VAR_19, VAR_18);
   VAR_20->ellipsis_p = 1;
 }

      VAR_17[VAR_10] = VAR_20;
      if (! VAR_20)
 break;

      if (VAR_20->bad_p)
 VAR_12 = -1;

      if (VAR_10 == 0)
 continue;

      if (VAR_15)
 VAR_15 = FUNC_0 (VAR_15);
      VAR_16 = FUNC_0 (VAR_16);
    }

  if (VAR_10 < VAR_11)
    VAR_12 = 0;

  if (!FUNC_11 (VAR_15))
    VAR_12 = 0;

  return FUNC_5 (VAR_3, VAR_9, VAR_6, VAR_11, VAR_17,
   VAR_7, VAR_8, VAR_12);
}
