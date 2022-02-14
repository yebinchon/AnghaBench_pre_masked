
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {TYPE_1__* layout; int revs; int var_state; scalar_t__ vid; scalar_t__ offset; int input; int var; } ;
typedef TYPE_2__ bhnd_sprom_opcode_state ;
struct TYPE_4__ {int rev; int bindings; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int *,int ,int) ;

__attribute__((used)) static int
FUNC_2(bhnd_sprom_opcode_state *VAR_1)
{
 FUNC_1(&VAR_1->var, 0, sizeof(VAR_1->var));

 VAR_1->input = VAR_1->layout->bindings;
 VAR_1->offset = 0;
 VAR_1->vid = 0;
 VAR_1->var_state = VAR_0;
 FUNC_0(VAR_1->revs, VAR_1->layout->rev);

 return (0);
}
