
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tree ;
struct count_ptr_d {scalar_t__ ptr; int count; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ,int ) ;

__attribute__((used)) static tree
FUNC_3 (tree *VAR_2, int *VAR_3, void *VAR_4)
{
  struct count_ptr_d *VAR_5 = (struct count_ptr_d *) VAR_4;




  if (FUNC_1 (*VAR_2) == VAR_0)
    {
      *VAR_3 = 0;
      return VAR_1;
    }

  if (FUNC_0 (*VAR_2) && FUNC_2 (*VAR_2, 0) == VAR_5->ptr)
    VAR_5->count++;

  return VAR_1;
}
