
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef void* tree ;
struct c_expr {void* original_code; void* value; } ;
typedef int c_parser ;
struct TYPE_4__ {scalar_t__ type; } ;
struct TYPE_3__ {scalar_t__ type; scalar_t__ id_kind; void* value; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 void* VAR_10 ;
 void* VAR_11 ;
 void* FUNC_0 (void*,void*) ;
 int FUNC_1 (void*,void*) ;
 scalar_t__ FUNC_2 () ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,char*) ;
 struct c_expr FUNC_5 (int *,int *) ;
 int FUNC_6 (int *,struct c_expr*) ;
 scalar_t__ FUNC_7 (int *,scalar_t__) ;
 void* FUNC_8 (int *) ;
 TYPE_2__* FUNC_9 (int *) ;
 TYPE_1__* FUNC_10 (int *) ;
 int FUNC_11 (int *,scalar_t__,char*) ;
 struct c_expr FUNC_12 (struct c_expr) ;
 void* VAR_12 ;
 int VAR_13 ;
 void* FUNC_13 (int ) ;
 void* FUNC_14 (void*) ;
 scalar_t__ VAR_14 ;
 int FUNC_15 (char*) ;
 int FUNC_16 (struct c_expr) ;
 int FUNC_17 (void*,void*) ;
 int FUNC_18 (void*) ;

__attribute__((used)) static void
FUNC_19 (c_parser *VAR_15)
{



  if (FUNC_7 (VAR_15, VAR_6)
      && FUNC_9 (VAR_15)->type == VAR_1)
    {

      FUNC_18 (FUNC_10 (VAR_15)->value);
      if (VAR_14)
 FUNC_15 ("obsolete use of designated initializer with %<:%>");
      FUNC_3 (VAR_15);
      FUNC_3 (VAR_15);
    }
  else
    {


      int VAR_16 = 0;
      while (FUNC_7 (VAR_15, VAR_7)
      || FUNC_7 (VAR_15, VAR_3))
 {
   int VAR_17 = VAR_16;
   if (VAR_16 < 2)
     VAR_16++;
   if (FUNC_7 (VAR_15, VAR_3))
     {
       VAR_16 = 2;
       FUNC_3 (VAR_15);
       if (FUNC_7 (VAR_15, VAR_6))
  {
    FUNC_18 (FUNC_10 (VAR_15)->value);
    FUNC_3 (VAR_15);
  }
       else
  {
    struct c_expr VAR_18;
    VAR_18.value = VAR_12;
    VAR_18.original_code = VAR_10;
    FUNC_4 (VAR_15, "expected identifier");
    FUNC_11 (VAR_15, VAR_2, ((void*)0));
    FUNC_16 (VAR_18);
    return;
  }
     }
   else
     {
       tree VAR_19, VAR_20;
       if (VAR_17 == 1 && FUNC_2 ())
  {
    VAR_16 = VAR_17;
    break;
  }
       if (VAR_17 == 0 && FUNC_2 ())
  {







    tree VAR_21, VAR_22;
    struct c_expr VAR_23;
    FUNC_3 (VAR_15);
    if (FUNC_10 (VAR_15)->type == VAR_6
        && ((FUNC_10 (VAR_15)->id_kind
      == VAR_9)
     || (FUNC_10 (VAR_15)->id_kind
         == VAR_8)))
      {

        tree VAR_24 = FUNC_10 (VAR_15)->value;
        FUNC_3 (VAR_15);
        VAR_21 = FUNC_14 (VAR_24);
        goto parse_message_args;
      }
    VAR_19 = FUNC_5 (VAR_15, ((void*)0)).value;
    if (FUNC_7 (VAR_15, VAR_4)
        || FUNC_7 (VAR_15, VAR_0))
      goto array_desig_after_first;



    VAR_21 = VAR_19;
    while (FUNC_7 (VAR_15, VAR_2))
      {
        struct c_expr VAR_25;
        FUNC_3 (VAR_15);
        VAR_25 = FUNC_5 (VAR_15, ((void*)0));
        VAR_25 = FUNC_12 (VAR_25);
        VAR_21 = FUNC_0 (VAR_21, VAR_25.value);
      }
  parse_message_args:

    VAR_22 = FUNC_8 (VAR_15);
    FUNC_11 (VAR_15, VAR_0,
          "expected %<]%>");
    VAR_23.value
      = FUNC_13 (FUNC_1 (VAR_21, VAR_22));
    VAR_23.original_code = VAR_10;



    FUNC_6 (VAR_15, &VAR_23);
    return;
  }
       FUNC_3 (VAR_15);
       VAR_19 = FUNC_5 (VAR_15, ((void*)0)).value;
     array_desig_after_first:
       if (FUNC_7 (VAR_15, VAR_4))
  {
    FUNC_3 (VAR_15);
    VAR_20 = FUNC_5 (VAR_15, ((void*)0)).value;
  }
       else
  VAR_20 = VAR_11;
       if (FUNC_7 (VAR_15, VAR_0))
  {
    FUNC_3 (VAR_15);
    FUNC_17 (VAR_19, VAR_20);
    if (VAR_14 && VAR_20)
      FUNC_15 ("ISO C forbids specifying range of "
        "elements to initialize");
  }
       else
  FUNC_11 (VAR_15, VAR_0,
        "expected %<]%>");
     }
 }
      if (VAR_16 >= 1)
 {
   if (FUNC_7 (VAR_15, VAR_5))
     {
       if (VAR_14 && !VAR_13)
  FUNC_15 ("ISO C90 forbids specifying subobject to initialize");
       FUNC_3 (VAR_15);
     }
   else
     {
       if (VAR_16 == 1)
  {
    if (VAR_14)
      FUNC_15 ("obsolete use of designated initializer "
        "without %<=%>");
  }
       else
  {
    struct c_expr VAR_26;
    VAR_26.value = VAR_12;
    VAR_26.original_code = VAR_10;
    FUNC_4 (VAR_15, "expected %<=%>");
    FUNC_11 (VAR_15, VAR_2, ((void*)0));
    FUNC_16 (VAR_26);
    return;
  }
     }
 }
    }
  FUNC_6 (VAR_15, ((void*)0));
}
