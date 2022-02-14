
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct work_stuff {int dummy; } ;
typedef int string ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (struct work_stuff*) ;
 int FUNC_1 (struct work_stuff*,char const**,int *,char const*) ;
 int FUNC_2 (struct work_stuff*,char const**,int *) ;
 int FUNC_3 (struct work_stuff*,int ,int) ;
 int FUNC_4 (int *,int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int * FUNC_8 (char const*,char*) ;
 int FUNC_9 (struct work_stuff*,struct work_stuff*) ;

__attribute__((used)) static int
FUNC_10 (struct work_stuff *VAR_4, const char **VAR_5,
                           string *VAR_6, const char *VAR_7)
{
  const char *VAR_8 = *VAR_5;
  int VAR_9 = 0;
  string VAR_10;
  struct work_stuff VAR_11;

  if (*(VAR_7 + 2) == '\0')
    return 0;



  if (VAR_0 || VAR_3 || VAR_2 || VAR_1
      || FUNC_8 (VAR_7 + 2, "__") == ((void*)0))
    {
      FUNC_1 (VAR_4, VAR_5, VAR_6, VAR_7);
      return 1;
    }



  FUNC_7 (&VAR_10);
  FUNC_4 (&VAR_10, VAR_6);
  FUNC_3 (&VAR_11, 0, sizeof VAR_11);
  FUNC_9 (&VAR_11, VAR_4);







  while (VAR_7[2])
    {
      FUNC_1 (VAR_4, VAR_5, VAR_6, VAR_7);
      VAR_9 = FUNC_2 (VAR_4, VAR_5, VAR_6);
      if (VAR_9)
 break;


      *VAR_5 = VAR_8;
      FUNC_5 (VAR_6);
      FUNC_4 (VAR_6, &VAR_10);
      FUNC_9 (VAR_4, &VAR_11);


      VAR_7 += 2;


      while (*VAR_7 && (VAR_7[0] != '_' || VAR_7[1] != '_'))
 VAR_7++;


      while (*VAR_7 && *VAR_7 == '_')
 VAR_7++;
      VAR_7 -= 2;
    }


  FUNC_0 (&VAR_11);
  FUNC_6 (&VAR_10);

  return VAR_9;
}
