
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef scalar_t__ tree ;
struct z_candidate {int viable; TYPE_2__* second_conv; scalar_t__ fn; scalar_t__ args; TYPE_1__** convs; struct z_candidate* next; } ;
struct TYPE_13__ {int bad_p; struct z_candidate* cand; } ;
typedef TYPE_2__ conversion ;
struct TYPE_12__ {int bad_p; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 scalar_t__ FUNC_3 (scalar_t__) ;
 int FUNC_4 (scalar_t__) ;
 scalar_t__ FUNC_5 (scalar_t__) ;
 scalar_t__ FUNC_6 (scalar_t__) ;
 int FUNC_7 (scalar_t__) ;
 struct z_candidate* FUNC_8 (struct z_candidate**,scalar_t__,scalar_t__,scalar_t__,int ,int ,int ) ;
 struct z_candidate* FUNC_9 (struct z_candidate**,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,int ,int ,int ,int ) ;
 TYPE_2__* FUNC_10 (int ,scalar_t__,TYPE_2__*) ;
 TYPE_2__* FUNC_11 (scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_12 (int ,int ) ;
 int FUNC_13 (scalar_t__) ;
 scalar_t__ FUNC_14 (scalar_t__) ;
 int FUNC_15 (scalar_t__) ;
 scalar_t__ FUNC_16 (scalar_t__,scalar_t__) ;
 int VAR_5 ;
 TYPE_2__* FUNC_17 (scalar_t__,TYPE_2__*) ;
 scalar_t__ FUNC_18 (scalar_t__) ;
 TYPE_2__* FUNC_19 (TYPE_2__*,TYPE_2__*) ;
 int VAR_6 ;
 scalar_t__ FUNC_20 (scalar_t__,scalar_t__) ;
 struct z_candidate* FUNC_21 (struct z_candidate*,int ,int*) ;
 struct z_candidate* FUNC_22 (struct z_candidate*) ;
 scalar_t__ FUNC_23 (scalar_t__,int ,scalar_t__) ;

__attribute__((used)) static conversion *
FUNC_24 (tree VAR_7, tree VAR_8, tree VAR_9)
{
  tree VAR_10;
  tree VAR_11;
  conversion *VAR_12;
  tree VAR_13;
  struct z_candidate *VAR_14;
  struct z_candidate *VAR_15;
  bool VAR_16;

  VAR_10 = FUNC_18 (VAR_8);
  if (!VAR_10)
    return ((void*)0);
  VAR_14 = 0;






  VAR_11 = FUNC_12 (FUNC_13 (VAR_8), 0);
  VAR_11 = FUNC_16 (VAR_2, VAR_11);

  VAR_13 = FUNC_14 (VAR_7);

  while (VAR_10)
    {
      tree VAR_17 = FUNC_6 (VAR_10);

      for (; VAR_17; VAR_17 = FUNC_1 (VAR_17))
 {
   tree VAR_18 = FUNC_0 (VAR_17);
   tree VAR_19 = FUNC_5 (FUNC_5 (VAR_18));

   VAR_15 = ((void*)0);



   if (FUNC_3 (VAR_18) == VAR_4)
     {
       VAR_15 = FUNC_9 (&VAR_14,
          VAR_18, VAR_8,
          VAR_2,
          VAR_11,
          VAR_13,
          FUNC_7 (VAR_8),
          FUNC_4 (VAR_10),
          VAR_1,
          VAR_0);

       if (VAR_15)
  {




    VAR_18 = VAR_15->fn;
    VAR_19 = FUNC_5 (FUNC_5 (VAR_18));
    if (FUNC_3 (VAR_19) != VAR_3
        || !FUNC_20 (VAR_7, FUNC_5 (VAR_19)))
      {
        VAR_14 = VAR_14->next;
        VAR_15 = ((void*)0);
      }
  }
     }
   else if (FUNC_3 (VAR_19) == VAR_3
     && FUNC_20 (VAR_7, FUNC_5 (VAR_19)))
     VAR_15 = FUNC_8 (&VAR_14, VAR_18, VAR_8, VAR_11,
        FUNC_7 (VAR_8),
        FUNC_4 (VAR_10),
        VAR_1);

   if (VAR_15)
     {
       conversion *VAR_20;



       VAR_20
  = FUNC_11 (FUNC_5 (FUNC_5
        (FUNC_5 (VAR_15->fn))),
           VAR_2);
       VAR_15->second_conv
  = (FUNC_17
     (VAR_13, VAR_20));
       VAR_15->second_conv->bad_p |= VAR_15->convs[0]->bad_p;
     }
 }
      VAR_10 = FUNC_2 (VAR_10);
    }

  VAR_14 = FUNC_21 (VAR_14, VAR_6, &VAR_16);


  if (!VAR_16)
    return ((void*)0);

  VAR_15 = FUNC_22 (VAR_14);
  if (!VAR_15)
    return ((void*)0);



  VAR_15->args = FUNC_23 (VAR_2,
     FUNC_15 (VAR_9),
     FUNC_2 (VAR_15->args));



  VAR_12 = FUNC_10 (VAR_5,
       FUNC_5 (FUNC_5 (VAR_15->fn)),
       FUNC_11 (FUNC_5 (VAR_9), VAR_9));
  VAR_12->cand = VAR_15;



  VAR_15->second_conv = FUNC_19 (VAR_12, VAR_15->second_conv);

  if (VAR_15->viable == -1)
    VAR_12->bad_p = 1;

  return VAR_15->second_conv;
}
