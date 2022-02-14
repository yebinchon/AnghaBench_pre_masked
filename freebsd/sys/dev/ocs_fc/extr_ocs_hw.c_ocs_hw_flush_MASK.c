
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct TYPE_4__ {scalar_t__ eq_count; } ;
typedef TYPE_1__ ocs_hw_t ;
typedef int int32_t ;


 int FUNC_0 (TYPE_1__*,scalar_t__,int ) ;

__attribute__((used)) static int32_t
FUNC_1(ocs_hw_t *VAR_0)
{
 uint32_t VAR_1 = 0;


 for (VAR_1 = 0; VAR_1 < VAR_0->eq_count; VAR_1++) {
  FUNC_0(VAR_0, VAR_1, ~0);
 }

 return 0;
}
