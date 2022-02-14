
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct expr {struct expr* next_same_hash; int expr; } ;


 unsigned int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static struct expr *
FUNC_2 (unsigned int VAR_0, struct expr *VAR_1)
{
  do
    VAR_1 = VAR_1->next_same_hash;
  while (VAR_1 && FUNC_0 (FUNC_1 (VAR_1->expr)) != VAR_0);

  return VAR_1;
}
