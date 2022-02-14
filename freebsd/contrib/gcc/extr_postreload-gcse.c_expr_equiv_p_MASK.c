
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct expr {scalar_t__ hash; int expr; } ;


 int FUNC_0 (int ,int ,int ,int) ;
 int FUNC_1 (int) ;

__attribute__((used)) static int
FUNC_2 (const void *VAR_0, const void *VAR_1)
{
  struct expr *VAR_2 = (struct expr *) VAR_0;
  struct expr *VAR_3 = (struct expr *) VAR_1;
  int VAR_4 = FUNC_0 (VAR_2->expr, VAR_3->expr, 0, 1);

  FUNC_1 (!VAR_4 || VAR_2->hash == VAR_3->hash);
  return VAR_4;
}
