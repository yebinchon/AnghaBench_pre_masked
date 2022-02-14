
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int bfd ;


 char* FUNC_0 (int ) ;
 int FUNC_1 () ;
 int VAR_0 ;
 int * FUNC_2 (char*,char const*) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (char*,...) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static bfd *
FUNC_6 (char *VAR_1, const char *VAR_2, char *VAR_3)
{
  bfd *VAR_4;

  if (*VAR_3 == 'w')
    {
      VAR_4 = FUNC_2 (VAR_1, VAR_2);
      if (VAR_4 == ((void*)0))
 FUNC_4 ("Failed to open %s: %s.", VAR_1,
        FUNC_0 (FUNC_1 ()));
      FUNC_5 (VAR_4);
      if (!FUNC_3 (VAR_4, VAR_0))
 FUNC_4 ("bfd_openw_with_cleanup: %s.", FUNC_0 (FUNC_1 ()));
    }
  else if (*VAR_3 == 'a')
    {
      FUNC_4 ("bfd_openw does not work with append.");
    }
  else
    FUNC_4 ("bfd_openw_with_cleanup: unknown mode %s.", VAR_3);

  return VAR_4;
}
