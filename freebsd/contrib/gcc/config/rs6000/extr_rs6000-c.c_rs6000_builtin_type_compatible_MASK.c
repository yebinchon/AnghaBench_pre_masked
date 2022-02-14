
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int tree ;
struct TYPE_2__ {int (* types_compatible_p ) (int ,int ) ;} ;


 scalar_t__ FUNC_0 (int ) ;
 TYPE_1__ VAR_0 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ,int ) ;

__attribute__((used)) static inline bool
FUNC_3 (tree VAR_1, int VAR_2)
{
  tree VAR_3;
  VAR_3 = FUNC_1 (VAR_2);
  if (FUNC_0 (VAR_1) && FUNC_0 (VAR_3))
    return 1;
  else
    return VAR_0.types_compatible_p (VAR_1, VAR_3);
}
