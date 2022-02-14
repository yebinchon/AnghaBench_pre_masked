
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {size_t offset; size_t vid; size_t input; TYPE_1__* layout; } ;
typedef TYPE_2__ bhnd_sprom_opcode_state ;
struct TYPE_9__ {size_t offset; size_t vid; size_t opcodes; } ;
typedef TYPE_3__ bhnd_sprom_opcode_idx_entry ;
struct TYPE_7__ {size_t bindings; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__*,char*,size_t) ;
 size_t VAR_1 ;

int
FUNC_1(bhnd_sprom_opcode_state *VAR_2,
    bhnd_sprom_opcode_idx_entry *VAR_3)
{
 size_t VAR_4;





 if (VAR_2->offset > VAR_1) {
  FUNC_0(VAR_2, "cannot index large offset %u\n",
      VAR_2->offset);
  return (VAR_0);
 }

 VAR_3->offset = VAR_2->offset;


 if (VAR_2->vid > VAR_1) {
  FUNC_0(VAR_2, "cannot index large vid %zu\n",
      VAR_2->vid);
  return (VAR_0);
 }
 VAR_3->vid = VAR_2->vid;


 VAR_4 = (VAR_2->input - VAR_2->layout->bindings);
 if (VAR_4 > VAR_1) {
  FUNC_0(VAR_2, "cannot index large opcode offset "
      "%zu\n", VAR_4);
  return (VAR_0);
 }
 VAR_3->opcodes = VAR_4;

 return (0);
}
