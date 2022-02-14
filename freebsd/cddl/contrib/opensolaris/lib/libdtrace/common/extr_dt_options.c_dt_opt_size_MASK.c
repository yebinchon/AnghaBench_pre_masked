
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int dtrace_optval_t ;
struct TYPE_4__ {int * dt_options; } ;
typedef TYPE_1__ dtrace_hdl_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (char const*,int *) ;
 int FUNC_1 (TYPE_1__*,int ) ;

__attribute__((used)) static int
FUNC_2(dtrace_hdl_t *VAR_1, const char *VAR_2, uintptr_t VAR_3)
{
 dtrace_optval_t VAR_4 = 0;

 if (VAR_2 != ((void*)0) && FUNC_0(VAR_2, &VAR_4) != 0)
  return (FUNC_1(VAR_1, VAR_0));

 VAR_1->dt_options[VAR_3] = VAR_4;
 return (0);
}
