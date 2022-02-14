
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stat {int st_mode; } ;


 char* VAR_0 ;
 scalar_t__ FUNC_0 (unsigned char const) ;
 int FUNC_1 (int ) ;
 int VAR_1 ;
 scalar_t__ FUNC_2 (char*,int ) ;
 char** FUNC_3 (int) ;
 int VAR_2 ;
 int VAR_3 ;
 char* VAR_4 ;
 char* FUNC_4 (char const*,size_t) ;
 int VAR_5 ;
 int FUNC_5 (int ,char const**,int) ;
 scalar_t__ FUNC_6 (char*,struct stat*) ;
 int FUNC_7 (char const*) ;
 int FUNC_8 (int) ;

__attribute__((used)) static void
FUNC_9 (const char *VAR_6)
{


  const char **VAR_7
    = FUNC_3 ((FUNC_7 (VAR_6) + 8) * sizeof (char *));
  int VAR_8 = 0;
  const char *VAR_9;
  struct stat VAR_10;

  VAR_7[VAR_8++] = VAR_4;
  for (;;)
    {
      while (FUNC_0 ((const unsigned char)*VAR_6))
 VAR_6++;
      if (!*VAR_6)
 break;
      VAR_9 = VAR_6;
      while (*VAR_6 && !FUNC_0 ((const unsigned char)*VAR_6))
 VAR_6++;
      if (VAR_9[0] != '-')
 VAR_7[VAR_8++]
   = FUNC_4 (VAR_9, (size_t) (VAR_6 - VAR_9));
      else
 {
   switch (VAR_9[1])
     {
     case 'g':
     case 'O':
     case 'S':
     case 'c':
       break;
     case 'o':
       while (FUNC_0 ((const unsigned char)*VAR_6))
  VAR_6++;
       while (*VAR_6
       && !FUNC_0 ((const unsigned char)*VAR_6))
  VAR_6++;
       break;
     default:
       VAR_7[VAR_8++]
  = FUNC_4 (VAR_9, (size_t) (VAR_6 - VAR_9));
     }
 }
      if (!*VAR_6)
 break;
    }
  VAR_7[VAR_8++] = "-aux-info";


  VAR_2 = VAR_8;
  VAR_7[VAR_8++] = ((void*)0);

  VAR_7[VAR_8++] = "-S";
  VAR_7[VAR_8++] = "-o";

  if ((FUNC_6 (VAR_0, &VAR_10) == 0)
      && (!FUNC_1 (VAR_10.st_mode))
      && (FUNC_2 (VAR_0, VAR_1) == 0))
    VAR_7[VAR_8++] = VAR_0;
  else



    VAR_7[VAR_8++] = "/dev/null";


  VAR_5 = VAR_8;
  VAR_7[VAR_8++] = ((void*)0);

  VAR_7[VAR_8++] = ((void*)0);



  VAR_3 = FUNC_8 (sizeof (char *) * (VAR_8+1));
  FUNC_5 (VAR_3, VAR_7, sizeof (char *) * VAR_8);
}
