
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_22__ TYPE_5__ ;
typedef struct TYPE_21__ TYPE_2__ ;
typedef struct TYPE_20__ TYPE_1__ ;


typedef scalar_t__ tree ;
struct c_expr {scalar_t__ value; } ;
struct c_declspecs {scalar_t__ attrs; int declspecs_seen_p; scalar_t__ type_seen_p; scalar_t__ non_sc_seen_p; } ;
struct c_declarator {TYPE_1__* declarator; } ;
struct TYPE_21__ {scalar_t__ error; } ;
typedef TYPE_2__ c_parser ;
struct TYPE_22__ {scalar_t__ location; } ;
struct TYPE_20__ {scalar_t__ kind; } ;
typedef scalar_t__ DECL_SOURCE_LOCATION ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__) ;
 struct c_declspecs* FUNC_2 () ;
 scalar_t__ FUNC_3 (int ,scalar_t__) ;
 scalar_t__* FUNC_4 () ;
 scalar_t__ FUNC_5 (TYPE_2__*) ;
 scalar_t__ FUNC_6 (TYPE_2__*) ;
 int FUNC_7 (TYPE_2__*) ;
 struct c_declarator* FUNC_8 (TYPE_2__*,scalar_t__,int ,int*) ;
 int FUNC_9 (TYPE_2__*,struct c_declspecs*,int,int,int) ;
 int FUNC_10 (TYPE_2__*,char*) ;
 struct c_expr FUNC_11 (TYPE_2__*) ;
 scalar_t__ FUNC_12 (TYPE_2__*,int ) ;
 scalar_t__ FUNC_13 (TYPE_2__*,int ) ;
 scalar_t__ FUNC_14 (TYPE_2__*,int ) ;
 int FUNC_15 (TYPE_2__*,scalar_t__) ;
 int FUNC_16 (TYPE_2__*,scalar_t__) ;
 TYPE_5__* FUNC_17 (TYPE_2__*) ;
 scalar_t__ FUNC_18 (TYPE_2__*) ;
 int FUNC_19 (TYPE_2__*) ;
 scalar_t__ VAR_14 ;
 scalar_t__ FUNC_20 (scalar_t__,scalar_t__) ;
 int FUNC_21 (char*) ;
 scalar_t__ VAR_15 ;
 int FUNC_22 (scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_23 (struct c_declspecs*) ;
 int FUNC_24 () ;
 int FUNC_25 () ;
 scalar_t__ VAR_16 ;
 int FUNC_26 (scalar_t__*) ;
 int FUNC_27 () ;
 int FUNC_28 (int ,struct c_expr) ;
 scalar_t__ VAR_17 ;
 int FUNC_29 (char*) ;
 int FUNC_30 () ;
 int FUNC_31 () ;
 int FUNC_32 () ;
 int FUNC_33 (struct c_declspecs*) ;
 int FUNC_34 (struct c_declspecs*,int) ;
 scalar_t__ FUNC_35 (struct c_declarator*,struct c_declspecs*,int,scalar_t__) ;
 int FUNC_36 (struct c_declspecs*,struct c_declarator*,scalar_t__) ;
 int FUNC_37 (scalar_t__,scalar_t__,int ) ;
 int FUNC_38 () ;

__attribute__((used)) static void
FUNC_39 (c_parser *VAR_18, bool VAR_19, bool VAR_20,

          bool VAR_21, bool VAR_22, tree *VAR_23)
{
  struct c_declspecs *VAR_24;
  tree VAR_25;
  tree VAR_26;
  bool VAR_27 = 0;

  VAR_24 = FUNC_2 ();
  FUNC_9 (VAR_18, VAR_24, 1, 1, VAR_22);
  if (VAR_18->error)
    {
      FUNC_19 (VAR_18);
      return;
    }
  if (VAR_21 && !VAR_24->declspecs_seen_p)
    {
      FUNC_10 (VAR_18, "expected declaration specifiers");
      FUNC_19 (VAR_18);
      return;
    }
  FUNC_23 (VAR_24);
  if (FUNC_12 (VAR_18, VAR_4))
    {
      if (VAR_20)
 FUNC_33 (VAR_24);
      else
 {
   FUNC_34 (VAR_24, 1);
   FUNC_29 ("empty declaration");
 }
      FUNC_7 (VAR_18);
      return;
    }

  else if (FUNC_13 (VAR_18, VAR_11)
    || FUNC_13 (VAR_18, VAR_10))
    {
      FUNC_26 (FUNC_4 ());
      if (!VAR_24->declspecs_seen_p || VAR_24->attrs == VAR_7
   || VAR_24->type_seen_p || VAR_24->non_sc_seen_p)
 FUNC_10 (VAR_18, "no type or storage class may be specified here");
      FUNC_15 (VAR_18, VAR_24->attrs);
      return;
    }


  else if (FUNC_13 (VAR_18, VAR_12))
    {
      FUNC_26 (FUNC_4 ());
      if (!VAR_24->declspecs_seen_p || VAR_24->attrs == VAR_7
   || VAR_24->type_seen_p || VAR_24->non_sc_seen_p)
 FUNC_10 (VAR_18, "no type or storage class may be specified here");
      FUNC_16 (VAR_18, VAR_24->attrs);
      return;
    }

  FUNC_30 ();
  VAR_25 = VAR_24->attrs;
  VAR_26 = VAR_25;
  VAR_24->attrs = VAR_7;
  while (1)
    {
      struct c_declarator *VAR_28;
      bool VAR_29 = 0;
      tree VAR_30;




      VAR_28 = FUNC_8 (VAR_18, VAR_24->type_seen_p,
     VAR_5, &VAR_29);
      if (VAR_28 == ((void*)0))
 {
   FUNC_19 (VAR_18);
   return;
 }
      if (FUNC_12 (VAR_18, VAR_2)
   || FUNC_12 (VAR_18, VAR_0)
   || FUNC_12 (VAR_18, VAR_4)
   || FUNC_13 (VAR_18, VAR_8)

   || FUNC_13 (VAR_18, VAR_13)
   || FUNC_13 (VAR_18, VAR_9))
 {
   tree VAR_31 = VAR_7;
   tree VAR_32 = VAR_7;
   if (!VAR_27 && !VAR_24->declspecs_seen_p)
     {
       VAR_27 = 1;
       FUNC_29 ("data definition has no type or storage class");
     }


   VAR_19 = 0;
   if (FUNC_13 (VAR_18, VAR_8))
     VAR_31 = FUNC_18 (VAR_18);
   if (FUNC_13 (VAR_18, VAR_9))
     VAR_32 = FUNC_5 (VAR_18);

   if (FUNC_13 (VAR_18, VAR_13))
     {
       FUNC_26 (VAR_23);
       *VAR_23 = FUNC_35 (VAR_28, VAR_24, 1,
       FUNC_20 (VAR_32, VAR_26));
       if (!*VAR_23)
  *VAR_23 = VAR_15;
       FUNC_37 (*VAR_23, VAR_31, FUNC_27 ());
       return;
     }

   if (FUNC_12 (VAR_18, VAR_2))
     {
       tree VAR_33;
       struct c_expr VAR_34;
       FUNC_7 (VAR_18);


       VAR_33 = FUNC_35 (VAR_28, VAR_24, 1,
         FUNC_20 (VAR_32, VAR_26));
       if (!VAR_33)
  VAR_33 = VAR_15;
       FUNC_37 (VAR_33, VAR_31, FUNC_27 ());
       VAR_34 = FUNC_11 (VAR_18);
       FUNC_25 ();
       if (VAR_33 != VAR_15)
  {
    FUNC_28 (FUNC_0 (VAR_33), VAR_34);
    FUNC_22 (VAR_33, VAR_34.value, VAR_31);
  }
     }
   else
     {
       tree VAR_35 = FUNC_35 (VAR_28, VAR_24, 0,
       FUNC_20 (VAR_32,
         VAR_26));
       if (VAR_35)
  FUNC_22 (VAR_35, VAR_7, VAR_31);
     }
   if (FUNC_12 (VAR_18, VAR_0))
     {
       FUNC_7 (VAR_18);
       if (FUNC_13 (VAR_18, VAR_9))
  VAR_26 = FUNC_20 (FUNC_5 (VAR_18),
         VAR_25);
       else
  VAR_26 = VAR_25;
       continue;
     }
   else if (FUNC_12 (VAR_18, VAR_4))
     {
       FUNC_7 (VAR_18);
       return;
     }
   else
     {
       FUNC_10 (VAR_18, "expected %<,%> or %<;%>");
       FUNC_19 (VAR_18);
       return;
     }
 }
      else if (!VAR_19)
 {
   FUNC_10 (VAR_18, "expected %<=%>, %<,%>, %<;%>, "
     "%<asm%> or %<__attribute__%>");
   FUNC_19 (VAR_18);
   return;
 }

      if (VAR_21)
 {

    if (VAR_28->declarator && VAR_28->declarator->kind == VAR_14)
      FUNC_21 ("bad definition of a block");
   else if (VAR_17)

     FUNC_29 ("ISO C forbids nested functions");

   else if (VAR_16 == 0)
     FUNC_21 ("nested functions are disabled, use -fnested-functions to re-enable");


   FUNC_32 ();
 }
      if (!FUNC_36 (VAR_24, VAR_28, VAR_26))
 {



   FUNC_10 (VAR_18, "expected %<=%>, %<,%>, %<;%>, %<asm%> "
     "or %<__attribute__%>");
   if (VAR_21)
     FUNC_31 ();
   break;
 }
      while (FUNC_14 (VAR_18, VAR_1)
      && FUNC_14 (VAR_18, VAR_3))

 FUNC_39 (VAR_18, 0, 0, 1, 0, ((void*)0));
      DECL_SOURCE_LOCATION (VAR_36)
 = FUNC_17 (VAR_18)->location;
      FUNC_38 ();
      VAR_30 = FUNC_6 (VAR_18);
      if (VAR_21)
 {
   tree VAR_37 = VAR_36;
   FUNC_1 (VAR_30);
   FUNC_24 ();
   FUNC_31 ();
   FUNC_1 (FUNC_3 (VAR_6, VAR_37));
 }
      else
 {
   FUNC_1 (VAR_30);
   FUNC_24 ();
 }
      break;
    }
}
