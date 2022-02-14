
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ dtpd_id; } ;
typedef TYPE_1__ dtrace_probedesc_t ;
typedef scalar_t__ dtrace_id_t ;
typedef int dtrace_hdl_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*,int) ;
 int FUNC_1 (int *,int ,TYPE_1__*) ;
 int FUNC_2 (int *,int ) ;

int
FUNC_3(dtrace_hdl_t *VAR_2, dtrace_id_t VAR_3, dtrace_probedesc_t *VAR_4)
{
 FUNC_0(VAR_4, sizeof (dtrace_probedesc_t));
 VAR_4->dtpd_id = VAR_3;

 if (FUNC_1(VAR_2, VAR_0, VAR_4) == -1 ||
     VAR_4->dtpd_id != VAR_3)
  return (FUNC_2(VAR_2, VAR_1));

 return (0);
}
