
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct bhnd_nvram_io {TYPE_1__* iops; } ;
struct TYPE_2__ {size_t (* getsize ) (struct bhnd_nvram_io*) ;} ;


 size_t FUNC_0 (struct bhnd_nvram_io*) ;

size_t
FUNC_1(struct bhnd_nvram_io *VAR_0)
{
 return (VAR_0->iops->getsize(VAR_0));
}
