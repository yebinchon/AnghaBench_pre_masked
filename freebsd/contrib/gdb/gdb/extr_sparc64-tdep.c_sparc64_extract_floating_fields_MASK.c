
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct type {int dummy; } ;
struct regcache {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
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
FUNC_9 (struct regcache *VAR_3, struct type *VAR_4,
     char *VAR_5, int VAR_6)
{
  if (FUNC_7 (VAR_4))
    {
      int VAR_7 = FUNC_2 (VAR_4);
      int VAR_8;

      if (VAR_7 == 16)
 {
   FUNC_5 (VAR_6 == 0 || VAR_6 == 128);

   VAR_8 = VAR_1 + VAR_6 / 128;
   FUNC_6 (VAR_3, VAR_8, VAR_5 + (VAR_6 / 8));
 }
      else if (VAR_7 == 8)
 {
   FUNC_5 (VAR_6 % 64 == 0 && VAR_6 >= 0 && VAR_6 < 256);

   VAR_8 = VAR_0 + VAR_6 / 64;
   FUNC_6 (VAR_3, VAR_8, VAR_5 + (VAR_6 / 8));
 }
      else
 {
   FUNC_5 (VAR_7 == 4);
   FUNC_5 (VAR_6 % 32 == 0 && VAR_6 >= 0 && VAR_6 < 256);

   VAR_8 = VAR_2 + VAR_6 / 32;
   FUNC_6 (VAR_3, VAR_8, VAR_5 + (VAR_6 / 8));
 }
    }
  else if (FUNC_8 (VAR_4))
    {
      int VAR_9;

      for (VAR_9 = 0; VAR_9 < FUNC_3 (VAR_4); VAR_9++)
 {
   struct type *VAR_10 = FUNC_4 (FUNC_1 (VAR_4, VAR_9));
   int VAR_11 = VAR_6 + FUNC_0 (VAR_4, VAR_9);

   FUNC_9 (VAR_3, VAR_10, VAR_5, VAR_11);
 }
    }
}
