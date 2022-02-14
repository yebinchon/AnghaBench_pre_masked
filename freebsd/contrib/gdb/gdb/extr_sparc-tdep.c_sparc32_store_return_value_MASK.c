
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct type {int dummy; } ;
struct regcache {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct type*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (char*,void const*,int) ;
 int FUNC_3 (struct regcache*,int ,char*) ;
 scalar_t__ FUNC_4 (struct type*) ;
 int FUNC_5 (struct type*) ;
 int FUNC_6 (struct type*) ;

__attribute__((used)) static void
FUNC_7 (struct type *VAR_4, struct regcache *VAR_5,
       const void *VAR_6)
{
  int VAR_7 = FUNC_0 (VAR_4);
  char VAR_8[8];

  FUNC_1 (!FUNC_6 (VAR_4));
  FUNC_1 (!(FUNC_4 (VAR_4) && VAR_7 == 16));

  if (FUNC_4 (VAR_4))
    {

      FUNC_2 (VAR_8, VAR_6, VAR_7);
      FUNC_3 (VAR_5, VAR_0, VAR_8);
      if (VAR_7 > 4)
 FUNC_3 (VAR_5, VAR_1, VAR_8 + 4);
    }
  else
    {

      FUNC_1 (FUNC_5 (VAR_4));

      if (VAR_7 > 4)
 {
   FUNC_1 (VAR_7 == 8);
   FUNC_2 (VAR_8, VAR_6, 8);
   FUNC_3 (VAR_5, VAR_3, VAR_8 + 4);
 }
      else
 {

   FUNC_2 (VAR_8 + 4 - VAR_7, VAR_6, VAR_7);
 }
      FUNC_3 (VAR_5, VAR_2, VAR_8);
    }
}
