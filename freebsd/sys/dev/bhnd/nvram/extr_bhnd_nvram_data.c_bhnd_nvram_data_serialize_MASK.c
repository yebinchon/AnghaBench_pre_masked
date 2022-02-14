
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int bhnd_nvram_plist ;
struct TYPE_4__ {int (* op_serialize ) (TYPE_1__*,int *,int *,void*,size_t*) ;} ;
typedef TYPE_1__ bhnd_nvram_data_class ;


 int FUNC_0 (TYPE_1__*,int *,int *,void*,size_t*) ;

int
FUNC_1(bhnd_nvram_data_class *VAR_0,
    bhnd_nvram_plist *VAR_1, bhnd_nvram_plist *VAR_2, void *VAR_3,
    size_t *VAR_4)
{
 return (VAR_0->op_serialize(VAR_0, VAR_1, VAR_2, VAR_3, VAR_4));
}
