
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {void* dtsd_stmtattr; void* dtsd_descattr; int * dtsd_ecbdesc; } ;
typedef TYPE_1__ dtrace_stmtdesc_t ;
typedef int dtrace_hdl_t ;
typedef int dtrace_ecbdesc_t ;


 void* VAR_0 ;
 int FUNC_0 (int *) ;
 TYPE_1__* FUNC_1 (int *,int) ;

dtrace_stmtdesc_t *
FUNC_2(dtrace_hdl_t *VAR_1, dtrace_ecbdesc_t *VAR_2)
{
 dtrace_stmtdesc_t *VAR_3;

 if ((VAR_3 = FUNC_1(VAR_1, sizeof (dtrace_stmtdesc_t))) == ((void*)0))
  return (((void*)0));

 FUNC_0(VAR_2);
 VAR_3->dtsd_ecbdesc = VAR_2;
 VAR_3->dtsd_descattr = VAR_0;
 VAR_3->dtsd_stmtattr = VAR_0;

 return (VAR_3);
}
