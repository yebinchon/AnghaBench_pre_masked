
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






union parameter_info {int value; } ;
typedef int * tree ;
typedef enum cvalue_type { ____Placeholder_cvalue_type } cvalue_type ;


 int * FUNC_0 (int *,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int) ;

__attribute__((used)) static tree
FUNC_3 (union parameter_info *VAR_0, enum cvalue_type VAR_1,
   tree VAR_2)
{
  tree VAR_3 = ((void*)0);

  FUNC_1 (FUNC_2 (VAR_1));
  VAR_3 = FUNC_0 (VAR_2, VAR_0->value);
  return VAR_3;
}
