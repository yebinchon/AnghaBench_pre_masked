
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int get_link_status; } ;
struct TYPE_4__ {TYPE_1__ mac; } ;
struct adapter {TYPE_2__ hw; } ;
typedef void* if_ctx_t ;


 int FUNC_0 (void*) ;
 struct adapter* FUNC_1 (void*) ;

__attribute__((used)) static void
FUNC_2(void *VAR_0)
{
 if_ctx_t VAR_1 = VAR_0;
 struct adapter *VAR_2 = FUNC_1(VAR_1);

 VAR_2->hw.mac.get_link_status = 1;
 FUNC_0(VAR_1);
}
