
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FILE ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (char*) ;
 int VAR_1 ;
 int FUNC_3 (int ,char const*,int) ;
 int * FUNC_4 (char const*,char*) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (char const*,char*,char*) ;
 int FUNC_8 (int ) ;
 char* FUNC_9 (size_t) ;
 char* FUNC_10 (char*,size_t) ;

__attribute__((used)) static void
FUNC_11 (const char *VAR_2)
{
  FILE *VAR_3;
  char *VAR_4;
  size_t VAR_5;
  size_t VAR_6;
  size_t VAR_7;
  int VAR_8, VAR_9;

  VAR_3 = FUNC_4 (VAR_2, "r");
  if (VAR_3 == ((void*)0))
    FUNC_3 (FUNC_2("couldn't open symbol redefinition file %s (error: %s)"),
    VAR_2, FUNC_8 (VAR_1));

  VAR_5 = 100;
  VAR_4 = FUNC_9 (VAR_5);

  VAR_9 = 1;
  VAR_8 = FUNC_6 (VAR_3);
  VAR_6 = 0;
  VAR_7 = 0;
  while (VAR_8 != VAR_0)
    {

      while (! FUNC_1 (VAR_8) && ! FUNC_0 (VAR_8) && VAR_8 != VAR_0)
 {
   if (VAR_8 == '#')
     goto comment;
   VAR_4[VAR_6++] = VAR_8;
   if (VAR_6 >= VAR_5)
     {
       VAR_5 *= 2;
       VAR_4 = FUNC_10 (VAR_4, VAR_5);
     }
   VAR_8 = FUNC_6 (VAR_3);
 }
      VAR_4[VAR_6++] = '\0';
      if (VAR_8 == VAR_0)
 break;


      while (FUNC_1 (VAR_8))
 VAR_8 = FUNC_6 (VAR_3);
      if (VAR_8 == '#' || FUNC_0 (VAR_8))
 goto comment;
      if (VAR_8 == VAR_0)
 break;


      VAR_7 = VAR_6;
      while (! FUNC_1 (VAR_8) && ! FUNC_0 (VAR_8) && VAR_8 != VAR_0)
 {
   if (VAR_8 == '#')
     goto comment;
   VAR_4[VAR_6++] = VAR_8;
   if (VAR_6 >= VAR_5)
     {
       VAR_5 *= 2;
       VAR_4 = FUNC_10 (VAR_4, VAR_5);
     }
   VAR_8 = FUNC_6 (VAR_3);
 }
      VAR_4[VAR_6++] = '\0';
      if (VAR_8 == VAR_0)
 break;


      while (! FUNC_0(VAR_8) && VAR_8 != VAR_0 && FUNC_1 (VAR_8))
 VAR_8 = FUNC_6 (VAR_3);
      if (VAR_8 == '#')
 goto comment;

      if ((VAR_8 == '\r' && (VAR_8 = FUNC_6 (VAR_3)) == '\n')
   || VAR_8 == '\n' || VAR_8 == VAR_0)
 {
 end_of_line:

   if (VAR_4[0] != '\0')
     FUNC_7 (VAR_2, &VAR_4[0], &VAR_4[VAR_7]);

   VAR_9++;
   VAR_6 = 0;
   VAR_7 = 0;
   if (VAR_8 == VAR_0)
     break;
   VAR_8 = FUNC_6 (VAR_3);
   continue;
 }
      else
 FUNC_3 (FUNC_2("%s:%d: garbage found at end of line"), VAR_2, VAR_9);
 comment:
      if (VAR_6 != 0 && (VAR_7 == 0 || VAR_7 == VAR_6))
 FUNC_3 (FUNC_2("%s:%d: missing new symbol name"), VAR_2, VAR_9);
      VAR_4[VAR_6++] = '\0';


      while (VAR_8 != '\n' && VAR_8 != VAR_0)
 VAR_8 = FUNC_6 (VAR_3);
      goto end_of_line;
    }

  if (VAR_6 != 0)
    FUNC_3 (FUNC_2("%s:%d: premature end of file"), VAR_2, VAR_9);

  FUNC_5 (VAR_4);
}
