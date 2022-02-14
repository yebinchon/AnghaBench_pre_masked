
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bhnd_nvram_io {int dummy; } ;
struct bcm_nvram_iocfe {size_t size; } ;



__attribute__((used)) static size_t
FUNC_0(struct bhnd_nvram_io *VAR_0)
{
 struct bcm_nvram_iocfe *VAR_1 = (struct bcm_nvram_iocfe *)VAR_0;
 return (VAR_1->size);
}
