
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct bhnd_nvram_data {TYPE_1__* cls; } ;
typedef int bhnd_nvram_val ;
struct TYPE_2__ {int (* op_filter_setvar ) (struct bhnd_nvram_data*,char const*,int *,int **) ;} ;


 int FUNC_0 (struct bhnd_nvram_data*,char const*,int *,int **) ;

int
FUNC_1(struct bhnd_nvram_data *VAR_0, const char *VAR_1,
    bhnd_nvram_val *VAR_2, bhnd_nvram_val **VAR_3)
{
 return (VAR_0->cls->op_filter_setvar(VAR_0, VAR_1, VAR_2, VAR_3));
}
