
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ tree ;
typedef int c_parser ;
struct TYPE_2__ {scalar_t__ value; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,char*) ;
 scalar_t__ FUNC_2 (int *,int ) ;
 scalar_t__ FUNC_3 (int *,int ) ;
 scalar_t__ FUNC_4 (int *,int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 scalar_t__ FUNC_7 (int *) ;
 TYPE_1__* FUNC_8 (int *) ;
 int FUNC_9 (int *,int ,char*) ;
 int FUNC_10 (int *,int ,char*) ;
 int FUNC_11 (char*) ;
 int FUNC_12 () ;
 int FUNC_13 () ;
 int FUNC_14 () ;
 int FUNC_15 () ;
 int FUNC_16 (scalar_t__,scalar_t__) ;
 int FUNC_17 (scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_18 (scalar_t__,scalar_t__) ;
 int FUNC_19 (scalar_t__,scalar_t__,scalar_t__,scalar_t__) ;

__attribute__((used)) static void

FUNC_20 (c_parser *VAR_9, tree VAR_10)
{
  bool VAR_11;
  tree VAR_12;
  tree VAR_13;
  if (FUNC_3 (VAR_9, VAR_8))
    VAR_11 = 1;
  else if (FUNC_3 (VAR_9, VAR_7))

    {
      if (VAR_10)
 {
   FUNC_11 ("attributes may not be specified on an implementation");
   VAR_10 = VAR_5;
 }
      VAR_11 = 0;
    }

  else
    FUNC_12 ();
  FUNC_0 (VAR_9);
  if (FUNC_4 (VAR_9, VAR_3))
    {

      tree VAR_14 = VAR_5;
      tree VAR_15 = VAR_5;
      FUNC_0 (VAR_9);

      if (FUNC_4 (VAR_9, VAR_0))
 {
    if (FUNC_4 (VAR_9, VAR_3))
     {
       FUNC_1 (VAR_9, "expected identifier");
       FUNC_10 (VAR_9, VAR_0, ((void*)0));
       return;
     }
    VAR_14 = FUNC_8 (VAR_9)->value;
    FUNC_0 (VAR_9);
 }

      FUNC_10 (VAR_9, VAR_0, "expected %<)%>");
      if (!VAR_11)
 {

   if (VAR_14 == VAR_5)
     {
       FUNC_11 ("cannot implement anonymous category");
       return;
     }

   FUNC_16 (VAR_12, VAR_14);
   return;
 }
      if (FUNC_2 (VAR_9, VAR_2))
 VAR_15 = FUNC_7 (VAR_9);

      if (VAR_10)
 FUNC_11 ("attributes may not be specified on a category");

      FUNC_17 (VAR_12, VAR_14, VAR_15);

      FUNC_6 (VAR_9);
      FUNC_9 (VAR_9, VAR_6, "expected %<@end%>");
      FUNC_15 ();
      return;
    }
  if (FUNC_2 (VAR_9, VAR_1))
    {
      FUNC_0 (VAR_9);
      if (FUNC_4 (VAR_9, VAR_3))
 {
   FUNC_1 (VAR_9, "expected identifier");
   return;
 }
      VAR_13 = FUNC_8 (VAR_9)->value;
      FUNC_0 (VAR_9);
    }
  else
    VAR_13 = VAR_5;
  if (VAR_11)
    {
      tree VAR_16 = VAR_5;
      if (FUNC_2 (VAR_9, VAR_2))
 VAR_16 = FUNC_7 (VAR_9);

      FUNC_19 (VAR_12, VAR_13, VAR_16, VAR_10);
    }
  else
    FUNC_18 (VAR_12, VAR_13);
  if (FUNC_2 (VAR_9, VAR_4))
    FUNC_5 (VAR_9);
  if (VAR_11)
    {
      FUNC_14 ();

      FUNC_6 (VAR_9);
      FUNC_9 (VAR_9, VAR_6, "expected %<@end%>");
      FUNC_15 ();
    }
  else
    {
      FUNC_13 ();
      return;
    }
}
