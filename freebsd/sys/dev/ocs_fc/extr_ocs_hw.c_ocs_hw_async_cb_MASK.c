
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_6__ {int os; } ;
typedef TYPE_1__ ocs_hw_t ;
struct TYPE_7__ {int arg; int (* callback ) (TYPE_1__*,int ,int *,int ) ;} ;
typedef TYPE_2__ ocs_hw_async_call_ctx_t ;
typedef int int32_t ;


 int FUNC_0 (int ,TYPE_2__*,int) ;
 int FUNC_1 (TYPE_1__*,int ,int *,int ) ;

__attribute__((used)) static void
FUNC_2(ocs_hw_t *VAR_0, int32_t VAR_1, uint8_t *VAR_2, void *VAR_3)
{
 ocs_hw_async_call_ctx_t *VAR_4 = VAR_3;

 if (VAR_4 != ((void*)0)) {
  if (VAR_4->callback != ((void*)0)) {
   (*VAR_4->callback)(VAR_0, VAR_1, VAR_2, VAR_4->arg);
  }
  FUNC_0(VAR_0->os, VAR_4, sizeof(*VAR_4));
 }
}
