
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ dtrace_optval_t ;
struct TYPE_3__ {scalar_t__* dt_options; } ;
typedef TYPE_1__ dtrace_hdl_t ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (void const*,void const*) ;
 int FUNC_1 (void const*,void const*) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_2 (void*,size_t,size_t,int (*) (void const*,void const*)) ;

void
FUNC_3(dtrace_hdl_t *VAR_8, void *VAR_9, size_t VAR_10, size_t VAR_11,
    int (*VAR_12)(const void *, const void *))
{
 int VAR_13 = VAR_7, VAR_14 = VAR_6, VAR_15 = VAR_5;
 dtrace_optval_t VAR_16 = VAR_8->dt_options[VAR_1];

 VAR_7 = (VAR_8->dt_options[VAR_2] != VAR_3);
 VAR_6 = (VAR_8->dt_options[VAR_0] != VAR_3);

 if (VAR_16 != VAR_3 && VAR_16 <= VAR_4) {
  VAR_5 = (int)VAR_16;
 } else {
  VAR_5 = 0;
 }

 if (VAR_12 == ((void*)0)) {
  if (!VAR_6) {
   VAR_12 = FUNC_1;
  } else {
   VAR_12 = FUNC_0;
  }
 }

 FUNC_2(VAR_9, VAR_10, VAR_11, VAR_12);

 VAR_7 = VAR_13;
 VAR_6 = VAR_14;
 VAR_5 = VAR_15;
}
