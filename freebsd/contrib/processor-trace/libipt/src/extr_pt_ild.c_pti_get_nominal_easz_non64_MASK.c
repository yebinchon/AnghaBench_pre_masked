
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ asz; } ;
struct TYPE_4__ {TYPE_1__ s; } ;
struct pt_ild {TYPE_2__ u; } ;
typedef enum pt_exec_mode { ____Placeholder_pt_exec_mode } pt_exec_mode ;


 scalar_t__ FUNC_0 (struct pt_ild const*) ;
 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static inline enum pt_exec_mode
FUNC_1(const struct pt_ild *VAR_2)
{
 if (FUNC_0(VAR_2)) {
  if (VAR_2->u.s.asz)
   return VAR_0;
  return VAR_1;
 }
 if (VAR_2->u.s.asz)
  return VAR_1;
 return VAR_0;
}
