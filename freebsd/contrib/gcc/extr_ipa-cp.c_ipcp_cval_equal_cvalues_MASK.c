
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






union parameter_info {int value; } ;
typedef enum cvalue_type { ____Placeholder_cvalue_type } cvalue_type ;


 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int ,int ,int ) ;

__attribute__((used)) static inline bool
FUNC_3 (union parameter_info *VAR_0,
    union parameter_info *VAR_1,
    enum cvalue_type VAR_2, enum cvalue_type VAR_3)
{
  FUNC_0 (FUNC_1 (VAR_2) && FUNC_1 (VAR_3));
  if (VAR_2 != VAR_3)
    return 0;

  if (FUNC_2 (VAR_0->value, VAR_1->value, 0))
    return 1;

  return 0;
}
