
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct bhnd_nvram_io {TYPE_1__* iops; } ;
struct TYPE_2__ {int (* setsize ) (struct bhnd_nvram_io*,size_t) ;} ;


 int FUNC_0 (struct bhnd_nvram_io*,size_t) ;

int
FUNC_1(struct bhnd_nvram_io *VAR_0, size_t VAR_1)
{
 return (VAR_0->iops->setsize(VAR_0, VAR_1));
}
