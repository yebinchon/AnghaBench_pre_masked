
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int symbolS ;
struct local_symbol {int dummy; } ;


 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int ,char const*) ;
 int VAR_0 ;
 int VAR_1 ;

symbolS *
FUNC_2 (const char *VAR_2, int VAR_3)
{
  struct local_symbol *VAR_4;
  symbolS* VAR_5;

  VAR_4 = (struct local_symbol *) FUNC_1 (VAR_0, VAR_2);
  if (VAR_4 != ((void*)0))
    return (symbolS *) VAR_4;

  VAR_5 = ((symbolS *) FUNC_1 (VAR_1, VAR_2));






  if (VAR_5 && ! VAR_3)
    FUNC_0 (VAR_5);

  return VAR_5;
}
