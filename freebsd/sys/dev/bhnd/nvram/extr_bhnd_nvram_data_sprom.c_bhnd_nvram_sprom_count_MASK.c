
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct bhnd_nvram_sprom {TYPE_1__* layout; } ;
struct bhnd_nvram_data {int dummy; } ;
struct TYPE_2__ {size_t num_vars; } ;



size_t
FUNC_0(struct bhnd_nvram_data *VAR_0)
{
 struct bhnd_nvram_sprom *VAR_1 = (struct bhnd_nvram_sprom *)VAR_0;
 return (VAR_1->layout->num_vars);
}
