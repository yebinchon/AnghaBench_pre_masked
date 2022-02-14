
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char** FUNC_0 (char**) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int*,char***) ;
 int FUNC_3 (char**) ;
 int FUNC_4 (char*,int) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (char*) ;
 scalar_t__ FUNC_7 (char*,char*,int ) ;
 int FUNC_8 (int,char const*) ;

int
FUNC_9 (const char **VAR_0)
{
  int VAR_1, VAR_2;
  char ** VAR_3, ** VAR_4;
  int VAR_5, VAR_6, VAR_7, VAR_8, VAR_9;

  VAR_5 = VAR_6 = VAR_8 = 0;

  while (VAR_0[VAR_6])
    {

      FUNC_8 (VAR_5, VAR_0[VAR_6++]);

      VAR_3 = FUNC_0 ((char **) &VAR_0[VAR_6]);


      VAR_2 = 0;
      VAR_1 = 0;
      while (VAR_0[VAR_6 + VAR_2])
        VAR_2++;
      VAR_6 += VAR_2 + 1;
      while (VAR_0[VAR_6 + VAR_1])
        VAR_1++;


      VAR_4 = FUNC_0 ((char **) &VAR_0[VAR_6]);


      for (VAR_7 = 0; VAR_7 < VAR_2; VAR_7++)
        FUNC_5 (VAR_3[VAR_7]);
      for (VAR_7 = 0; VAR_7 < VAR_1; VAR_7++)
        FUNC_5 (VAR_4[VAR_7]);


      FUNC_2 (&VAR_2, &VAR_3);

      VAR_9 = 0;

      if (VAR_2 != VAR_1)
        {
          FUNC_4 ("FAIL: test-expandargv-%d. Number of arguments don't match.\n", VAR_5);
   VAR_9++;
        }

      else
        for (VAR_7 = 0; VAR_7 < VAR_1; VAR_7++)
          if (FUNC_7 (VAR_3[VAR_7], VAR_4[VAR_7], FUNC_6(VAR_4[VAR_7])) != 0)
            {
              FUNC_4 ("FAIL: test-expandargv-%d. Arguments don't match.\n", VAR_5);
              VAR_9++;
            }

      if (!VAR_9)
        FUNC_4 ("PASS: test-expandargv-%d.\n", VAR_5);
      else
        VAR_8++;

      FUNC_3 (VAR_3);
      FUNC_3 (VAR_4);

      VAR_6 += VAR_1 + 1;

      FUNC_1 (VAR_5);
      VAR_5++;
    }
  return VAR_8;
}
