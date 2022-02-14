
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct TYPE_3__ {int count; } ;
typedef TYPE_1__ ocs_ref_t ;


 int FUNC_0 (int *,int) ;
 scalar_t__ FUNC_1 (int *) ;

__attribute__((used)) static inline uint32_t
FUNC_2(ocs_ref_t *VAR_0)
{
 uint32_t VAR_1 = 0;
 VAR_1 = FUNC_1(&VAR_0->count);
  if (VAR_1 != 0) {
   FUNC_0(&VAR_0->count, 1);
  }
 return VAR_1;
}
