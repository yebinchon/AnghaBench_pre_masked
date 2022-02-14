
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int symbolS ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (char*,char*) ;
 scalar_t__ FUNC_3 (char) ;
 scalar_t__ FUNC_4 (char) ;
 scalar_t__ FUNC_5 (char*,unsigned long*) ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int * FUNC_6 (char*) ;

__attribute__((used)) static int
FUNC_7 (char **VAR_6, unsigned int VAR_7, unsigned int *VAR_8)
{
  symbolS *VAR_9;
  char *VAR_10;
  char VAR_11;
  int VAR_12 = -1;


  VAR_10 = *VAR_6;
  if (FUNC_3 (*VAR_10))
    ++VAR_10;
  while (FUNC_4 (*VAR_10))
    ++VAR_10;


  VAR_11 = *VAR_10;
  *VAR_10 = '\0';


  if ((VAR_9 = FUNC_6 (*VAR_6)) && FUNC_0 (VAR_9) == VAR_5)
    {
      int VAR_13 = FUNC_1 (VAR_9);
      if (VAR_13 & VAR_7)
 VAR_12 = VAR_13 & VAR_0;
      else if ((VAR_7 & VAR_2) && (VAR_13 & ~1) == (VAR_1 | 2))

 VAR_12 = (VAR_13 & VAR_0) - 2;
    }

  else if ((VAR_7 & VAR_1) && VAR_4)
    {
      char *VAR_14 = *VAR_6;
      unsigned long VAR_15;

      if (*VAR_14 == '$')
 ++VAR_14;
      if (FUNC_5 (VAR_14, &VAR_15))
 VAR_12 = VAR_15 & VAR_0;
    }


  if (VAR_12 >= 0)
    *VAR_6 = VAR_10;
  else if (VAR_7 & VAR_3)
    FUNC_2 ("Unrecognized register name `%s'", *VAR_6);

  *VAR_10 = VAR_11;
  if (VAR_8)
    *VAR_8 = VAR_12;
  return VAR_12 >= 0;
}
