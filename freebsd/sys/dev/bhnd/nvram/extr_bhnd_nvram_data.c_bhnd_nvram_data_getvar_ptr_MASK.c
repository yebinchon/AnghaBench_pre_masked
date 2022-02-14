
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct bhnd_nvram_data {TYPE_1__* cls; } ;
typedef int bhnd_nvram_type ;
struct TYPE_2__ {void const* (* op_getvar_ptr ) (struct bhnd_nvram_data*,void*,size_t*,int *) ;} ;


 void const* FUNC_0 (struct bhnd_nvram_data*,void*,size_t*,int *) ;

const void *
FUNC_1(struct bhnd_nvram_data *VAR_0, void *VAR_1,
    size_t *VAR_2, bhnd_nvram_type *VAR_3)
{
 return (VAR_0->cls->op_getvar_ptr(VAR_0, VAR_1, VAR_2, VAR_3));
}
