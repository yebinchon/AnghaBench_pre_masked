
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
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (char*,int) ;
 int FUNC_1 (int,char*) ;
 int FUNC_2 (int,char*) ;
 int FUNC_3 (int,char*) ;

__attribute__((used)) static void
FUNC_4 (int VAR_10)
{
  if (VAR_10 == -1)
    {
      for (VAR_10 = 0; VAR_10 < VAR_6; VAR_10++)
 FUNC_4 (VAR_10);
    }
  else
    {
      char VAR_11[VAR_5];
      if (VAR_10 < 15)
 FUNC_2 (1 << VAR_10, VAR_11);
      else if (VAR_10 == VAR_3)
 FUNC_2 (VAR_8, VAR_11);
      else if (VAR_10 == VAR_4)
 FUNC_2 (VAR_7, VAR_11);
      else if (VAR_10 == VAR_2)
 FUNC_1 (VAR_9, VAR_11);
      else if (VAR_10 >= VAR_0 && VAR_10 <= VAR_1)
 FUNC_1 (1 << (VAR_10 - VAR_0), VAR_11);
      else
 {
   FUNC_0 ("Help me with fetch reg %d\n", VAR_10);
 }
      FUNC_3 (VAR_10, VAR_11);
    }
}
