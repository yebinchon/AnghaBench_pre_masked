
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ dtpd_id; } ;
typedef TYPE_1__ dtrace_probedesc_t ;
typedef int dtrace_hdl_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (TYPE_1__ const*,void*,int) ;

__attribute__((used)) static int
FUNC_1(dtrace_hdl_t *VAR_1, const dtrace_probedesc_t *VAR_2, void *VAR_3)
{
 if (((dtrace_probedesc_t *)VAR_3)->dtpd_id == VAR_0) {
  FUNC_0(VAR_2, VAR_3, sizeof (dtrace_probedesc_t));
  return (0);
 }

 return (1);
}
