
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_7__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int blocks_modified; scalar_t__ space_check; int (* func ) (int *,int ,int *) ;int kwargs; int pargs; int name; } ;
typedef TYPE_1__ zcp_synctask_info_t ;
struct TYPE_9__ {scalar_t__ zri_space_used; TYPE_3__* zri_pool; } ;
typedef TYPE_2__ zcp_run_info_t ;
typedef int zcp_cleanup_t ;
typedef int zcp_cleanup_handler_t ;
typedef scalar_t__ uint64_t ;
typedef int nvlist_t ;
typedef int lua_State ;
typedef int lua_Number ;
struct TYPE_10__ {int dp_root_dir; } ;
typedef TYPE_3__ dsl_pool_t ;
typedef int boolean_t ;
struct TYPE_11__ {scalar_t__ dd_used_bytes; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 scalar_t__ VAR_2 ;
 TYPE_7__* FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (TYPE_3__*,scalar_t__) ;
 int * FUNC_3 () ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int *) ;
 int FUNC_6 (int *,int ) ;
 int FUNC_7 (int *,int ) ;
 TYPE_1__* FUNC_8 (int *,int ) ;
 int FUNC_9 (int) ;
 int FUNC_10 (int *,int ,int *) ;
 int FUNC_11 (int *,int *) ;
 int FUNC_12 (int *,int *,int *,int ) ;
 int FUNC_13 (int *,int ,int ,int ) ;
 int * FUNC_14 (int *,int *,int *) ;
 TYPE_2__* FUNC_15 (int *) ;

__attribute__((used)) static int
FUNC_16(lua_State *VAR_3)
{
 int VAR_4;
 zcp_cleanup_handler_t *VAR_5;
 int VAR_6 = 1;
 nvlist_t *VAR_7 = FUNC_3();





 VAR_5 = FUNC_14(VAR_3,
     (zcp_cleanup_t *)&FUNC_4, VAR_7);

 zcp_synctask_info_t *VAR_8 = FUNC_8(VAR_3, FUNC_9(1));
 boolean_t VAR_9 = FUNC_7(VAR_3, FUNC_9(2));

 zcp_run_info_t *VAR_10 = FUNC_15(VAR_3);
 dsl_pool_t *VAR_11 = VAR_10->zri_pool;


 uint64_t VAR_12 = (VAR_8->blocks_modified << VAR_0) * 3;

 FUNC_13(VAR_3, VAR_8->name, VAR_8->pargs, VAR_8->kwargs);

 VAR_4 = 0;
 if (VAR_8->space_check != VAR_2) {
  uint64_t VAR_13 = FUNC_2(VAR_11,
      VAR_8->space_check);
  uint64_t VAR_14 = FUNC_1(VAR_11->dp_root_dir)->dd_used_bytes +
      VAR_10->zri_space_used;

  if (VAR_14 + VAR_12 > VAR_13) {
   VAR_4 = FUNC_0(VAR_1);
  }
 }

 if (VAR_4 == 0) {
  VAR_4 = VAR_8->func(VAR_3, VAR_9, VAR_7);
 }

 if (VAR_4 == 0) {
  VAR_10->zri_space_used += VAR_12;
 }

 FUNC_6(VAR_3, (lua_Number)VAR_4);
 if (FUNC_5(VAR_7) > 0) {
  (void) FUNC_12(VAR_3, VAR_7, ((void*)0), 0);
  VAR_6++;
 }

 FUNC_11(VAR_3, VAR_5);
 FUNC_4(VAR_7);

 return (VAR_6);
}
