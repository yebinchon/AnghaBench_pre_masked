
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct bhnd_nvram_data {TYPE_1__* cls; } ;
struct TYPE_2__ {void* (* op_find ) (struct bhnd_nvram_data*,char const*) ;} ;


 void* FUNC_0 (struct bhnd_nvram_data*,char const*) ;

void *
FUNC_1(struct bhnd_nvram_data *VAR_0, const char *VAR_1)
{
 return (VAR_0->cls->op_find(VAR_0, VAR_1));
}
