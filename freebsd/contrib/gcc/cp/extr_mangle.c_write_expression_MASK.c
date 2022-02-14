
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ tree ;
typedef enum tree_code { ____Placeholder_tree_code } tree_code ;
struct TYPE_6__ {int need_abi_warning; } ;
struct TYPE_5__ {scalar_t__ identifier; char* mangled_name; } ;
struct TYPE_4__ {scalar_t__ identifier; int arity; char* mangled_name; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 int VAR_2 ;


 int VAR_3 ;

 int VAR_4 ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 TYPE_3__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 scalar_t__ FUNC_3 (scalar_t__) ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 int VAR_11 ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (scalar_t__) ;
 scalar_t__ VAR_12 ;

 scalar_t__ VAR_13 ;

 scalar_t__ VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 scalar_t__ FUNC_6 (scalar_t__) ;
 scalar_t__ FUNC_7 (int) ;
 int FUNC_8 (int) ;
 scalar_t__ FUNC_9 (scalar_t__,int) ;
 scalar_t__ FUNC_10 (scalar_t__) ;
 scalar_t__ FUNC_11 (scalar_t__) ;
 scalar_t__ FUNC_12 (scalar_t__) ;
 scalar_t__ FUNC_13 (int) ;
 TYPE_2__* VAR_18 ;
 scalar_t__ FUNC_14 (scalar_t__,int ) ;
 int FUNC_15 (scalar_t__,int ,int ,int) ;
 int FUNC_16 (char*) ;
 int FUNC_17 (int) ;
 TYPE_1__* VAR_19 ;
 int FUNC_18 (char*) ;
 scalar_t__ VAR_20 ;
 int FUNC_19 (char) ;
 int FUNC_20 (scalar_t__) ;
 int FUNC_21 (scalar_t__) ;
 int FUNC_22 (scalar_t__,int) ;
 int FUNC_23 (scalar_t__) ;
 int FUNC_24 (char const*) ;
 int FUNC_25 (scalar_t__) ;
 int FUNC_26 (scalar_t__) ;
 int FUNC_27 (scalar_t__) ;
 int FUNC_28 (scalar_t__) ;

__attribute__((used)) static void
FUNC_29 (tree VAR_21)
{
  enum tree_code VAR_22;

  VAR_22 = FUNC_6 (VAR_21);




  while (FUNC_6 (VAR_21) == VAR_9
  || FUNC_6 (VAR_21) == VAR_8)
    {
      VAR_21 = FUNC_9 (VAR_21, 0);
      VAR_22 = FUNC_6 (VAR_21);
    }

  if (VAR_22 == VAR_1)
    {
      VAR_21 = FUNC_0 (VAR_21);
      VAR_22 = FUNC_6 (VAR_21);
    }



  if (VAR_22 == VAR_11)
    {
      VAR_21 = FUNC_14 (VAR_0,
         FUNC_15 ( VAR_10,
          FUNC_4 (VAR_21),
          FUNC_5 (VAR_21),
                         0));
      VAR_22 = FUNC_6 (VAR_21);
    }


  if (VAR_22 == VAR_17
      || VAR_22 == VAR_16
      || VAR_22 == VAR_2
      || VAR_22 == VAR_15)
    FUNC_27 (VAR_21);

  else if (FUNC_7 (VAR_22) == VAR_20
    || (FUNC_13 (2) && VAR_22 == VAR_4))
    FUNC_25 (VAR_21);
  else if (FUNC_1 (VAR_21))
    {


      if (VAR_22 == VAR_4)
 VAR_5.need_abi_warning = 1;
      FUNC_19 ('L');
      FUNC_22 (VAR_21, 0);
      FUNC_19 ('E');
    }
  else if (FUNC_6 (VAR_21) == VAR_13
    && FUNC_12 (FUNC_9 (VAR_21, 0)))
    {
      FUNC_24 ("st");
      FUNC_28 (FUNC_9 (VAR_21, 0));
    }
  else if (FUNC_13 (2) && FUNC_6 (VAR_21) == 129)
    {
      tree VAR_23 = FUNC_9 (VAR_21, 0);
      tree VAR_24 = FUNC_9 (VAR_21, 1);






      if (FUNC_1 (VAR_24))
 FUNC_29 (VAR_24);
      else
 {
   tree VAR_25;

   FUNC_24 ("sr");
   FUNC_28 (VAR_23);


   if (FUNC_6 (VAR_24) == VAR_14)
     {
       VAR_25 = FUNC_9 (VAR_24, 1);
       VAR_24 = FUNC_9 (VAR_24, 0);
     }
   else
     VAR_25 = VAR_10;

   if (FUNC_3 (VAR_24))
     FUNC_20 (FUNC_10 (VAR_24));
   else if (FUNC_2 (VAR_24))
     {
       int VAR_26;
       const char *VAR_27 = ((void*)0);




       for (VAR_26 = 0; VAR_26 < VAR_7; ++VAR_26)
  if (VAR_19[VAR_26].identifier == VAR_24)
    {


      if (VAR_19[VAR_26].arity == 2)
        {
   VAR_27 = VAR_19[VAR_26].mangled_name;
   break;
        }
      else if (!VAR_27)
        VAR_27 = VAR_19[VAR_26].mangled_name;
    }
  else if (VAR_18[VAR_26].identifier
    == VAR_24)
    {
      VAR_27
        = VAR_18[VAR_26].mangled_name;
      break;
    }
       FUNC_24 (VAR_27);
     }
   else
     FUNC_23 (VAR_24);

   if (VAR_25)
     FUNC_26 (VAR_25);
 }
    }
  else
    {
      int VAR_28;





      if (FUNC_6 (VAR_21) == VAR_0
   && FUNC_10 (VAR_21)
   && FUNC_6 (FUNC_10 (VAR_21)) == VAR_12)
 {
   VAR_21 = FUNC_9 (VAR_21, 0);
   if (FUNC_1 (VAR_21))
     {
       FUNC_29 (VAR_21);
       return;
     }

   VAR_22 = FUNC_6 (VAR_21);
 }


      FUNC_24 (VAR_19[(int) VAR_22].mangled_name);

      switch (VAR_22)
 {
 case 132:
   FUNC_18 ("call_expr cannot be mangled due to a defect in the C++ ABI");
   break;

 case 131:
   FUNC_28 (FUNC_10 (VAR_21));


   if (!FUNC_9 (VAR_21, 0))
     FUNC_18 ("zero-operand casts cannot be mangled due to a defect "
     "in the C++ ABI");
   else
     FUNC_29 (FUNC_11 (FUNC_9 (VAR_21, 0)));
   break;

 case 128:
 case 130:
   FUNC_28 (FUNC_10 (VAR_21));
   FUNC_29 (FUNC_9 (VAR_21, 0));
   break;



 case 129:
   FUNC_28 (FUNC_9 (VAR_21, 0));
   if (FUNC_6 (FUNC_9 (VAR_21, 1)) == VAR_6)
     FUNC_23 (FUNC_9 (VAR_21, 1));
   else if (FUNC_6 (FUNC_9 (VAR_21, 1)) == VAR_14)
     {
       tree VAR_29;
       tree VAR_30;

       VAR_29 = FUNC_9 (VAR_21, 1);
       VAR_30 = FUNC_9 (VAR_29, 0);

       FUNC_17 (FUNC_6 (VAR_30) == VAR_6);
       FUNC_23 (FUNC_9 (VAR_29, 0));
       FUNC_26 (FUNC_9 (VAR_29, 1));
     }
   else
     {


       VAR_5.need_abi_warning = 1;
       FUNC_21 (FUNC_9 (VAR_21, 1));
     }
   break;

 default:
   for (VAR_28 = 0; VAR_28 < FUNC_8 (VAR_22); ++VAR_28)
     {
       tree VAR_31 = FUNC_9 (VAR_21, VAR_28);





       if (VAR_22 == VAR_3 && VAR_28 == 1 && !VAR_31)
  {
    FUNC_16 ("omitted middle operand to %<?:%> operand "
    "cannot be mangled");
    continue;
  }
       FUNC_29 (VAR_31);
     }
 }
    }
}
