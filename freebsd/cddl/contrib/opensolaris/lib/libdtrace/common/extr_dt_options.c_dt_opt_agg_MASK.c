
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {uintptr_t dtat_flags; } ;
struct TYPE_5__ {TYPE_2__ dt_aggregate; } ;
typedef TYPE_1__ dtrace_hdl_t ;
typedef TYPE_2__ dt_aggregate_t ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*,int ) ;

__attribute__((used)) static int
FUNC_1(dtrace_hdl_t *VAR_1, const char *VAR_2, uintptr_t VAR_3)
{
 dt_aggregate_t *VAR_4 = &VAR_1->dt_aggregate;

 if (VAR_2 != ((void*)0))
  return (FUNC_0(VAR_1, VAR_0));

 VAR_4->dtat_flags |= VAR_3;
 return (0);
}
