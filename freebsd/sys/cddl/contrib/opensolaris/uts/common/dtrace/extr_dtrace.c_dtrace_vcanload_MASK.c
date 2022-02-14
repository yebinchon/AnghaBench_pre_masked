
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_12__ {TYPE_2__* dtvs_state; } ;
typedef TYPE_1__ dtrace_vstate_t ;
struct TYPE_13__ {size_t* dts_options; } ;
typedef TYPE_2__ dtrace_state_t ;
struct TYPE_14__ {int dtms_access; } ;
typedef TYPE_3__ dtrace_mstate_t ;
struct TYPE_15__ {int dtdt_flags; scalar_t__ dtdt_kind; size_t dtdt_size; } ;
typedef TYPE_4__ dtrace_diftype_t ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (size_t*,uintptr_t,void*,size_t) ;
 int FUNC_2 (uintptr_t,size_t,size_t*,TYPE_3__*,TYPE_1__*) ;
 int FUNC_3 (uintptr_t,size_t,size_t*,TYPE_3__*,TYPE_1__*) ;
 size_t VAR_4 ;

__attribute__((used)) static int
FUNC_4(void *VAR_5, dtrace_diftype_t *VAR_6, size_t *VAR_7,
    dtrace_mstate_t *VAR_8, dtrace_vstate_t *VAR_9)
{
 size_t VAR_10;
 FUNC_0(VAR_6->dtdt_flags & VAR_0);






 if (VAR_6->dtdt_kind == VAR_1) {
  dtrace_state_t *VAR_11 = VAR_9->dtvs_state;

  if (VAR_11 != ((void*)0)) {
   VAR_10 = VAR_11->dts_options[VAR_2];
  } else {





   VAR_10 = VAR_4;
  }
 } else {
  VAR_10 = VAR_6->dtdt_size;
 }





 if ((VAR_8->dtms_access & VAR_3) != 0) {
  FUNC_1(VAR_7, (uintptr_t)VAR_5, VAR_5, VAR_10);
  return (1);
 }

 if (VAR_6->dtdt_kind == VAR_1) {
  return (FUNC_3((uintptr_t)VAR_5, VAR_10, VAR_7, VAR_8,
      VAR_9));
 }
 return (FUNC_2((uintptr_t)VAR_5, VAR_10, VAR_7, VAR_8,
     VAR_9));
}
