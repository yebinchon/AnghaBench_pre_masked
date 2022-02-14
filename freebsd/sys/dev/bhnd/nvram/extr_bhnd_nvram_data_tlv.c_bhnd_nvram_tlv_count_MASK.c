
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bhnd_nvram_tlv {size_t count; } ;
struct bhnd_nvram_data {int dummy; } ;



size_t
FUNC_0(struct bhnd_nvram_data *VAR_0)
{
 struct bhnd_nvram_tlv *VAR_1 = (struct bhnd_nvram_tlv *)VAR_0;
 return (VAR_1->count);
}
