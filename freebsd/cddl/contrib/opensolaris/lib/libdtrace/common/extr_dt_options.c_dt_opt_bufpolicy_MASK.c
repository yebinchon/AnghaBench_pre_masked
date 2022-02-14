
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_4__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ dtrace_optval_t ;
struct TYPE_5__ {scalar_t__* dt_options; } ;
typedef TYPE_1__ dtrace_hdl_t ;
struct TYPE_6__ {scalar_t__ dtbp_policy; int * dtbp_name; } ;


 size_t VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 TYPE_4__* VAR_3 ;
 int FUNC_0 (TYPE_1__*,int ) ;
 scalar_t__ FUNC_1 (int *,char const*) ;

__attribute__((used)) static int
FUNC_2(dtrace_hdl_t *VAR_4, const char *VAR_5, uintptr_t VAR_6)
{
 dtrace_optval_t VAR_7 = VAR_1;
 int VAR_8;

 if (VAR_5 == ((void*)0))
  return (FUNC_0(VAR_4, VAR_2));

 for (VAR_8 = 0; VAR_3[VAR_8].dtbp_name != ((void*)0); VAR_8++) {
  if (FUNC_1(VAR_3[VAR_8].dtbp_name, VAR_5) == 0) {
   VAR_7 = VAR_3[VAR_8].dtbp_policy;
   break;
  }
 }

 if (VAR_7 == VAR_1)
  return (FUNC_0(VAR_4, VAR_2));

 VAR_4->dt_options[VAR_0] = VAR_7;

 return (0);
}
