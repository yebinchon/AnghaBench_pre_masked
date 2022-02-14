
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FILE ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int * FUNC_1 (char*,int ) ;
 int VAR_1 ;
 int FUNC_2 (char*,char*) ;

int
FUNC_3 (char *VAR_2)
{
  extern FILE *VAR_3;
  extern int FUNC_4 (void);

  VAR_3 = FUNC_1 (VAR_2, VAR_0);
  if (VAR_3 == 0)
    {
      FUNC_2 ("Can't open processor instruction specification file \"%s\"\n",
       VAR_2);
      return 1;
    }

  while (FUNC_4 ())
    ;

  FUNC_0 (VAR_3);
  VAR_1 = 1;
  return 0;
}
