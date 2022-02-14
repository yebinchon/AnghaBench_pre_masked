
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
 int FUNC_0 (struct type*,int) ;
 int FUNC_1 (struct type*,int) ;
 int FUNC_2 (struct type*) ;
 int FUNC_3 (struct type*) ;
 struct type* FUNC_4 (int ) ;
 int FUNC_5 (int) ;
 int FUNC_6 (struct regcache*,int,char*) ;
 scalar_t__ FUNC_7 (struct type*) ;
 scalar_t__ FUNC_8 (struct type*) ;

__attribute__((used)) static void
FUNC_9 (struct regcache *VAR_4, struct type *VAR_5,
          char *VAR_6, int VAR_7, int VAR_8)
{
  FUNC_5 (VAR_7 < 16);

  if (FUNC_7 (VAR_5))
    {
      int VAR_9 = FUNC_2 (VAR_5);
      int VAR_10;

      if (VAR_9 == 16)
 {
   FUNC_5 (VAR_8 == 0);
   FUNC_5 ((VAR_7 % 2) == 0);

   VAR_10 = VAR_1 + VAR_7 / 2;
   FUNC_6 (VAR_4, VAR_10, VAR_6);
 }
      else if (VAR_9 == 8)
 {
   FUNC_5 (VAR_8 == 0 || VAR_8 == 64);

   VAR_10 = VAR_0 + VAR_7 + VAR_8 / 64;
   FUNC_6 (VAR_4, VAR_10, VAR_6 + (VAR_8 / 8));
 }
      else
 {
   FUNC_5 (VAR_9 == 4);
   FUNC_5 (VAR_8 % 32 == 0 && VAR_8 >= 0 && VAR_8 < 128);

   VAR_10 = VAR_2 + VAR_7 * 2 + VAR_8 / 32;
   FUNC_6 (VAR_4, VAR_10, VAR_6 + (VAR_8 / 8));
 }
    }
  else if (FUNC_8 (VAR_5))
    {
      int VAR_11;

      for (VAR_11 = 0; VAR_11 < FUNC_3 (VAR_5); VAR_11++)
 {
   struct type *VAR_12 = FUNC_4 (FUNC_1 (VAR_5, VAR_11));
   int VAR_13 = VAR_8 + FUNC_0 (VAR_5, VAR_11);

   FUNC_9 (VAR_4, VAR_12, VAR_6,
      VAR_7, VAR_13);
 }
      if (FUNC_3 (VAR_5) == 1)
 {
   struct type *VAR_14 = FUNC_4 (FUNC_1 (VAR_5, 0));

   if (FUNC_7 (VAR_14) && FUNC_2 (VAR_14) == 4)
     FUNC_6 (VAR_4, VAR_3, VAR_6);
 }
    }
}
