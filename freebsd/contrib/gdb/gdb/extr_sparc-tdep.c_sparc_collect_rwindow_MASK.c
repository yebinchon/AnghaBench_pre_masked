
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct regcache {int dummy; } ;
typedef int ULONGEST ;
typedef int CORE_ADDR ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (char*,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct regcache const*,int,char*) ;
 int FUNC_3 () ;
 int FUNC_4 (char*,int,int) ;
 int FUNC_5 (int,char*,int) ;

void
FUNC_6 (const struct regcache *VAR_5,
         CORE_ADDR VAR_6, int VAR_7)
{
  int VAR_8 = 0;
  char VAR_9[8];
  int VAR_10;

  if (VAR_6 & 1)
    {

      VAR_6 += VAR_0;

      for (VAR_10 = VAR_2; VAR_10 <= VAR_1; VAR_10++)
 {
   if (VAR_7 == -1 || VAR_7 == VAR_3 || VAR_7 == VAR_10)
     {
       FUNC_2 (VAR_5, VAR_10, VAR_9);
       FUNC_5 (VAR_6 + ((VAR_10 - VAR_2) * 8), VAR_9, 8);
     }
 }
    }
  else
    {


      VAR_6 &= 0xffffffffUL;


      if (FUNC_1 (VAR_4) == 64)
 VAR_8 = 4;

      for (VAR_10 = VAR_2; VAR_10 <= VAR_1; VAR_10++)
 {
   if (VAR_7 == -1 || VAR_7 == VAR_3 || VAR_7 == VAR_10)
     {
       FUNC_2 (VAR_5, VAR_10, VAR_9);


       if (VAR_10 == VAR_1)
  {
    ULONGEST VAR_11 = FUNC_3 ();
    ULONGEST VAR_12 = FUNC_0 (VAR_9 + VAR_8, 4);

    FUNC_4 (VAR_9 + VAR_8, 4, VAR_12 ^ VAR_11);
  }

       FUNC_5 (VAR_6 + ((VAR_10 - VAR_2) * 4),
       VAR_9 + VAR_8, 4);
     }
 }
    }
}
