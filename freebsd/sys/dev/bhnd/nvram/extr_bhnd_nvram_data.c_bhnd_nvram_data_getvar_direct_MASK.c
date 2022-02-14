
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct bhnd_nvram_io {int dummy; } ;
typedef int bhnd_nvram_type ;
struct TYPE_3__ {int (* op_getvar_direct ) (struct bhnd_nvram_io*,char const*,void*,size_t*,int ) ;} ;
typedef TYPE_1__ bhnd_nvram_data_class ;


 int FUNC_0 (struct bhnd_nvram_io*,char const*,void*,size_t*,int ) ;

int
FUNC_1(bhnd_nvram_data_class *VAR_0,
    struct bhnd_nvram_io *VAR_1, const char *VAR_2, void *VAR_3, size_t *VAR_4,
    bhnd_nvram_type VAR_5)
{
 return (VAR_0->op_getvar_direct(VAR_1, VAR_2, VAR_3, VAR_4, VAR_5));
}
