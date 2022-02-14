
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int lock; } ;
typedef TYPE_1__ ocs_rlock_t ;
typedef int int32_t ;


 int FUNC_0 (int *) ;

__attribute__((used)) static inline int32_t
FUNC_1(ocs_rlock_t *VAR_0)
{
 int VAR_1 = FUNC_0(&(VAR_0)->lock);

 return VAR_1 != 0;
}
