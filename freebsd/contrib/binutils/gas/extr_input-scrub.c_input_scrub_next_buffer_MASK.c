
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ len; char* ptr; } ;


 int VAR_0 ;
 char* VAR_1 ;
 int VAR_2 ;
 int FUNC_0 () ;
 scalar_t__ FUNC_1 (char*) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int ) ;
 int VAR_3 ;
 char* VAR_4 ;
 int FUNC_4 (int ) ;
 TYPE_1__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ FUNC_5 () ;
 char* FUNC_6 (char*) ;
 char* FUNC_7 (int *) ;
 int VAR_7 ;
 int FUNC_8 () ;
 int FUNC_9 (char*,char*,int) ;
 int FUNC_10 (char*,char*,unsigned int) ;
 int * VAR_8 ;
 int VAR_9 ;
 char* VAR_10 ;
 char* VAR_11 ;
 scalar_t__ VAR_12 ;
 int FUNC_11 (TYPE_1__*) ;
 char* FUNC_12 (char*,int) ;

char *
FUNC_13 (char **VAR_13)
{
  register char *VAR_14;

  if (VAR_12 >= 0)
    {
      if (VAR_12 >= VAR_5.len)
 {
   FUNC_11 (&VAR_5);
   if (VAR_6
       )
     {
       FUNC_4 (VAR_7);





     }
   --VAR_7;
   VAR_10 = ((void*)0);
   if (VAR_8 != ((void*)0))
     *VAR_13 = FUNC_7 (VAR_8);
   return VAR_10;
 }

      VAR_10 = VAR_5.ptr + VAR_5.len;
      VAR_9 = 0;
      *VAR_13 = VAR_5.ptr + VAR_12;
      VAR_12 = VAR_5.len;
      return VAR_10;
    }

  *VAR_13 = VAR_4 + VAR_2;

  if (VAR_9)
    {
      FUNC_10 (VAR_4 + VAR_2, VAR_10,
       (unsigned int) VAR_9);
      FUNC_9 (VAR_4 + VAR_2, VAR_11, VAR_0);
    }
  VAR_14 = FUNC_6 (VAR_4
           + VAR_2
           + VAR_9);
  if (VAR_14)
    {
      register char *VAR_15;

      *VAR_14 = '\0';
      for (VAR_15 = VAR_14 - 1; *VAR_15 != '\n' || FUNC_1 (VAR_15); --VAR_15)
 ;
      ++VAR_15;

      while (VAR_15 <= VAR_4 + VAR_2)
 {
   int VAR_16;

   VAR_16 = VAR_14 - VAR_4;
   VAR_3 += FUNC_5 ();
   VAR_4 = FUNC_12 (VAR_4,
       (VAR_2
        + 2 * VAR_3
        + VAR_0));
   *VAR_13 = VAR_4 + VAR_2;
   VAR_14 = FUNC_6 (VAR_4 + VAR_16);

   if (VAR_14 == ((void*)0))
     {
       FUNC_3 (FUNC_2("partial line at end of file ignored"));
       VAR_10 = ((void*)0);
       if (VAR_8)
  *VAR_13 = FUNC_7 (VAR_8);
       return ((void*)0);
     }


   *VAR_14 = '\0';
   for (VAR_15 = VAR_14 - 1; *VAR_15 != '\n' || FUNC_1 (VAR_15); --VAR_15)
     ;
   ++VAR_15;
 }

      VAR_10 = VAR_15;
      VAR_9 = VAR_14 - VAR_15;
      FUNC_9 (VAR_11, VAR_10, (int) VAR_0);
      FUNC_9 (VAR_10, VAR_1, (int) VAR_0);
    }
  else
    {
      VAR_10 = 0;
      if (VAR_9 > 0)
 {
   FUNC_3 (FUNC_2("partial line at end of file ignored"));
 }


      FUNC_0 ();


      if (VAR_8)
 {
   *VAR_13 = FUNC_7 (VAR_8);

 }
    }
  return (VAR_10);
}
