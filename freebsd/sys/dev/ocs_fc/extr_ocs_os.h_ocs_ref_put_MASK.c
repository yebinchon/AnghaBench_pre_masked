
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_3__ {int arg; int (* release ) (int ) ;int count; } ;
typedef TYPE_1__ ocs_ref_t ;


 int FUNC_0 (int *,int) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static inline uint32_t
FUNC_2(ocs_ref_t *VAR_0)
{
 uint32_t VAR_1 = 0;
 if (FUNC_0(&VAR_0->count, 1) == 1) {
  VAR_0->release(VAR_0->arg);
  VAR_1 = 1;
 }
 return VAR_1;
}
