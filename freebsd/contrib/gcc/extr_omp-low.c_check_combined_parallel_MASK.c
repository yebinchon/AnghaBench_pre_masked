
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int * tree ;
struct walk_stmt_info {int* info; } ;




 int FUNC_0 (int *) ;

__attribute__((used)) static tree
FUNC_1 (tree *VAR_0, int *VAR_1, void *VAR_2)
{
  struct walk_stmt_info *VAR_3 = VAR_2;
  int *VAR_4 = VAR_3->info;

  *VAR_1 = 0;
  switch (FUNC_0 (*VAR_0))
    {
    case 129:
    case 128:
      *VAR_4 = *VAR_4 == 0 ? 1 : -1;
      break;
    default:
      *VAR_4 = -1;
      break;
    }
  return ((void*)0);
}
