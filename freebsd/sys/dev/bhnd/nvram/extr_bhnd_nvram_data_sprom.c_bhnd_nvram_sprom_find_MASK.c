
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bhnd_nvram_sprom {int state; } ;
struct bhnd_nvram_data {int dummy; } ;
typedef void bhnd_sprom_opcode_idx_entry ;


 void* FUNC_0 (int *,char const*) ;

__attribute__((used)) static void *
FUNC_1(struct bhnd_nvram_data *VAR_0, const char *VAR_1)
{
 struct bhnd_nvram_sprom *VAR_2;
 bhnd_sprom_opcode_idx_entry *VAR_3;

 VAR_2 = (struct bhnd_nvram_sprom *)VAR_0;

 VAR_3 = FUNC_0(&VAR_2->state, VAR_1);
 return (VAR_3);
}
