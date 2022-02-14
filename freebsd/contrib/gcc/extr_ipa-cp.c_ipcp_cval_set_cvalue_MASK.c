
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


union parameter_info {int value; } ;
struct TYPE_2__ {int value; } ;
struct ipcp_formal {TYPE_1__ cvalue; } ;
typedef enum cvalue_type { ____Placeholder_cvalue_type } cvalue_type ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static inline void
FUNC_0 (struct ipcp_formal *VAR_2, union parameter_info *VAR_3,
        enum cvalue_type VAR_4)
{
  if (VAR_4 == VAR_0 || VAR_4 == VAR_1)
    VAR_2->cvalue.value = VAR_3->value;
}
