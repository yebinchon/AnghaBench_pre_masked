
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {scalar_t__ input; int offset; TYPE_1__* layout; } ;
typedef TYPE_2__ bhnd_sprom_opcode_state ;
struct TYPE_10__ {scalar_t__ opcodes; int vid; int offset; } ;
typedef TYPE_3__ bhnd_sprom_opcode_idx_entry ;
struct TYPE_8__ {scalar_t__ bindings_size; scalar_t__ bindings; } ;


 int FUNC_0 (int,char*) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (TYPE_2__*,int ) ;

int
FUNC_3(bhnd_sprom_opcode_state *VAR_0,
    bhnd_sprom_opcode_idx_entry *VAR_1)
{
 int VAR_2;

 FUNC_0(VAR_1->opcodes < VAR_0->layout->bindings_size,
     ("index entry references invalid opcode position"));


 if ((VAR_2 = FUNC_1(VAR_0)))
  return (VAR_2);


 VAR_0->input = VAR_0->layout->bindings + VAR_1->opcodes;


 VAR_0->offset = VAR_1->offset;


 if ((VAR_2 = FUNC_2(VAR_0, VAR_1->vid)))
  return (VAR_2);

 return (0);
}
