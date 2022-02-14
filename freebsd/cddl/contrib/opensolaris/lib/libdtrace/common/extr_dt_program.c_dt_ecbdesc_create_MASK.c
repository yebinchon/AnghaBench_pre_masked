
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int dtrace_probedesc_t ;
typedef int dtrace_hdl_t ;
struct TYPE_5__ {int dted_probe; } ;
typedef TYPE_1__ dtrace_ecbdesc_t ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int *,int ) ;
 TYPE_1__* FUNC_2 (int *,int) ;

dtrace_ecbdesc_t *
FUNC_3(dtrace_hdl_t *VAR_1, const dtrace_probedesc_t *VAR_2)
{
 dtrace_ecbdesc_t *VAR_3;

 if ((VAR_3 = FUNC_2(VAR_1, sizeof (dtrace_ecbdesc_t))) == ((void*)0)) {
  (void) FUNC_1(VAR_1, VAR_0);
  return (((void*)0));
 }

 VAR_3->dted_probe = *VAR_2;
 FUNC_0(VAR_3);
 return (VAR_3);
}
