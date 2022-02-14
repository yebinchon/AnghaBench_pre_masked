
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int,int ) ;
 int FUNC_2 (int,int ) ;
 int FUNC_3 (int ) ;
 int VAR_3 ;
 scalar_t__ FUNC_4 (int) ;
 scalar_t__ FUNC_5 (int) ;
 int FUNC_6 (char*,int) ;
 int VAR_4 ;
 int FUNC_7 (int) ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;

__attribute__((used)) static int
FUNC_8 (unsigned char *VAR_7, int *VAR_8, int VAR_9, int VAR_10)
{
  int VAR_11;

  while (1)
    {




      while (VAR_9 != VAR_2)
 {
   VAR_9 = FUNC_7 (VAR_10);
   if (VAR_9 == VAR_1)
     return -1;
   if (VAR_9 != VAR_2)
     {





        if (!VAR_4 || VAR_6 > 0)
    {
    if (FUNC_4 (VAR_9) || FUNC_5 (VAR_9))
      {
        FUNC_2 (VAR_9, VAR_3);
      }
    else
      {
        FUNC_1 (VAR_9, VAR_3);
      }
    FUNC_3 (VAR_3);
    }


       if (! (FUNC_4 (VAR_9) || FUNC_5 (VAR_9)))
  (*VAR_8) += 1;

       if (VAR_5 > 0
    && *VAR_8 > VAR_5)
  FUNC_6 ("Debug protocol failure:  more than %d characters before a sync.",
       VAR_5);
     }
 }


      for (VAR_11 = 1; VAR_11 < VAR_0; VAR_11++)
 {
   VAR_9 = FUNC_7 (VAR_10);
   if (VAR_9 == VAR_1)
     return -1;

   if (VAR_9 == VAR_2 || !FUNC_0 (VAR_9))
     break;

   VAR_7[VAR_11] = VAR_9;
 }



      if (VAR_11 >= VAR_0)
 return 0;
    }
}
