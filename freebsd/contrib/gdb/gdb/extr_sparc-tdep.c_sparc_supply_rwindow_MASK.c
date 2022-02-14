
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
 int FUNC_0 (char*,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char*,int ,int) ;
 int FUNC_3 (struct regcache*,int,char*) ;
 int FUNC_4 () ;
 int FUNC_5 (char*,int,int) ;
 int FUNC_6 (int,char*,int) ;

void
FUNC_7 (struct regcache *VAR_4, CORE_ADDR VAR_5, int VAR_6)
{
  int VAR_7 = 0;
  char VAR_8[8];
  int VAR_9;

  if (VAR_5 & 1)
    {

      VAR_5 += VAR_0;

      for (VAR_9 = VAR_2; VAR_9 <= VAR_1; VAR_9++)
 {
   if (VAR_6 == VAR_9 || VAR_6 == -1)
     {
       FUNC_6 (VAR_5 + ((VAR_9 - VAR_2) * 8), VAR_8, 8);
       FUNC_3 (VAR_4, VAR_9, VAR_8);
     }
 }
    }
  else
    {


      VAR_5 &= 0xffffffffUL;



      if (FUNC_1 (VAR_3) == 64)
 {
   FUNC_2 (VAR_8, 0, 4);
   VAR_7 = 4;
 }

      for (VAR_9 = VAR_2; VAR_9 <= VAR_1; VAR_9++)
 {
   if (VAR_6 == VAR_9 || VAR_6 == -1)
     {
       FUNC_6 (VAR_5 + ((VAR_9 - VAR_2) * 4),
      VAR_8 + VAR_7, 4);


       if (VAR_9 == VAR_1)
  {
    ULONGEST VAR_10 = FUNC_4 ();
    ULONGEST VAR_11 = FUNC_0 (VAR_8 + VAR_7, 4);

    FUNC_5 (VAR_8 + VAR_7, 4, VAR_11 ^ VAR_10);
  }

       FUNC_3 (VAR_4, VAR_9, VAR_8);
     }
 }
    }
}
