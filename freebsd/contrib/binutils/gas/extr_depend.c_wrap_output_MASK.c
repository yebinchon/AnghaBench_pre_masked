
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FILE ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (int,int *) ;
 int FUNC_2 (int *,char*) ;

__attribute__((used)) static void
FUNC_3 (FILE *VAR_2, char *VAR_3, int VAR_4)
{
  int VAR_5 = FUNC_2 (((void*)0), VAR_3);

  if (VAR_5 == 0)
    return;

  if (VAR_1
      && (VAR_0
   - 1
   - 2
   < VAR_1 + VAR_5))
    {
      FUNC_0 (VAR_2, " \\\n ");
      VAR_1 = 0;
      if (VAR_4 == ' ')
 VAR_4 = '\0';
    }

  if (VAR_4 == ' ')
    {
      FUNC_1 (VAR_4, VAR_2);
      ++VAR_1;
    }

  FUNC_2 (VAR_2, VAR_3);
  VAR_1 += VAR_5;

  if (VAR_4 == ':')
    {
      FUNC_1 (VAR_4, VAR_2);
      ++VAR_1;
    }
}
