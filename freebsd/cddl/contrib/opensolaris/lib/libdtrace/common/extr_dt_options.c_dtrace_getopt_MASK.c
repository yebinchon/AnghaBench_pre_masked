
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int dtrace_optval_t ;
struct TYPE_7__ {int * dt_options; } ;
typedef TYPE_1__ dtrace_hdl_t ;
struct TYPE_8__ {size_t o_option; int * o_name; } ;
typedef TYPE_2__ dt_option_t ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_2__* VAR_2 ;
 TYPE_2__* VAR_3 ;
 int FUNC_0 (TYPE_1__*,int ) ;
 scalar_t__ FUNC_1 (int *,char const*) ;

int
FUNC_2(dtrace_hdl_t *VAR_4, const char *VAR_5, dtrace_optval_t *VAR_6)
{
 const dt_option_t *VAR_7;

 if (VAR_5 == ((void*)0))
  return (FUNC_0(VAR_4, VAR_1));





 for (VAR_7 = VAR_3; VAR_7->o_name != ((void*)0); VAR_7++) {
  if (FUNC_1(VAR_7->o_name, VAR_5) == 0) {
   *VAR_6 = VAR_4->dt_options[VAR_7->o_option];
   return (0);
  }
 }

 for (VAR_7 = VAR_2; VAR_7->o_name != ((void*)0); VAR_7++) {
  if (FUNC_1(VAR_7->o_name, VAR_5) == 0) {
   *VAR_6 = VAR_4->dt_options[VAR_7->o_option];
   return (0);
  }
 }

 return (FUNC_0(VAR_4, VAR_0));
}
