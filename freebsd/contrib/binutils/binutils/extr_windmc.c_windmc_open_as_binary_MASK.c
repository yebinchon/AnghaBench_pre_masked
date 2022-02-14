
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int bfd ;


 int * FUNC_0 (char const*,char*) ;
 int FUNC_1 (char*,char const*) ;

__attribute__((used)) static bfd *
FUNC_2 (const char *VAR_0)
{
  bfd *VAR_1;

  VAR_1 = FUNC_0 (VAR_0, "binary");
  if (! VAR_1)
    FUNC_1 ("can't open `%s' for output", VAR_0);

  return VAR_1;
}
