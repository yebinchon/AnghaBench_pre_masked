
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ tree ;
typedef int c_parser ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *,int ) ;
 scalar_t__ FUNC_3 (int *,int ) ;
 scalar_t__ FUNC_4 (int *,int ) ;
 int FUNC_5 (int *,int ) ;
 int FUNC_6 (int *,int ,char*) ;
 scalar_t__ FUNC_7 (int *) ;
 int FUNC_8 (scalar_t__) ;
 int FUNC_9 (scalar_t__) ;
 scalar_t__ FUNC_10 (scalar_t__) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (int) ;
 scalar_t__ VAR_9 ;
 int FUNC_13 (char*) ;
 int VAR_10 ;

__attribute__((used)) static void
FUNC_14 (c_parser *VAR_11)
{
  FUNC_9 (FUNC_2 (VAR_11, VAR_2));
  FUNC_1 (VAR_11);
  while (FUNC_4 (VAR_11, VAR_1))
    {
      tree VAR_12;

      if (FUNC_2 (VAR_11, VAR_4))
 {
   if (VAR_9)
     FUNC_13 ("extra semicolon in struct or union specified");
   FUNC_1 (VAR_11);
   continue;
 }

      if (FUNC_2 (VAR_11, VAR_0))
 {
   FUNC_1 (VAR_11);
   break;
 }

      if (FUNC_3 (VAR_11, VAR_6))
 {
   FUNC_1 (VAR_11);
   FUNC_12 (2);
   continue;
 }
      else if (FUNC_3 (VAR_11, VAR_7))
 {
   FUNC_1 (VAR_11);
   FUNC_12 (0);
   continue;
 }
      else if (FUNC_3 (VAR_11, VAR_8))
 {
   FUNC_1 (VAR_11);
   FUNC_12 (1);
   continue;
 }

      else if (FUNC_3 (VAR_11, VAR_5))
 {
   FUNC_1 (VAR_11);
   FUNC_12 (3);
   continue;
 }

      else if (FUNC_2 (VAR_11, VAR_3))
 {
   FUNC_5 (VAR_11, VAR_10);
   continue;
 }


      VAR_12 = FUNC_7 (VAR_11);
      {


 tree VAR_13 = FUNC_10 (VAR_12);
 for (; VAR_13; VAR_13 = FUNC_0 (VAR_13))
   FUNC_11 (FUNC_8 (VAR_13));
      }
      FUNC_6 (VAR_11, VAR_4, "expected %<;%>");
    }
}
