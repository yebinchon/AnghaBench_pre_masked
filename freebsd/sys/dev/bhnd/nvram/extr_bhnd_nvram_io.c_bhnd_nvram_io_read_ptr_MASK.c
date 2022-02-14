
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct bhnd_nvram_io {TYPE_1__* iops; } ;
struct TYPE_2__ {int (* read_ptr ) (struct bhnd_nvram_io*,size_t,void const**,size_t,size_t*) ;} ;


 int FUNC_0 (struct bhnd_nvram_io*,size_t,void const**,size_t,size_t*) ;

int
FUNC_1(struct bhnd_nvram_io *VAR_0, size_t VAR_1,
    const void **VAR_2, size_t VAR_3, size_t *VAR_4)
{
 return (VAR_0->iops->read_ptr(VAR_0, VAR_1, VAR_2, VAR_3, VAR_4));
}
