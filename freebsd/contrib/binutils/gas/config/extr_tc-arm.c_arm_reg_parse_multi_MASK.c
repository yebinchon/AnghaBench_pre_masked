
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct reg_entry {int dummy; } ;


 scalar_t__ FUNC_0 (char) ;
 scalar_t__ FUNC_1 (char) ;
 char VAR_0 ;
 char VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_2 (int ,char*,int) ;
 int FUNC_3 (char) ;

__attribute__((used)) static struct reg_entry *
FUNC_4 (char **VAR_3)
{
  char *VAR_4 = *VAR_3;
  char *VAR_5;
  struct reg_entry *VAR_6;
  VAR_5 = VAR_4;
  if (!FUNC_0 (*VAR_5) || !FUNC_3 (*VAR_5))
    return ((void*)0);

  do
    VAR_5++;
  while (FUNC_0 (*VAR_5) || FUNC_1 (*VAR_5) || *VAR_5 == '_');

  VAR_6 = (struct reg_entry *) FUNC_2 (VAR_2, VAR_4, VAR_5 - VAR_4);

  if (!VAR_6)
    return ((void*)0);

  *VAR_3 = VAR_5;
  return VAR_6;
}
