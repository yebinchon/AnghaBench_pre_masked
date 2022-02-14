
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int * tree ;
struct c_declarator {int id_loc; } ;
struct c_arg_info {int dummy; } ;
typedef int c_parser ;
typedef scalar_t__ c_dtr_syn ;
struct TYPE_2__ {scalar_t__ id_kind; int location; int value; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 struct c_declarator* FUNC_0 (int *,struct c_declarator*) ;
 struct c_declarator* FUNC_1 (struct c_arg_info*,struct c_declarator*) ;
 struct c_declarator* FUNC_2 (int ) ;
 int * FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 struct c_declarator* FUNC_5 (int *,int,scalar_t__,int*) ;
 struct c_declarator* FUNC_6 (int *,int,struct c_declarator*) ;
 int FUNC_7 (int *,char*) ;
 scalar_t__ FUNC_8 (int *,int ) ;
 scalar_t__ FUNC_9 (int *) ;
 struct c_arg_info* FUNC_10 (int *,int,int *) ;
 TYPE_1__* FUNC_11 (int *) ;
 int FUNC_12 (int *,int ,char*) ;

__attribute__((used)) static struct c_declarator *
FUNC_13 (c_parser *VAR_11, bool VAR_12, c_dtr_syn VAR_13,
       bool *VAR_14)
{
  if ((VAR_13 != VAR_4 && VAR_13 != VAR_5)
      && FUNC_8 (VAR_11, VAR_1)
      && ((VAR_12

    && (FUNC_11 (VAR_11)->id_kind == VAR_9
        || FUNC_11 (VAR_11)->id_kind == VAR_7))

   || FUNC_11 (VAR_11)->id_kind == VAR_8))
    {
      struct c_declarator *VAR_15
 = FUNC_2 (FUNC_11 (VAR_11)->value);
      *VAR_14 = 1;
      VAR_15->id_loc = FUNC_11 (VAR_11)->location;
      FUNC_4 (VAR_11);
      return FUNC_6 (VAR_11, *VAR_14, VAR_15);
    }

  if (VAR_13 != VAR_6
      && FUNC_8 (VAR_11, VAR_3))
    {
      struct c_declarator *VAR_16 = FUNC_2 (VAR_10);
      return FUNC_6 (VAR_11, *VAR_14, VAR_16);
    }




  if (FUNC_8 (VAR_11, VAR_2))
    {
      tree VAR_17;
      struct c_declarator *VAR_18;
      FUNC_4 (VAR_11);
      VAR_17 = FUNC_3 (VAR_11);
      if (VAR_13 != VAR_6
   && (FUNC_9 (VAR_11)
       || FUNC_8 (VAR_11, VAR_0)))
 {
   struct c_arg_info *VAR_19
     = FUNC_10 (VAR_11, VAR_13 == VAR_6,
      VAR_17);
   if (VAR_19 == ((void*)0))
     return ((void*)0);
   else
     {
       VAR_18
  = FUNC_1 (VAR_19,
          FUNC_2 (VAR_10));
       return FUNC_6 (VAR_11, *VAR_14,
             VAR_18);
     }
 }

      VAR_18 = FUNC_5 (VAR_11, VAR_12, VAR_13, VAR_14);
      if (VAR_18 != ((void*)0) && VAR_17 != ((void*)0))
 VAR_18 = FUNC_0 (VAR_17, VAR_18);
      if (FUNC_8 (VAR_11, VAR_0))
 {
   FUNC_4 (VAR_11);
   if (VAR_18 == ((void*)0))
     return ((void*)0);
   else
     return FUNC_6 (VAR_11, *VAR_14, VAR_18);
 }
      else
 {
   FUNC_12 (VAR_11, VAR_0,
         "expected %<)%>");
   return ((void*)0);
 }
    }
  else
    {
      if (VAR_13 == VAR_6)
 {
   FUNC_7 (VAR_11, "expected identifier or %<(%>");
   return ((void*)0);
 }
      else
 return FUNC_2 (VAR_10);
    }
}
