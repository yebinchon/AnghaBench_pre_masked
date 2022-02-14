
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct type {int dummy; } ;
typedef double DOUBLEST ;


 char* FUNC_0 (struct type*) ;
 int FUNC_1 (char const*,char*,unsigned long*,unsigned long*,unsigned long*,unsigned long*) ;

__attribute__((used)) static DOUBLEST
FUNC_2 (struct type *VAR_0)
{
  const char *VAR_1 = FUNC_0 (VAR_0);
  unsigned long VAR_2, VAR_3, VAR_4, VAR_5;
  int VAR_6;

  VAR_6 = FUNC_1 (VAR_1, "_%lu_%lu_%lu_%lu", &VAR_2, &VAR_3, &VAR_4, &VAR_5);

  if (VAR_6 < 2)
    return 1.0;
  else if (VAR_6 == 4)
    return (DOUBLEST) VAR_4 / (DOUBLEST) VAR_5;
  else
    return (DOUBLEST) VAR_2 / (DOUBLEST) VAR_3;
}
