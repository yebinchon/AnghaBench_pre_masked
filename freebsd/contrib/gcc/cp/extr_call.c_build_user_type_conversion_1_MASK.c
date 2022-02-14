
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_1__ ;


typedef char* tree ;
struct z_candidate {char* fn; int viable; TYPE_1__* second_conv; } ;
struct TYPE_10__ {int bad_p; int user_conv_p; struct z_candidate* cand; } ;
typedef TYPE_1__ conversion ;


 char* FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (char*) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (char*) ;
 scalar_t__ FUNC_4 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_5 (char*,char*) ;
 scalar_t__ FUNC_6 (char*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 char* VAR_5 ;
 char* FUNC_7 (char*) ;
 char* FUNC_8 (char*) ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 char* FUNC_9 (char*) ;
 scalar_t__ FUNC_10 (char*) ;
 char* FUNC_11 (char*) ;
 char* FUNC_12 (char*) ;
 char* FUNC_13 (char*) ;
 char* FUNC_14 (char*) ;
 struct z_candidate* FUNC_15 (struct z_candidate**,char*,char*,char*,char*,char*,int) ;
 struct z_candidate* FUNC_16 (struct z_candidate**,char*,char*,char*,char*,char*,char*,char*,int,int ) ;
 int FUNC_17 (struct z_candidate*) ;
 TYPE_1__* FUNC_18 (char*,char*) ;
 TYPE_1__* FUNC_19 (int ,char*,TYPE_1__*) ;
 TYPE_1__* FUNC_20 (char*,char*) ;
 char* FUNC_21 (int ,int ) ;
 int FUNC_22 (char*) ;
 char* FUNC_23 (char*) ;
 char* FUNC_24 (char*,char*) ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_25 (char*,char*,char*) ;
 int FUNC_26 (int) ;
 TYPE_1__* FUNC_27 (char*,char*,int ,int,int) ;
 char* FUNC_28 (char*) ;
 char* FUNC_29 (char*,int ,int ) ;
 TYPE_1__* FUNC_30 (TYPE_1__*,TYPE_1__*) ;
 char* FUNC_31 (char*) ;
 int VAR_10 ;
 int FUNC_32 (struct z_candidate*) ;
 struct z_candidate* FUNC_33 (struct z_candidate*,int ,int*) ;
 struct z_candidate* FUNC_34 (struct z_candidate*) ;
 char* FUNC_35 (char*,char*,char*) ;

__attribute__((used)) static struct z_candidate *
FUNC_36 (tree VAR_11, tree VAR_12, int VAR_13)
{
  struct z_candidate *VAR_14, *VAR_15;
  tree VAR_16 = FUNC_12 (VAR_12);
  tree VAR_17 = VAR_5;
  tree VAR_18 = VAR_5;
  conversion *VAR_19 = ((void*)0);
  tree VAR_20 = VAR_5;
  bool VAR_21;




  FUNC_26 (!FUNC_6 (VAR_16) || !FUNC_6 (VAR_11)
       || !FUNC_5 (VAR_11, VAR_16));

  if (FUNC_6 (VAR_11))
    VAR_17 = FUNC_29 (VAR_11, VAR_9, 0);

  if (FUNC_6 (VAR_16))
    VAR_18 = FUNC_28 (VAR_16);

  VAR_14 = 0;
  VAR_13 |= VAR_3;

  if (VAR_17)
    {
      tree VAR_22;

      VAR_17 = FUNC_0 (VAR_17);

      VAR_22 = FUNC_21 (FUNC_22 (VAR_11), 0);
      VAR_20 = FUNC_24 (VAR_5, VAR_12);


      FUNC_26 (!FUNC_2 (FUNC_7 (VAR_17))
    && !FUNC_3 (FUNC_7 (VAR_17)));
      VAR_20 = FUNC_35 (VAR_5, VAR_22, VAR_20);
    }
  for (; VAR_17; VAR_17 = FUNC_8 (VAR_17))
    {
      tree VAR_23 = FUNC_7 (VAR_17);
      if (FUNC_4 (VAR_23))
 continue;

      if (FUNC_10 (VAR_23) == VAR_7)
 VAR_15 = FUNC_16 (&VAR_14, VAR_23, VAR_11,
           VAR_5, VAR_20, VAR_5,
           FUNC_14 (VAR_11),
           FUNC_14 (VAR_11),
           VAR_13,
           VAR_0);
      else
 VAR_15 = FUNC_15 (&VAR_14, VAR_23, VAR_11,
           VAR_20, FUNC_14 (VAR_11),
           FUNC_14 (VAR_11),
           VAR_13);

      if (VAR_15)
 VAR_15->second_conv = FUNC_20 (VAR_11, VAR_5);
    }

  if (VAR_18)
    VAR_20 = FUNC_24 (VAR_5, FUNC_23 (VAR_12));

  for (; VAR_18; VAR_18 = FUNC_9 (VAR_18))
    {
      tree VAR_24;
      tree VAR_25 = FUNC_11 (VAR_18);
      int VAR_26 = VAR_3;





      if (FUNC_10 (VAR_11) == VAR_6)
 VAR_26 |= VAR_4;

      for (VAR_24 = FUNC_13 (VAR_18); VAR_24; VAR_24 = FUNC_8 (VAR_24))
 {
   tree VAR_27 = FUNC_7 (VAR_24);
   if (FUNC_10 (VAR_27) == VAR_7)
     VAR_15 = FUNC_16 (&VAR_14, VAR_27, VAR_16,
        VAR_5,
        VAR_20, VAR_11,
        FUNC_14 (VAR_16),
        VAR_25,
        VAR_13,
        VAR_1);
   else
     VAR_15 = FUNC_15 (&VAR_14, VAR_27, VAR_16,
        VAR_20,
        FUNC_14 (VAR_16),
        VAR_25,
        VAR_13);

   if (VAR_15)
     {
       conversion *VAR_28
  = FUNC_27 (VAR_11,
           FUNC_12 (FUNC_12 (VAR_15->fn)),
           0,
                        0, VAR_26);

       VAR_15->second_conv = VAR_28;

       if (!VAR_28)
  VAR_15->viable = 0;
       else if (VAR_14->viable == 1 && VAR_28->bad_p)
  VAR_15->viable = -1;
     }
 }
    }

  VAR_14 = FUNC_33 (VAR_14, VAR_10, &VAR_21);
  if (!VAR_21)
    return ((void*)0);

  VAR_15 = FUNC_34 (VAR_14);
  if (VAR_15 == 0)
    {
      if (VAR_13 & VAR_2)
 {
   FUNC_25 ("conversion from %qT to %qT is ambiguous",
      VAR_16, VAR_11);
   FUNC_32 (VAR_14);
 }

      VAR_15 = VAR_14;
      VAR_15->second_conv = FUNC_18 (VAR_11, VAR_12);
      VAR_15->second_conv->user_conv_p = 1;
      if (!FUNC_17 (VAR_14))
 VAR_15->second_conv->bad_p = 1;




      return VAR_15;
    }


  VAR_19 = FUNC_19
    (VAR_8,
     (FUNC_1 (VAR_15->fn)
      ? VAR_11 : FUNC_31 (FUNC_12 (FUNC_12 (VAR_15->fn)))),
     FUNC_20 (FUNC_12 (VAR_12), VAR_12));
  VAR_19->cand = VAR_15;


  VAR_15->second_conv = FUNC_30 (VAR_19,
        VAR_15->second_conv);

  if (VAR_15->viable == -1)
    VAR_15->second_conv->bad_p = 1;

  return VAR_15;
}
