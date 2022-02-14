
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int dtpr_id; } ;
typedef TYPE_1__ dtrace_probe_t ;
typedef int dtrace_id_t ;


 int VAR_0 ;

__attribute__((used)) static int
FUNC_0(dtrace_probe_t *VAR_1, void *VAR_2)
{
 *((dtrace_id_t *)VAR_2) = VAR_1->dtpr_id;

 return (VAR_0);
}
