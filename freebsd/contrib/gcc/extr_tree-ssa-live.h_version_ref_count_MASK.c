
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef TYPE_1__* var_map ;
typedef int tree ;
struct TYPE_3__ {int* ref_count; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int*) ;

__attribute__((used)) static inline int
FUNC_2 (var_map VAR_0, tree VAR_1)
{
  int VAR_2 = FUNC_0 (VAR_1);
  FUNC_1 (VAR_0->ref_count);
  return VAR_0->ref_count[VAR_2];
}
