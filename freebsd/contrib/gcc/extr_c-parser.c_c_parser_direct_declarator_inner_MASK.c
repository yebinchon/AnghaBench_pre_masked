
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int tree ;
struct c_declspecs {int declspecs_seen_p; } ;
struct c_declarator {int dummy; } ;
struct c_arg_info {int dummy; } ;
typedef int c_parser ;
struct TYPE_4__ {int value; } ;
struct TYPE_3__ {scalar_t__ type; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 struct c_declarator* FUNC_0 (int ,struct c_declspecs*,int,int) ;
 struct c_declarator* FUNC_1 (struct c_arg_info*,struct c_declarator*) ;
 struct c_declspecs* FUNC_2 () ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,struct c_declspecs*,int,int,int) ;
 TYPE_2__ FUNC_6 (int *,int *) ;
 scalar_t__ FUNC_7 (int *,scalar_t__) ;
 int FUNC_8 (int *,int ) ;
 struct c_arg_info* FUNC_9 (int *,int,int ) ;
 TYPE_1__* FUNC_10 (int *) ;
 int FUNC_11 (int *,scalar_t__,char*) ;
 struct c_declarator* FUNC_12 (struct c_declarator*,struct c_declarator*,int) ;

__attribute__((used)) static struct c_declarator *
FUNC_13 (c_parser *VAR_6, bool VAR_7,
      struct c_declarator *VAR_8)
{

  if (FUNC_7 (VAR_6, VAR_3))
    {
      struct c_declarator *VAR_9;
      struct c_declspecs *VAR_10 = FUNC_2 ();
      bool VAR_11;
      bool VAR_12;
      tree VAR_13;
      FUNC_4 (VAR_6);
      FUNC_5 (VAR_6, VAR_10, 0, 0, 1);
      VAR_11 = FUNC_8 (VAR_6, VAR_5);
      if (VAR_11)
 FUNC_4 (VAR_6);
      if (VAR_11 && !VAR_10->declspecs_seen_p)
 FUNC_5 (VAR_6, VAR_10, 0, 0, 1);
      if (!VAR_10->declspecs_seen_p)
 VAR_10 = ((void*)0);



      if (VAR_11)
 {
   VAR_12 = 0;
   VAR_13 = FUNC_6 (VAR_6, ((void*)0)).value;
 }
      else
 {
   if (FUNC_7 (VAR_6, VAR_0))
     {
       VAR_13 = VAR_4;
       VAR_12 = 0;
     }
   else if (FUNC_7 (VAR_6, VAR_1))
     {
       if (FUNC_10 (VAR_6)->type == VAR_0)
  {
    VAR_13 = VAR_4;
    VAR_12 = 1;
    FUNC_4 (VAR_6);
  }
       else
  {
    VAR_12 = 0;
    VAR_13 = FUNC_6 (VAR_6, ((void*)0)).value;
  }
     }
   else
     {
       VAR_12 = 0;
       VAR_13 = FUNC_6 (VAR_6, ((void*)0)).value;
     }
 }
      if (FUNC_7 (VAR_6, VAR_0))
 FUNC_4 (VAR_6);
      else
 {
   FUNC_11 (VAR_6, VAR_0,
         "expected %<]%>");
   return ((void*)0);
 }
      VAR_9 = FUNC_0 (VAR_13, VAR_10, VAR_11,
        VAR_12);
      if (VAR_9 == ((void*)0))
 return ((void*)0);
      VAR_8 = FUNC_12 (VAR_9, VAR_8, !VAR_7);
      return FUNC_13 (VAR_6, VAR_7, VAR_8);
    }
  else if (FUNC_7 (VAR_6, VAR_2))
    {
      tree VAR_14;
      struct c_arg_info *VAR_15;
      FUNC_4 (VAR_6);
      VAR_14 = FUNC_3 (VAR_6);
      VAR_15 = FUNC_9 (VAR_6, VAR_7, VAR_14);
      if (VAR_15 == ((void*)0))
 return ((void*)0);
      else
 {
   VAR_8 = FUNC_1 (VAR_15, VAR_8);
   return FUNC_13 (VAR_6, VAR_7, VAR_8);
 }
    }
  return VAR_8;
}
