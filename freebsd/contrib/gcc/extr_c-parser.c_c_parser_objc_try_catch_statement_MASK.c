
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int tree ;
struct c_parm {int dummy; } ;
typedef int location_t ;
typedef int c_parser ;
struct TYPE_2__ {int location; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *,int ) ;
 scalar_t__ FUNC_4 (int *,int ) ;
 struct c_parm* FUNC_5 (int *,int ) ;
 TYPE_1__* FUNC_6 (int *) ;
 scalar_t__ FUNC_7 (int *,int ,char*) ;
 int FUNC_8 (int *,int ,char*) ;
 int FUNC_9 (scalar_t__) ;
 int FUNC_10 (struct c_parm*) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (int ,int ) ;
 int FUNC_13 (int ,int ) ;
 int FUNC_14 () ;
 int FUNC_15 () ;

__attribute__((used)) static void
FUNC_16 (c_parser *VAR_8)
{
  location_t VAR_9;
  tree VAR_10;
  FUNC_9 (FUNC_4 (VAR_8, VAR_7));
  FUNC_2 (VAR_8);
  VAR_9 = FUNC_6 (VAR_8)->location;
  VAR_10 = FUNC_0 (VAR_8);
  FUNC_12 (VAR_9, VAR_10);
  while (FUNC_4 (VAR_8, VAR_5))
    {
      struct c_parm *VAR_11;
      FUNC_2 (VAR_8);
      if (!FUNC_7 (VAR_8, VAR_3, "expected %<(%>"))
 break;

      if (FUNC_3 (VAR_8, VAR_1))
 {

   FUNC_2 (VAR_8);
    FUNC_8 (VAR_8, VAR_0, "expected %<)%>");
    FUNC_11 (VAR_4);
 }
      else
 {
    VAR_11 = FUNC_5 (VAR_8, VAR_4);
    if (VAR_11 == ((void*)0))
     {
       FUNC_8 (VAR_8, VAR_0, ((void*)0));
       break;
     }
    FUNC_8 (VAR_8, VAR_0, "expected %<)%>");
    FUNC_11 (FUNC_10 (VAR_11));
 }

      if (FUNC_7 (VAR_8, VAR_2, "expected %<{%>"))
 FUNC_1 (VAR_8);
      FUNC_14 ();
    }
  if (FUNC_4 (VAR_8, VAR_6))
    {
      location_t VAR_12;
      tree VAR_13;
      FUNC_2 (VAR_8);
      VAR_12 = FUNC_6 (VAR_8)->location;
      VAR_13 = FUNC_0 (VAR_8);
      FUNC_13 (VAR_12, VAR_13);
    }
  FUNC_15 ();
}
