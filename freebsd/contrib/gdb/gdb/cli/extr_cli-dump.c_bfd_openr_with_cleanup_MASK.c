
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int bfd ;


 int FUNC_0 (int *,int ) ;
 char* FUNC_1 (int ) ;
 int FUNC_2 () ;
 int VAR_0 ;
 int * FUNC_3 (char const*,char const*) ;
 int FUNC_4 (char*,char const*,...) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static bfd *
FUNC_6 (const char *VAR_1, const char *VAR_2)
{
  bfd *VAR_3;

  VAR_3 = FUNC_3 (VAR_1, VAR_2);
  if (VAR_3 == ((void*)0))
    FUNC_4 ("Failed to open %s: %s.", VAR_1,
    FUNC_1 (FUNC_2 ()));

  FUNC_5 (VAR_3);
  if (!FUNC_0 (VAR_3, VAR_0))
    FUNC_4 ("'%s' is not a recognized file format.", VAR_1);

  return VAR_3;
}
