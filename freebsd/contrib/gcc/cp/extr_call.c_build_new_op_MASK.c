
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ tree ;
struct z_candidate {scalar_t__ fn; TYPE_2__** convs; struct candidate_warning* warnings; } ;
struct candidate_warning {int loser; struct candidate_warning* next; } ;
typedef enum tree_code { ____Placeholder_tree_code } tree_code ;
struct TYPE_5__ {TYPE_2__* next; } ;
struct TYPE_6__ {scalar_t__ kind; TYPE_1__ u; } ;
typedef TYPE_2__ conversion ;
struct TYPE_7__ {int name; } ;




 scalar_t__ FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__) ;





 scalar_t__ FUNC_2 (scalar_t__) ;




 scalar_t__ VAR_0 ;

 scalar_t__ VAR_1 ;




 int FUNC_3 (scalar_t__) ;

 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;







 scalar_t__ FUNC_4 (scalar_t__) ;
 scalar_t__ FUNC_5 (scalar_t__) ;





 scalar_t__ FUNC_6 (scalar_t__) ;
 int FUNC_7 (scalar_t__) ;



 scalar_t__ VAR_6 ;
 int FUNC_8 (struct z_candidate**,int,int,scalar_t__,scalar_t__*,int) ;
 int FUNC_9 (int ,scalar_t__,scalar_t__,int,scalar_t__,scalar_t__,int,struct z_candidate**) ;
 scalar_t__ FUNC_10 (int) ;
 scalar_t__ FUNC_11 (int) ;
 scalar_t__ FUNC_12 (scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_13 (scalar_t__,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_14 (scalar_t__,char*) ;
 scalar_t__ FUNC_15 (scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_16 (scalar_t__,int,scalar_t__) ;
 scalar_t__ FUNC_17 (scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_18 (struct z_candidate*,int ) ;
 scalar_t__ FUNC_19 (int,scalar_t__,int) ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 void* FUNC_20 (int ) ;
 scalar_t__ FUNC_21 (TYPE_2__*,scalar_t__) ;
 scalar_t__ FUNC_22 (int,scalar_t__,scalar_t__) ;
 scalar_t__ VAR_9 ;
 scalar_t__ FUNC_23 (scalar_t__) ;
 int FUNC_24 () ;
 scalar_t__ VAR_10 ;
 int FUNC_25 (struct z_candidate*,int ,int) ;
 scalar_t__ FUNC_26 (scalar_t__,scalar_t__,int) ;
 int FUNC_27 (scalar_t__,scalar_t__,int) ;
 int FUNC_28 (int *,void*) ;
 int FUNC_29 (int,int,scalar_t__,scalar_t__,scalar_t__,char*) ;
 TYPE_3__* VAR_11 ;
 int VAR_12 ;
 int FUNC_30 (char*,scalar_t__,int ) ;
 scalar_t__ FUNC_31 (scalar_t__) ;
 int FUNC_32 (struct z_candidate*) ;
 struct z_candidate* FUNC_33 (struct z_candidate*,int,int*) ;
 struct z_candidate* FUNC_34 (struct z_candidate*) ;
 scalar_t__ FUNC_35 (scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_36 (int ,char*,scalar_t__,scalar_t__) ;

tree
FUNC_37 (enum tree_code VAR_13, int VAR_14, tree VAR_15, tree VAR_16, tree VAR_17,
       bool *VAR_18)
{
  struct z_candidate *VAR_19 = 0, *VAR_20;
  tree VAR_21, VAR_22;
  tree VAR_23[3];
  tree VAR_24 = VAR_5;
  bool VAR_25 = 0;
  enum tree_code VAR_26 = VAR_4;
  conversion *VAR_27;
  void *VAR_28;
  bool VAR_29;
  bool VAR_30;

  if (FUNC_23 (VAR_15)
      || FUNC_23 (VAR_16)
      || FUNC_23 (VAR_17))
    return VAR_9;

  if (VAR_13 == 147)
    {
      VAR_26 = FUNC_4 (VAR_17);
      VAR_17 = VAR_5;
      VAR_22 = FUNC_10 (VAR_26);
    }
  else
    VAR_22 = FUNC_11 (VAR_13);

  VAR_15 = FUNC_31 (VAR_15);

  switch (VAR_13)
    {
    case 144:
    case 128:
    case 129:
    case 160:

      FUNC_24 ();

    case 164:
      return FUNC_17 (VAR_15, VAR_16);

    default:
      break;
    }

  VAR_16 = FUNC_31 (VAR_16);
  VAR_17 = FUNC_31 (VAR_17);

  if (VAR_13 == 161)
    {
      if (VAR_16 == VAR_5
   || FUNC_4 (FUNC_5 (VAR_16)) == VAR_6
   || FUNC_4 (FUNC_5 (VAR_17)) == VAR_6
   || (! FUNC_3 (FUNC_5 (VAR_16))
       && ! FUNC_3 (FUNC_5 (VAR_17))))
 goto builtin;
    }
  else if (! FUNC_3 (FUNC_5 (VAR_15))
    && (! VAR_16 || ! FUNC_3 (FUNC_5 (VAR_16))))
    goto builtin;

  if (VAR_13 == 140 || VAR_13 == 141)
    VAR_16 = VAR_10;

  VAR_21 = VAR_5;
  if (VAR_17)
    VAR_21 = FUNC_35 (VAR_5, VAR_17, VAR_21);
  if (VAR_16)
    VAR_21 = FUNC_35 (VAR_5, VAR_16, VAR_21);
  VAR_21 = FUNC_35 (VAR_5, VAR_15, VAR_21);


  VAR_28 = FUNC_20 (0);



  FUNC_9 (FUNC_27 (VAR_22, VAR_21, 1),
    VAR_21, VAR_5, 0, VAR_5, VAR_5,
    VAR_14, &VAR_19);

  if (FUNC_2 (FUNC_5 (VAR_15)))
    {
      tree VAR_31;

      VAR_31 = FUNC_26 (FUNC_5 (VAR_15), VAR_22, 1);
      if (VAR_31 == VAR_9)
 {
   VAR_24 = VAR_9;
   goto user_defined_result_ready;
 }
      if (VAR_31)
 FUNC_9 (FUNC_1 (VAR_31), VAR_21,
   VAR_5, 0,
   FUNC_0 (VAR_31),
   FUNC_6 (FUNC_5 (VAR_15)),
   VAR_14, &VAR_19);
    }





  if (VAR_13 == 161)
    {
      VAR_23[0] = VAR_16;
      VAR_23[1] = VAR_17;
      VAR_23[2] = VAR_15;
    }
  else
    {
      VAR_23[0] = VAR_15;
      VAR_23[1] = VAR_16;
      VAR_23[2] = VAR_5;
    }

  FUNC_8 (&VAR_19, VAR_13, VAR_26, VAR_22, VAR_23, VAR_14);

  switch (VAR_13)
    {
    case 162:
    case 170:






      VAR_29 = 1;
      break;

    default:
      VAR_29 = VAR_12;
      break;
    }

  VAR_19 = FUNC_33 (VAR_19, VAR_29, &VAR_30);
  if (!VAR_30)
    {
      switch (VAR_13)
 {
 case 140:
 case 141:


   if (VAR_14 & VAR_2)
     FUNC_30 ("no %<%D(int)%> declared for postfix %qs, "
       "trying prefix operator instead",
       VAR_22,
       VAR_11[VAR_13].name);
   if (VAR_13 == 140)
     VAR_13 = 138;
   else
     VAR_13 = 139;
   VAR_24 = FUNC_37 (VAR_13, VAR_14, VAR_15, VAR_5, VAR_5,
     VAR_18);
   break;


 case 170:
 case 162:
 case 163:
   VAR_24 = VAR_5;
   VAR_25 = 1;
   break;

 default:
   if (VAR_14 & VAR_2)
     {
       FUNC_29 (VAR_13, VAR_26, VAR_15, VAR_16, VAR_17, "no match");
       FUNC_32 (VAR_19);
     }
   VAR_24 = VAR_9;
   break;
 }
    }
  else
    {
      VAR_20 = FUNC_34 (VAR_19);
      if (VAR_20 == 0)
 {
   if (VAR_14 & VAR_2)
     {
       FUNC_29 (VAR_13, VAR_26, VAR_15, VAR_16, VAR_17, "ambiguous overload");
       FUNC_32 (VAR_19);
     }
   VAR_24 = VAR_9;
 }
      else if (FUNC_4 (VAR_20->fn) == VAR_1)
 {
   if (VAR_18)
     *VAR_18 = 1;

   VAR_24 = FUNC_18 (VAR_20, VAR_3);
 }
      else
 {

   if (VAR_20->warnings)
     {
       struct candidate_warning *VAR_32;
       for (VAR_32 = VAR_20->warnings; VAR_32; VAR_32 = VAR_32->next)
  FUNC_25 (VAR_20, VAR_32->loser, 1);
     }


   switch (VAR_13)
     {
     case 157:
     case 152:
     case 158:
     case 154:
     case 159:
     case 143:
       if (FUNC_4 (FUNC_5 (VAR_15)) == VAR_0
    && FUNC_4 (FUNC_5 (VAR_16)) == VAR_0
    && (FUNC_7 (FUNC_5 (VAR_15))
        != FUNC_7 (FUNC_5 (VAR_16))))
  {
    FUNC_36 (0, "comparison between %q#T and %q#T",
      FUNC_5 (VAR_15), FUNC_5 (VAR_16));
  }
       break;
     default:
       break;
     }





   VAR_27 = VAR_20->convs[0];
   if (VAR_27->kind == VAR_7)
     VAR_27 = VAR_27->u.next;
   VAR_15 = FUNC_21 (VAR_27, VAR_15);
   if (VAR_16)
     {
       VAR_27 = VAR_20->convs[1];
       if (VAR_27->kind == VAR_7)
  VAR_27 = VAR_27->u.next;
       VAR_16 = FUNC_21 (VAR_27, VAR_16);
     }
   if (VAR_17)
     {
       VAR_27 = VAR_20->convs[2];
       if (VAR_27->kind == VAR_7)
  VAR_27 = VAR_27->u.next;
       VAR_17 = FUNC_21 (VAR_27, VAR_17);
     }
 }
    }

 user_defined_result_ready:


  FUNC_28 (&VAR_8, VAR_28);

  if (VAR_24 || VAR_25)
    return VAR_24;

 builtin:
  switch (VAR_13)
    {
    case 147:
      return FUNC_16 (VAR_15, VAR_26, VAR_16);

    case 155:
      return FUNC_14 (VAR_15, "unary *");

    case 142:
    case 149:
    case 146:
    case 135:
    case 157:
    case 152:
    case 158:
    case 154:
    case 159:
    case 143:
    case 151:
    case 148:
    case 153:
    case 136:
    case 134:
    case 168:
    case 167:
    case 165:
    case 133:
    case 131:
      return FUNC_22 (VAR_13, VAR_15, VAR_16);

    case 130:
    case 145:
    case 166:
    case 132:
    case 138:
    case 140:
    case 139:
    case 141:
    case 137:
    case 156:
      return FUNC_19 (VAR_13, VAR_15, VAR_19 != 0);

    case 169:
      return FUNC_12 (VAR_15, VAR_16);

    case 161:
      return FUNC_13 (VAR_15, VAR_16, VAR_17);

    case 150:
      return FUNC_15 (FUNC_14 (VAR_15, ((void*)0)), VAR_16);


    case 170:
    case 163:
    case 162:
      return VAR_5;

    default:
      FUNC_24 ();
    }
  return VAR_5;
}
