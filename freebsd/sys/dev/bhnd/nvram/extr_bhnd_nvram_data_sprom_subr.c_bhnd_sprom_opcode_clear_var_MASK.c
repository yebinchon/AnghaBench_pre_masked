
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int have_bind; } ;
struct TYPE_4__ {scalar_t__ var_state; TYPE_2__ var; } ;
typedef TYPE_1__ bhnd_sprom_opcode_state ;


 int FUNC_0 (int,char*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (TYPE_2__*,int ,int) ;

__attribute__((used)) static int
FUNC_2(bhnd_sprom_opcode_state *VAR_2)
{
 if (VAR_2->var_state == VAR_1)
  return (0);

 FUNC_0(VAR_2->var_state == VAR_0,
     ("incomplete variable definition"));
 FUNC_0(!VAR_2->var.have_bind, ("stale bind state"));

 FUNC_1(&VAR_2->var, 0, sizeof(VAR_2->var));
 VAR_2->var_state = VAR_1;

 return (0);
}
