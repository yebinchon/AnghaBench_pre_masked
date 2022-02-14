
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint_t ;
typedef int dtrace_recdesc_t ;
typedef int dtrace_probedata_t ;
struct TYPE_5__ {int dt_sprintf_buf; } ;
typedef TYPE_1__ dtrace_hdl_t ;
typedef int FILE ;


 int FUNC_0 (TYPE_1__*,int ) ;
 int FUNC_1 (TYPE_1__*,int *,void*,int const*,int ,void const*,size_t) ;
 int VAR_0 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ) ;

int
FUNC_4(dtrace_hdl_t *VAR_1, FILE *VAR_2, void *VAR_3,
    const dtrace_probedata_t *VAR_4, const dtrace_recdesc_t *VAR_5,
    uint_t VAR_6, const void *VAR_7, size_t VAR_8)
{
 int VAR_9 = FUNC_1(VAR_1, VAR_2, VAR_3, VAR_5, VAR_6, VAR_7, VAR_8);

 if (VAR_9 == -1)
  return (VAR_9);






 (void) FUNC_2(VAR_2);

 if (FUNC_3(VAR_1->dt_sprintf_buf) == -1)
  return (FUNC_0(VAR_1, VAR_0));

 return (VAR_9);
}
