
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct bhnd_nvram_io {int dummy; } ;
struct TYPE_3__ {int (* op_probe ) (struct bhnd_nvram_io*) ;} ;
typedef TYPE_1__ bhnd_nvram_data_class ;


 int FUNC_0 (struct bhnd_nvram_io*) ;

int
FUNC_1(bhnd_nvram_data_class *VAR_0, struct bhnd_nvram_io *VAR_1)
{
 return (VAR_0->op_probe(VAR_1));
}
