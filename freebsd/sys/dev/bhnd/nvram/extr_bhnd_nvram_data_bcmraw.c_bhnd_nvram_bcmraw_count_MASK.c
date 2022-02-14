
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bhnd_nvram_data {int dummy; } ;
struct bhnd_nvram_bcmraw {size_t count; } ;



__attribute__((used)) static size_t
FUNC_0(struct bhnd_nvram_data *VAR_0)
{
 struct bhnd_nvram_bcmraw *VAR_1 = (struct bhnd_nvram_bcmraw *)VAR_0;

 return (VAR_1->count);
}
