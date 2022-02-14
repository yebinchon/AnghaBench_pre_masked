
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct regcache {int dummy; } ;
struct gdbarch {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct gdbarch*) ;
 struct gdbarch* FUNC_2 (struct regcache const*) ;
 int FUNC_3 (char*,int ,int) ;
 int FUNC_4 (struct regcache const*,int,char*) ;

void
FUNC_5 (const struct regcache *VAR_6,
         void *VAR_7, int VAR_8)
{
  char *VAR_9 = VAR_7;
  struct gdbarch *VAR_10 = FUNC_2 (VAR_6);
  int VAR_11 = VAR_5;
  int VAR_12;

  if (FUNC_1 (VAR_10) == 32)
    {
      VAR_11 = VAR_4;



      for (VAR_12 = 0; VAR_12 <= VAR_1; VAR_12++)
 {
   if (VAR_8 == -1 || VAR_8 == VAR_12)
     FUNC_3 (VAR_9 + FUNC_0 (VAR_12), 0, 8);
 }

      for (VAR_12 = VAR_0; VAR_12 <= VAR_2; VAR_12++)
 {
   if (VAR_8 == -1 || VAR_8 == VAR_12)
     FUNC_3 (VAR_9 + FUNC_0 (VAR_12), 0, 8);
 }
    }

  if (VAR_11 > VAR_3)
    VAR_11 = VAR_3;

  for (VAR_12 = 0; VAR_12 < VAR_11; VAR_12++)
    {
      if (VAR_8 == -1 || VAR_8 == VAR_12)
 {
   int VAR_13 = FUNC_0 (VAR_12);

   if (VAR_13 != -1)
     FUNC_4 (VAR_6, VAR_12, VAR_9 + VAR_13);
 }
    }
}
