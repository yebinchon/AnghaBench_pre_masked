
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int flagword ;
typedef int bfd ;
typedef int asection ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (char*,char*) ;
 int VAR_1 ;
 int FUNC_1 (char*) ;
 scalar_t__ VAR_2 ;
 int FUNC_2 (int *) ;
 int * FUNC_3 (int *,int ) ;
 int FUNC_4 (int *,int *,char*,int ,int) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (char*,char*,int,int ,int ,int,int ) ;
 int FUNC_7 (char*) ;
 int FUNC_8 (int ,int ,int ) ;
 int FUNC_9 (char*,char*,int) ;
 char* FUNC_10 (char*,char) ;
 char* FUNC_11 (int) ;
 char* FUNC_12 (char*) ;

__attribute__((used)) static void
FUNC_13 (bfd *VAR_3)
{
  asection * VAR_4;
  int VAR_5;
  char * VAR_6;
  char * VAR_7;
  char * VAR_8;


  VAR_4 = FUNC_3 (VAR_3, VAR_1);

  if (VAR_4 == ((void*)0))
    return;

  VAR_5 = FUNC_5 (VAR_4);
  VAR_6 = FUNC_11 (VAR_5);

  FUNC_4 (VAR_3, VAR_4, VAR_6, 0, VAR_5);


  FUNC_8 (FUNC_1("Sucking in info from %s section in %s"),
   VAR_1, FUNC_2 (VAR_3));




  VAR_7 = VAR_6;
  VAR_8 = VAR_6 + VAR_5;
  while (VAR_7 < VAR_8)
    {
      if (VAR_7[0] == '-'
   && FUNC_0 (VAR_7, "-export:"))
 {
   char * VAR_9;
   char * VAR_10;
   flagword VAR_11 = VAR_0;

   VAR_7 += 8;
   VAR_9 = VAR_7;
   while (VAR_7 < VAR_8 && *VAR_7 != ',' && *VAR_7 != ' ' && *VAR_7 != '-')
     VAR_7++;
   VAR_10 = FUNC_11 (VAR_7 - VAR_9 + 1);
   FUNC_9 (VAR_10, VAR_9, VAR_7 - VAR_9);
   VAR_10[VAR_7 - VAR_9] = 0;
   if (VAR_7 < VAR_8 && *VAR_7 == ',')
     {
       char *VAR_12 = ++VAR_7;
       while (VAR_7 < VAR_8 && *VAR_7 != ' ' && *VAR_7 != '-')
  VAR_7++;
       if (FUNC_0 (VAR_12, "data"))
  VAR_11 &= ~VAR_0;
     }




   FUNC_6 (VAR_10, 0, -1, 0, 0, ! (VAR_11 & VAR_0), 0);

   if (VAR_2 && FUNC_10 (VAR_10, '@'))
     {
       int VAR_13 = (*VAR_10 == '@') ;
       char *VAR_14 = FUNC_12 (VAR_10 + VAR_13);
       char *VAR_15 = FUNC_10 (VAR_14, '@');
       *VAR_15 = '\0';

       FUNC_6 (VAR_14, FUNC_12 (VAR_10), -1, 0, 0, 0, 0);
     }
 }
      else
 VAR_7++;
    }
  FUNC_7 (VAR_6);
}
