
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bhnd_sprom_opcode_idx_entry {int dummy; } ;
struct bhnd_nvram_data {int dummy; } ;



__attribute__((used)) static int
FUNC_0(struct bhnd_nvram_data *VAR_0, void *VAR_1,
    void *VAR_2)
{
 struct bhnd_sprom_opcode_idx_entry *VAR_3, *VAR_4;

 VAR_3 = VAR_1;
 VAR_4 = VAR_2;



 if (VAR_3 < VAR_4)
  return (-1);
 else if (VAR_3 > VAR_4)
  return (1);

 return (0);
}
