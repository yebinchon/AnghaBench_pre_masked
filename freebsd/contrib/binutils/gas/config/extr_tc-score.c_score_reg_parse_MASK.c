
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct reg_entry {int number; } ;
struct hash_control {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (char) ;
 scalar_t__ FUNC_1 (char) ;
 scalar_t__ FUNC_2 (struct hash_control*,char*) ;
 int FUNC_3 (char) ;

__attribute__((used)) static int
FUNC_4 (char **VAR_1, struct hash_control *VAR_2)
{
  char *VAR_3 = *VAR_1;
  char VAR_4;
  char *VAR_5;
  struct reg_entry *VAR_6;

  VAR_5 = VAR_3;
  if (!FUNC_0 (*VAR_5) || !FUNC_3 (*VAR_5))
    return (int) VAR_0;

  VAR_4 = *VAR_5++;

  while (FUNC_0 (VAR_4) || FUNC_1 (VAR_4) || VAR_4 == '_')
    VAR_4 = *VAR_5++;

  *--VAR_5 = 0;
  VAR_6 = (struct reg_entry *) FUNC_2 (VAR_2, VAR_3);
  *VAR_5 = VAR_4;

  if (VAR_6)
    {
      *VAR_1 = VAR_5;
      return VAR_6->number;
    }
  return (int) VAR_0;
}
