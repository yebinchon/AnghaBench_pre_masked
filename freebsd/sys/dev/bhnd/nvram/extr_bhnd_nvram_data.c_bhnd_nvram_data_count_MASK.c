
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct bhnd_nvram_data {TYPE_1__* cls; } ;
struct TYPE_2__ {size_t (* op_count ) (struct bhnd_nvram_data*) ;} ;


 size_t FUNC_0 (struct bhnd_nvram_data*) ;

size_t
FUNC_1(struct bhnd_nvram_data *VAR_0)
{
 return (VAR_0->cls->op_count(VAR_0));
}
