
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int zri_cleanup_handlers; } ;
typedef TYPE_1__ zcp_run_info_t ;
typedef int zcp_cleanup_t ;
struct TYPE_8__ {void* zch_cleanup_arg; int zch_cleanup_func; } ;
typedef TYPE_2__ zcp_cleanup_handler_t ;
typedef int lua_State ;


 int VAR_0 ;
 TYPE_2__* FUNC_0 (int,int ) ;
 int FUNC_1 (int *,TYPE_2__*) ;
 TYPE_1__* FUNC_2 (int *) ;

zcp_cleanup_handler_t *
FUNC_3(lua_State *VAR_1, zcp_cleanup_t VAR_2, void *VAR_3)
{
 zcp_run_info_t *VAR_4 = FUNC_2(VAR_1);

 zcp_cleanup_handler_t *VAR_5 = FUNC_0(sizeof (*VAR_5), VAR_0);
 VAR_5->zch_cleanup_func = VAR_2;
 VAR_5->zch_cleanup_arg = VAR_3;
 FUNC_1(&VAR_4->zri_cleanup_handlers, VAR_5);

 return (VAR_5);
}
