
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int tree ;
struct c_typespec {int kind; int spec; } ;
typedef enum tree_code { ____Placeholder_tree_code } tree_code ;
typedef int c_parser ;
struct TYPE_2__ {int keyword; scalar_t__ id_kind; int value; } ;


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
 int FUNC_0 () ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,char*) ;
 scalar_t__ FUNC_4 (int *,int ) ;
 scalar_t__ FUNC_5 (int *,int ) ;
 TYPE_1__* FUNC_6 (int *) ;
 int FUNC_7 (int *,int ) ;
 int FUNC_8 (int *,int ,char*) ;
 int FUNC_9 (int *,int ,char*) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int ,int ) ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_12 (int ,int ,int ) ;
 int FUNC_13 (int ) ;
 int FUNC_14 () ;
 int FUNC_15 (int ) ;
 int FUNC_16 (int ) ;
 struct c_typespec FUNC_17 (int,int ) ;
 scalar_t__ VAR_15 ;
 int FUNC_18 (char*) ;
 int VAR_16 ;
 int FUNC_19 (int,int ) ;

__attribute__((used)) static struct c_typespec
FUNC_20 (c_parser *VAR_17)
{
  struct c_typespec VAR_18;
  tree VAR_19;
  tree VAR_20 = VAR_8;
  enum tree_code VAR_21;
  switch (FUNC_6 (VAR_17)->keyword)
    {
    case 129:
      VAR_21 = VAR_9;
      break;
    case 128:
      VAR_21 = VAR_11;
      break;
    default:
      FUNC_14 ();
    }
  FUNC_2 (VAR_17);
  VAR_19 = FUNC_1 (VAR_17);
  if (FUNC_4 (VAR_17, VAR_2))
    {
      VAR_20 = FUNC_6 (VAR_17)->value;
      FUNC_2 (VAR_17);
    }
  if (FUNC_4 (VAR_17, VAR_3))
    {


      tree VAR_22 = FUNC_19 (VAR_21, VAR_20);
      tree VAR_23;
      tree VAR_24 = VAR_8;
      FUNC_2 (VAR_17);


      if (FUNC_5 (VAR_17, VAR_10))
 {
   tree VAR_25;
   FUNC_13 (FUNC_0 ());
   FUNC_2 (VAR_17);
   if (!FUNC_8 (VAR_17, VAR_4, "expected %<(%>"))
     goto end_at_defs;
   if (FUNC_4 (VAR_17, VAR_2)
       && FUNC_6 (VAR_17)->id_kind == VAR_7)
     {
       VAR_25 = FUNC_6 (VAR_17)->value;
       FUNC_2 (VAR_17);
     }
   else
     {
       FUNC_3 (VAR_17, "expected class name");
       FUNC_9 (VAR_17, VAR_1, ((void*)0));
       goto end_at_defs;
     }
   FUNC_9 (VAR_17, VAR_1,
         "expected %<)%>");
   VAR_24 = FUNC_15 (FUNC_16 (VAR_25));
 }
    end_at_defs:



      while (1)
 {
   tree VAR_26;

   if (FUNC_4 (VAR_17, VAR_6))
     {
       if (VAR_15)
  FUNC_18 ("extra semicolon in struct or union specified");
       FUNC_2 (VAR_17);
       continue;
     }

   if (FUNC_4 (VAR_17, VAR_0))
     {
       FUNC_2 (VAR_17);
       break;
     }

   if (FUNC_4 (VAR_17, VAR_5))
     {
       FUNC_7 (VAR_17, VAR_16);
       continue;
     }


   VAR_26 = FUNC_10 (VAR_17);
   VAR_24 = FUNC_11 (VAR_26, VAR_24);



   if (FUNC_4 (VAR_17, VAR_6))
     FUNC_2 (VAR_17);
   else
     {
       if (FUNC_4 (VAR_17, VAR_0))
  FUNC_18 ("no semicolon at end of struct or union");
       else
  {
    FUNC_3 (VAR_17, "expected %<;%>");
    FUNC_9 (VAR_17, VAR_0, ((void*)0));
    break;
  }
     }
 }
      VAR_23 = FUNC_1 (VAR_17);
      VAR_18.spec = FUNC_12 (VAR_22, FUNC_15 (VAR_24),
    FUNC_11 (VAR_19, VAR_23));
      VAR_18.kind = VAR_12;
      return VAR_18;
    }
  else if (!VAR_20)
    {
      FUNC_3 (VAR_17, "expected %<{%>");
      VAR_18.spec = VAR_14;
      VAR_18.kind = VAR_13;
      return VAR_18;
    }
  VAR_18 = FUNC_17 (VAR_21, VAR_20);
  return VAR_18;
}
