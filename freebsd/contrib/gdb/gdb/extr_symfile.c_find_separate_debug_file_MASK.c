
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct objfile {char* name; } ;
typedef int bfd_size_type ;
typedef int asection ;


 char* VAR_0 ;
 scalar_t__ FUNC_0 (char) ;
 char* FUNC_1 (int) ;
 char* VAR_1 ;
 int FUNC_2 (int) ;
 char* FUNC_3 (struct objfile*,unsigned long*) ;
 scalar_t__ FUNC_4 (char*,unsigned long) ;
 int FUNC_5 (char*,char*) ;
 int FUNC_6 (char*,char*) ;
 int FUNC_7 (char*) ;
 int FUNC_8 (char*) ;
 char* FUNC_9 (char*) ;

__attribute__((used)) static char *
FUNC_10 (struct objfile *VAR_2)
{
  asection *VAR_3;
  char *VAR_4;
  char *VAR_5;
  char *VAR_6;
  char *VAR_7;
  bfd_size_type VAR_8;
  unsigned long VAR_9;
  int VAR_10;

  VAR_4 = FUNC_3 (VAR_2, &VAR_9);

  if (VAR_4 == ((void*)0))
    return ((void*)0);

  VAR_5 = FUNC_9 (VAR_2->name);





  for (VAR_10 = FUNC_7(VAR_5) - 1; VAR_10 >= 0; VAR_10--)
    {
      if (FUNC_0 (VAR_5[VAR_10]))
 break;
    }
  FUNC_2 (VAR_10 >= 0 && FUNC_0 (VAR_5[VAR_10]));
  VAR_5[VAR_10+1] = '\0';

  VAR_6 = FUNC_1 (FUNC_7 (VAR_1) + 1
                      + FUNC_7 (VAR_5)
                      + FUNC_7 (VAR_0)
                      + FUNC_7 ("/")
                      + FUNC_7 (VAR_4)
                      + 1);


  FUNC_6 (VAR_6, VAR_5);
  FUNC_5 (VAR_6, VAR_4);

  if (FUNC_4 (VAR_6, VAR_9))
    {
      FUNC_8 (VAR_4);
      FUNC_8 (VAR_5);
      return FUNC_9 (VAR_6);
    }


  FUNC_6 (VAR_6, VAR_5);
  FUNC_5 (VAR_6, VAR_0);
  FUNC_5 (VAR_6, "/");
  FUNC_5 (VAR_6, VAR_4);

  if (FUNC_4 (VAR_6, VAR_9))
    {
      FUNC_8 (VAR_4);
      FUNC_8 (VAR_5);
      return FUNC_9 (VAR_6);
    }


  FUNC_6 (VAR_6, VAR_1);
  FUNC_5 (VAR_6, "/");
  FUNC_5 (VAR_6, VAR_5);
  FUNC_5 (VAR_6, VAR_4);

  if (FUNC_4 (VAR_6, VAR_9))
    {
      FUNC_8 (VAR_4);
      FUNC_8 (VAR_5);
      return FUNC_9 (VAR_6);
    }

  FUNC_8 (VAR_4);
  FUNC_8 (VAR_5);
  return ((void*)0);
}
