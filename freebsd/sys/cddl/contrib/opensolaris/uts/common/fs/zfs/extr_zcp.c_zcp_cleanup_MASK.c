
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int zri_cleanup_handlers; } ;
typedef TYPE_1__ zcp_run_info_t ;
struct TYPE_7__ {int zch_cleanup_arg; int (* zch_cleanup_func ) (int ) ;} ;
typedef TYPE_2__ zcp_cleanup_handler_t ;
typedef int lua_State ;


 int FUNC_0 (TYPE_2__*,int) ;
 TYPE_2__* FUNC_1 (int *) ;
 int FUNC_2 (int ) ;
 TYPE_1__* FUNC_3 (int *) ;

void
FUNC_4(lua_State *VAR_0)
{
 zcp_run_info_t *VAR_1 = FUNC_3(VAR_0);

 for (zcp_cleanup_handler_t *VAR_2 =
     FUNC_1(&VAR_1->zri_cleanup_handlers); VAR_2 != ((void*)0);
     VAR_2 = FUNC_1(&VAR_1->zri_cleanup_handlers)) {
  VAR_2->zch_cleanup_func(VAR_2->zch_cleanup_arg);
  FUNC_0(VAR_2, sizeof (*VAR_2));
 }
}
