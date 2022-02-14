
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ tree ;
struct cp_binding_level {scalar_t__ kind; scalar_t__ this_entity; struct cp_binding_level* level_chain; } ;
struct TYPE_5__ {scalar_t__ value; scalar_t__ type; } ;
typedef TYPE_1__ cxx_binding ;


 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (TYPE_1__*) ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_3 (scalar_t__) ;
 int FUNC_4 (int ,scalar_t__) ;
 scalar_t__ FUNC_5 (scalar_t__) ;
 int VAR_3 ;
 struct cp_binding_level* VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_6 (int) ;
 scalar_t__ FUNC_7 (scalar_t__) ;
 int FUNC_8 (int,int) ;
 scalar_t__ FUNC_9 (scalar_t__,scalar_t__,int ) ;
 TYPE_1__* FUNC_10 (scalar_t__,TYPE_1__*,int) ;
 scalar_t__ FUNC_11 (scalar_t__,int) ;
 int FUNC_12 (scalar_t__) ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_13 (int ) ;
 scalar_t__ FUNC_14 (scalar_t__,int) ;

tree
FUNC_15 (tree VAR_8, int VAR_9, int VAR_10, bool VAR_11,
    int VAR_12, int VAR_13)
{
  cxx_binding *VAR_14;
  tree VAR_15 = VAR_1;

  FUNC_13 (VAR_3);



  if (FUNC_0 (VAR_8))
    {
      struct cp_binding_level *VAR_16;

      for (VAR_16 = VAR_4;
    VAR_16 && VAR_16->kind != VAR_7;
    VAR_16 = VAR_16->level_chain)
 {
   tree VAR_17;
   tree VAR_18;



   if (VAR_16->kind != VAR_6)
     continue;


   VAR_17 = VAR_16->this_entity;
   VAR_18 = FUNC_9 (VAR_17, VAR_8, 0);
   if (VAR_18)
     FUNC_4 (VAR_3, VAR_18);
 }

      FUNC_4 (VAR_3, VAR_1);
    }

  VAR_13 |= FUNC_8 (VAR_9, VAR_12);



  if (VAR_5 == VAR_1)
    VAR_10 = 1;

  if (VAR_11 || !VAR_10)
    for (VAR_14 = FUNC_10 (VAR_8, ((void*)0), !VAR_10);
  VAR_14;
  VAR_14 = FUNC_10 (VAR_8, VAR_14, !VAR_10))
      {
 tree VAR_19;


 if (FUNC_1 (VAR_14) ? !VAR_11 : VAR_10)
   continue;


 if (FUNC_11 (VAR_14->value, VAR_13))
   VAR_19 = VAR_14->value;
 else if ((VAR_13 & VAR_0)
   && FUNC_11 (VAR_14->type, VAR_13))
   VAR_19 = VAR_14->type;
 else
   VAR_19 = VAR_1;

 if (VAR_19)
   {
     if (FUNC_7 (VAR_19))
       {
  FUNC_6 (VAR_5 &&
       FUNC_2 (VAR_5));





  FUNC_4 (VAR_3, VAR_1);
       }
     VAR_15 = VAR_19;
     break;
   }
      }


  if (!VAR_15)
    VAR_15 = FUNC_14 (VAR_8, VAR_13);


  if (VAR_15 && FUNC_5 (VAR_15) == VAR_2 && !FUNC_12 (VAR_15))
    VAR_15 = FUNC_3 (VAR_15);

  FUNC_4 (VAR_3, VAR_15);
}
