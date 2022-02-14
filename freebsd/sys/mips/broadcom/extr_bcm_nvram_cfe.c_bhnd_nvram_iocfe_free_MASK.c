
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bhnd_nvram_io {int dummy; } ;
struct bcm_nvram_iocfe {int fd; } ;


 int FUNC_0 (int ) ;

__attribute__((used)) static void
FUNC_1(struct bhnd_nvram_io *VAR_0)
{
 struct bcm_nvram_iocfe *VAR_1 = (struct bcm_nvram_iocfe *)VAR_0;



 FUNC_0(VAR_1->fd);
}
