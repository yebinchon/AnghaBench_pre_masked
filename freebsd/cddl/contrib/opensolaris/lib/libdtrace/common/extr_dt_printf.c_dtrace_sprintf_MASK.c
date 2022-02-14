
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint_t ;
typedef int dtrace_recdesc_t ;
typedef int dtrace_optval_t ;
struct TYPE_6__ {int * dt_sprintf_buf; int dt_sprintf_buflen; } ;
typedef TYPE_1__ dtrace_hdl_t ;
typedef int FILE ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (TYPE_1__*,int *,void*,int const*,int ,void const*,size_t,int *,int ) ;
 int FUNC_3 (TYPE_1__*,int ) ;
 int FUNC_4 (TYPE_1__*,char*,int *) ;
 int FUNC_5 (int *) ;
 int * FUNC_6 (int ) ;

int
FUNC_7(dtrace_hdl_t *VAR_1, FILE *VAR_2, void *VAR_3,
    const dtrace_recdesc_t *VAR_4, uint_t VAR_5, const void *VAR_6, size_t VAR_7)
{
 dtrace_optval_t VAR_8;
 int VAR_9;

 VAR_9 = FUNC_4(VAR_1, "strsize", &VAR_8);
 FUNC_0(VAR_9 == 0);
 FUNC_0(VAR_1->dt_sprintf_buflen == 0);

 if (VAR_1->dt_sprintf_buf != ((void*)0))
  FUNC_5(VAR_1->dt_sprintf_buf);

 if ((VAR_1->dt_sprintf_buf = FUNC_6(VAR_8)) == ((void*)0))
  return (FUNC_3(VAR_1, VAR_0));

 FUNC_1(VAR_1->dt_sprintf_buf, VAR_8);
 VAR_1->dt_sprintf_buflen = VAR_8;
 VAR_9 = FUNC_2(VAR_1, VAR_2, VAR_3, VAR_4, VAR_5, VAR_6, VAR_7,
     ((void*)0), 0);
 VAR_1->dt_sprintf_buflen = 0;

 if (VAR_9 == -1)
  FUNC_5(VAR_1->dt_sprintf_buf);

 return (VAR_9);
}
