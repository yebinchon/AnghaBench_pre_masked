
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {size_t num_idx; int * idx; } ;
typedef TYPE_1__ bhnd_sprom_opcode_state ;
typedef int bhnd_sprom_opcode_idx_entry ;


 int FUNC_0 (int,char*) ;

bhnd_sprom_opcode_idx_entry *
FUNC_1(bhnd_sprom_opcode_state *VAR_0,
    bhnd_sprom_opcode_idx_entry *VAR_1)
{
 size_t VAR_2;


 if (VAR_1 == ((void*)0)) {
  VAR_2 = 0;
 } else {

  VAR_2 = (size_t)(VAR_1 - VAR_0->idx);
  FUNC_0(VAR_2 < VAR_0->num_idx,
      ("invalid index %zu", VAR_2));


  VAR_2++;
 }


 if (VAR_2 == VAR_0->num_idx)
  return (((void*)0));

 return (&VAR_0->idx[VAR_2]);
}
