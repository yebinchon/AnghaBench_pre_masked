
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int * tree ;
struct c_parm {int dummy; } ;
typedef int c_parser ;
struct TYPE_2__ {int * value; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int * FUNC_0 (scalar_t__,int ) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,char*) ;
 scalar_t__ FUNC_4 (int *,int ) ;
 scalar_t__ FUNC_5 (int *,int ) ;
 scalar_t__ FUNC_6 (int *,int ) ;
 int * FUNC_7 (int *) ;
 int * FUNC_8 (int *) ;
 struct c_parm* FUNC_9 (int *,scalar_t__) ;
 TYPE_1__* FUNC_10 (int *) ;
 int FUNC_11 (int *,int ,char*) ;
 int FUNC_12 (int *,int ,char*) ;
 int * FUNC_13 (int *,int *) ;
 int FUNC_14 (char*) ;
 int * VAR_9 ;
 int FUNC_15 (int) ;
 int FUNC_16 (struct c_parm*) ;
 int * FUNC_17 (int ) ;
 int * FUNC_18 (int *,int *,int *,int *) ;
 int * FUNC_19 (int *,int *,int *,int) ;
 scalar_t__ VAR_10 ;

__attribute__((used)) static tree
FUNC_20 (c_parser *VAR_11)
{
  tree VAR_12 = VAR_6;
  tree VAR_13;
  tree VAR_14 = VAR_6;
  bool VAR_15 = 0;

  if (FUNC_4 (VAR_11, VAR_5))
    {
      FUNC_2 (VAR_11);
      VAR_12 = FUNC_8 (VAR_11);
      FUNC_12 (VAR_11, VAR_0, "expected %<)%>");
    }
  VAR_13 = FUNC_7 (VAR_11);



  if (!VAR_13 || FUNC_4 (VAR_11, VAR_1))
    {
      tree VAR_16 = VAR_13;
      tree VAR_17 = VAR_6;
      while (1)
 {

   tree VAR_18 = VAR_6;
   tree VAR_19 = VAR_6, VAR_20, VAR_21;
   if (!FUNC_11 (VAR_11, VAR_1, "expected %<:%>"))
     break;
   if (FUNC_4 (VAR_11, VAR_5))
     {
       FUNC_2 (VAR_11);
       VAR_19 = FUNC_8 (VAR_11);
       FUNC_12 (VAR_11, VAR_0,
      "expected %<)%>");
     }

   if (FUNC_5 (VAR_11, VAR_7))
     VAR_18 = FUNC_1 (VAR_11);

   if (FUNC_6 (VAR_11, VAR_4))
     {
       FUNC_3 (VAR_11, "expected identifier");
       return VAR_9;
     }
   VAR_20 = FUNC_10 (VAR_11)->value;
   FUNC_2 (VAR_11);

   VAR_21 = FUNC_18 (VAR_16, VAR_19, VAR_20, VAR_18);
   VAR_17 = FUNC_13 (VAR_17, VAR_21);
   VAR_16 = FUNC_7 (VAR_11);
   if (!VAR_16 && FUNC_6 (VAR_11, VAR_1))
     break;
 }

      if (FUNC_5 (VAR_11, VAR_7))
 VAR_10 = FUNC_1 (VAR_11);




      VAR_14 = FUNC_17 (VAR_8);
      while (FUNC_4 (VAR_11, VAR_2))
 {
   struct c_parm *VAR_22;
   FUNC_2 (VAR_11);
   if (FUNC_4 (VAR_11, VAR_3))
     {
       VAR_15 = 1;
       FUNC_2 (VAR_11);

       if (VAR_10)
  FUNC_14 ("method attributes must be specified at the end only");
       if (FUNC_5 (VAR_11, VAR_7))
  VAR_10 = FUNC_1 (VAR_11);

       break;
     }
   VAR_22 = FUNC_9 (VAR_11, VAR_6);
   if (VAR_22 == ((void*)0))
     break;
   VAR_14 = FUNC_13 (VAR_14,
      FUNC_0 (VAR_6, FUNC_16 (VAR_22)));
 }
      VAR_13 = VAR_17;
    }

  else
    {
      FUNC_15 (VAR_10 == VAR_6);
      if (FUNC_5 (VAR_11, VAR_7))
 VAR_10 = FUNC_1 (VAR_11);
    }


  if (VAR_13 == ((void*)0))
    {
      FUNC_3 (VAR_11, "objective-c method declaration is expected");
      return VAR_9;
    }

  return FUNC_19 (VAR_12, VAR_13, VAR_14, VAR_15);
}
