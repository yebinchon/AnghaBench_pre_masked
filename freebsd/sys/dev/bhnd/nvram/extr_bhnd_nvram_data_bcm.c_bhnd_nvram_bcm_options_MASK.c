
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bhnd_nvram_data {int dummy; } ;
struct bhnd_nvram_bcm {int * opts; } ;
typedef int bhnd_nvram_plist ;



__attribute__((used)) static bhnd_nvram_plist *
FUNC_0(struct bhnd_nvram_data *VAR_0)
{
 struct bhnd_nvram_bcm *VAR_1 = (struct bhnd_nvram_bcm *)VAR_0;
 return (VAR_1->opts);
}
