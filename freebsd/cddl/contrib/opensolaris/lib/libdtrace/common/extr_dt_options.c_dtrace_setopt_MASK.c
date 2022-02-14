
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_11__ {scalar_t__ dt_active; } ;
typedef TYPE_1__ dtrace_hdl_t ;
struct TYPE_12__ {int (* o_func ) (TYPE_1__*,char const*,int ) ;int o_option; int * o_name; } ;
typedef TYPE_2__ dt_option_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_2__* VAR_3 ;
 TYPE_2__* VAR_4 ;
 TYPE_2__* VAR_5 ;
 int FUNC_0 (TYPE_1__*,int ) ;
 scalar_t__ FUNC_1 (int *,char const*) ;
 int FUNC_2 (TYPE_1__*,char const*,int ) ;
 int FUNC_3 (TYPE_1__*,char const*,int ) ;
 int FUNC_4 (TYPE_1__*,char const*,int ) ;

int
FUNC_5(dtrace_hdl_t *VAR_6, const char *VAR_7, const char *VAR_8)
{
 const dt_option_t *VAR_9;

 if (VAR_7 == ((void*)0))
  return (FUNC_0(VAR_6, VAR_2));

 for (VAR_9 = VAR_3; VAR_9->o_name != ((void*)0); VAR_9++) {
  if (FUNC_1(VAR_9->o_name, VAR_7) == 0)
   return (VAR_9->o_func(VAR_6, VAR_8, VAR_9->o_option));
 }

 for (VAR_9 = VAR_4; VAR_9->o_name != ((void*)0); VAR_9++) {
  if (FUNC_1(VAR_9->o_name, VAR_7) == 0)
   return (VAR_9->o_func(VAR_6, VAR_8, VAR_9->o_option));
 }

 for (VAR_9 = VAR_5; VAR_9->o_name != ((void*)0); VAR_9++) {
  if (FUNC_1(VAR_9->o_name, VAR_7) == 0) {




   if (VAR_6->dt_active)
    return (FUNC_0(VAR_6, VAR_0));

   return (VAR_9->o_func(VAR_6, VAR_8, VAR_9->o_option));
  }
 }

 return (FUNC_0(VAR_6, VAR_1));
}
