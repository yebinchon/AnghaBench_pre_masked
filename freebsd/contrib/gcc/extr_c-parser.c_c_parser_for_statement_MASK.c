
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_6__ ;
typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef scalar_t__ tree ;
typedef int location_t ;
typedef int c_parser ;
struct TYPE_11__ {scalar_t__ value; } ;
struct TYPE_10__ {scalar_t__ value; } ;
struct TYPE_9__ {int value; } ;
struct TYPE_8__ {int location; } ;
struct TYPE_7__ {scalar_t__ type; scalar_t__ keyword; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_1 (scalar_t__,int ) ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (scalar_t__,int ) ;
 scalar_t__ FUNC_4 (int ) ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 int FUNC_5 (scalar_t__,int ) ;
 int FUNC_6 (scalar_t__) ;
 int FUNC_7 (int ,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,int) ;
 scalar_t__ FUNC_8 (scalar_t__) ;
 scalar_t__ FUNC_9 (int *) ;
 scalar_t__ FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *,int,int,int,int,scalar_t__*) ;
 TYPE_6__ FUNC_13 (int *) ;
 TYPE_5__ FUNC_14 (int *) ;
 TYPE_4__ FUNC_15 (int *) ;
 scalar_t__ FUNC_16 (int *,int ) ;
 scalar_t__ FUNC_17 (int *,scalar_t__) ;
 scalar_t__ FUNC_18 (int *) ;
 TYPE_1__* FUNC_19 (int *) ;
 TYPE_2__* FUNC_20 (int *) ;
 scalar_t__ FUNC_21 (int *,int ,char*) ;
 int FUNC_22 (int *,int ,char*) ;
 scalar_t__ FUNC_23 (scalar_t__) ;
 scalar_t__ FUNC_24 (TYPE_1__*) ;
 int FUNC_25 () ;
 int FUNC_26 () ;
 scalar_t__ VAR_10 ;
 scalar_t__ FUNC_27 (int *,scalar_t__) ;
 int VAR_11 ;
 int FUNC_28 (scalar_t__) ;
 scalar_t__ VAR_12 ;
 int FUNC_29 (int) ;

__attribute__((used)) static void
FUNC_30 (c_parser *VAR_13)
{

  tree VAR_14, VAR_15, VAR_16, VAR_17, VAR_18, VAR_19, VAR_20;

  location_t VAR_21;

  bool VAR_22 = 0;
  FUNC_28 (FUNC_17 (VAR_13, VAR_6));
  VAR_21 = FUNC_20 (VAR_13)->location;
  FUNC_11 (VAR_13);

  VAR_20 = FUNC_9 (VAR_13);

  VAR_14 = FUNC_4 (VAR_11);
  if (FUNC_21 (VAR_13, VAR_2, "expected %<(%>"))
    {

      if (FUNC_16 (VAR_13, VAR_3))
 {
   FUNC_11 (VAR_13);
   FUNC_6 (VAR_4);
 }
      else if (FUNC_18 (VAR_13))
 {

   VAR_15 = VAR_4;
   FUNC_12 (VAR_13, 1, 1, 1, 1, &VAR_15);

   if (FUNC_17 (VAR_13, VAR_7) && VAR_15)
     {
       VAR_15 = FUNC_27 (VAR_13, VAR_15);
       VAR_22 = 1;
     }
   else
     FUNC_25 ();

 }
      else if (FUNC_17 (VAR_13, VAR_5))
 {




   while (FUNC_19 (VAR_13)->type == VAR_1
   && (FUNC_19 (VAR_13)->keyword
       == VAR_5))
     FUNC_11 (VAR_13);
   if (FUNC_24 (FUNC_19 (VAR_13)))
     {
       int VAR_23;
       VAR_23 = FUNC_26 ();
       FUNC_11 (VAR_13);

       VAR_15 = VAR_4;
       FUNC_12 (VAR_13, 1, 1, 1, 1, &VAR_15);
       FUNC_29 (VAR_23);

       if (FUNC_17 (VAR_13, VAR_7) && VAR_15)
         {
    VAR_15 = FUNC_27 (VAR_13, VAR_15);
           VAR_22 = 1;
         }
       else
  FUNC_25 ();

     }
   else
     goto init_expr;
 }
      else
 {
 init_expr:

   VAR_15 = FUNC_13 (VAR_13).value;
   if (FUNC_17 (VAR_13, VAR_7))
     {
       FUNC_11 (VAR_13);
       VAR_15 = FUNC_3 (VAR_15, FUNC_15 (VAR_13).value);
       VAR_22 = 1;
     }
   else
     {
       FUNC_6 (VAR_15);
       FUNC_22 (VAR_13, VAR_3, "expected %<;%>");
     }
 }
 VAR_12 = 0;


      VAR_21 = FUNC_20 (VAR_13)->location;
      if (FUNC_16 (VAR_13, VAR_3))
 {
   FUNC_11 (VAR_13);
   VAR_15 = VAR_4;
 }

      else if (VAR_22)
 ;

      else
 {
   tree VAR_24 = FUNC_14 (VAR_13).value;
   VAR_15 = FUNC_8 (VAR_24);
   if (FUNC_0 (VAR_15))
     FUNC_1 (VAR_15, VAR_21);
   FUNC_22 (VAR_13, VAR_3, "expected %<;%>");
 }

      if (FUNC_16 (VAR_13, VAR_0))
 VAR_16 = FUNC_23 (VAR_4);
      else
 VAR_16 = FUNC_23 (FUNC_13 (VAR_13).value);
      FUNC_22 (VAR_13, VAR_0, "expected %<)%>");
    }
  else
    {
      VAR_15 = VAR_10;
      VAR_16 = VAR_10;
    }
  VAR_17 = VAR_8;
  VAR_8 = VAR_4;
  VAR_18 = VAR_9;
  VAR_9 = VAR_4;
  VAR_19 = FUNC_10 (VAR_13);

    FUNC_7 (VAR_21, VAR_15, VAR_16, VAR_19, VAR_8, VAR_9, VAR_20,
     1);

  FUNC_2 (FUNC_5 (VAR_14, VAR_11));
  VAR_8 = VAR_17;
  VAR_9 = VAR_18;
}
