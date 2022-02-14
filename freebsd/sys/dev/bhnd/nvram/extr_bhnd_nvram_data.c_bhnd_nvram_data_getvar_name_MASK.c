
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct bhnd_nvram_data {TYPE_1__* cls; } ;
struct TYPE_2__ {char const* (* op_getvar_name ) (struct bhnd_nvram_data*,void*) ;} ;


 char const* FUNC_0 (struct bhnd_nvram_data*,void*) ;

const char *
FUNC_1(struct bhnd_nvram_data *VAR_0, void *VAR_1)
{
 return (VAR_0->cls->op_getvar_name(VAR_0, VAR_1));
}
