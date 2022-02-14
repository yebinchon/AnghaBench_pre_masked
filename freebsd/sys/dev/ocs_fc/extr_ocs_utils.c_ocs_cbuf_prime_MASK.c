
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct TYPE_4__ {int entry_count; } ;
typedef TYPE_1__ ocs_cbuf_t ;
typedef int ocs_array_t ;
typedef int int32_t ;


 scalar_t__ FUNC_0 (int ,int ) ;
 int FUNC_1 (int *,scalar_t__) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (TYPE_1__*,int ) ;

int32_t
FUNC_4(ocs_cbuf_t *VAR_0, ocs_array_t *VAR_1)
{
 uint32_t VAR_2;
 uint32_t VAR_3 = FUNC_0(FUNC_2(VAR_1), VAR_0->entry_count);

 for (VAR_2 = 0; VAR_2 < VAR_3; VAR_2++) {
  FUNC_3(VAR_0, FUNC_1(VAR_1, VAR_2));
 }
 return 0;
}
