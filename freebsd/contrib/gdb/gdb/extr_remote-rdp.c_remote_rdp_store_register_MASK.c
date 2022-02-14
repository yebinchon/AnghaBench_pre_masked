
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int,char*) ;
 int FUNC_1 (char*,int) ;
 int FUNC_2 (int,char*) ;
 int FUNC_3 (int,char*) ;

__attribute__((used)) static void
FUNC_4 (int VAR_8)
{
  if (VAR_8 == -1)
    {
      for (VAR_8 = 0; VAR_8 < VAR_5; VAR_8++)
 FUNC_4 (VAR_8);
    }
  else
    {
      char VAR_9[VAR_4];
      FUNC_0 (VAR_8, VAR_9);
      if (VAR_8 < 15)
 FUNC_3 (1 << VAR_8, VAR_9);
      else if (VAR_8 == VAR_2)
 FUNC_3 (VAR_7, VAR_9);
      else if (VAR_8 == VAR_3)
 FUNC_3 (VAR_6, VAR_9);
      else if (VAR_8 >= VAR_0 && VAR_8 <= VAR_1)
 FUNC_2 (1 << (VAR_8 - VAR_0), VAR_9);
      else
 {
   FUNC_1 ("Help me with reg %d\n", VAR_8);
 }
    }
}
