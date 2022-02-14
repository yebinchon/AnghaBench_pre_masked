
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {size_t vid; } ;
typedef TYPE_1__ bhnd_sprom_opcode_idx_entry ;



__attribute__((used)) static int
FUNC_0(const void *VAR_0, const void *VAR_1)
{
 const bhnd_sprom_opcode_idx_entry *VAR_2;
 size_t VAR_3;

 VAR_3 = *(const size_t *)VAR_0;
 VAR_2 = VAR_1;

 if (VAR_3 < VAR_2->vid)
  return (-1);
 if (VAR_3 > VAR_2->vid)
  return (1);

 return (0);
}
