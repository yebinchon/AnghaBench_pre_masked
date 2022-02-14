
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 long VAR_0 ;
 long VAR_1 ;
 long VAR_2 ;
 char* FUNC_0 (char*) ;
 long FUNC_1 (char const*,char**,int) ;

int
FUNC_2 (void)
{
  long int VAR_3 = VAR_0;
  char const *VAR_4 = FUNC_0 ("_POSIX2_VERSION");

  if (VAR_4 && *VAR_4)
    {
      char *VAR_5;
      long int VAR_6 = FUNC_1 (VAR_4, &VAR_5, 10);
      if (! *VAR_5)
 VAR_3 = VAR_6;
    }

  return VAR_3 < VAR_2 ? VAR_2 : VAR_3 < VAR_1 ? VAR_3 : VAR_1;
}
