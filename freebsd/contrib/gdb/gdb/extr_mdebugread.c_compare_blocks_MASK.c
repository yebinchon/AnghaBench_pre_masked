
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct block {int dummy; } ;
typedef scalar_t__ LONGEST ;


 int FUNC_0 (struct block*) ;
 scalar_t__ FUNC_1 (struct block*) ;

__attribute__((used)) static int
FUNC_2 (const void *VAR_0, const void *VAR_1)
{
  LONGEST VAR_2;
  struct block **VAR_3 = (struct block **) VAR_0;
  struct block **VAR_4 = (struct block **) VAR_1;

  VAR_2 = (FUNC_1 ((*VAR_3))) - (FUNC_1 ((*VAR_4)));
  if (VAR_2 == 0)
    return (FUNC_0 ((*VAR_4))) - (FUNC_0 ((*VAR_3)));
  return VAR_2;
}
