
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint_t ;
typedef int dtrace_hdl_t ;
struct TYPE_4__ {int int_hashlen; int * int_hdl; int * int_hash; } ;
typedef TYPE_1__ dt_inttab_t ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *,TYPE_1__*) ;
 void* FUNC_2 (int *,int) ;

dt_inttab_t *
FUNC_3(dtrace_hdl_t *VAR_1)
{
 uint_t VAR_2 = VAR_0;
 dt_inttab_t *VAR_3;

 FUNC_0((VAR_2 & (VAR_2 - 1)) == 0);

 if ((VAR_3 = FUNC_2(VAR_1, sizeof (dt_inttab_t))) == ((void*)0) ||
     (VAR_3->int_hash = FUNC_2(VAR_1, sizeof (void *) * VAR_2)) == ((void*)0)) {
  FUNC_1(VAR_1, VAR_3);
  return (((void*)0));
 }

 VAR_3->int_hdl = VAR_1;
 VAR_3->int_hashlen = VAR_2;

 return (VAR_3);
}
