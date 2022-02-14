
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ var_state; } ;
typedef TYPE_1__ bhnd_sprom_opcode_state ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (TYPE_1__*,char*) ;

__attribute__((used)) static int
FUNC_1(bhnd_sprom_opcode_state *VAR_3)
{
 if (VAR_3->var_state != VAR_2) {
  FUNC_0(VAR_3, "no open variable definition\n");
  return (VAR_0);
 }

 VAR_3->var_state = VAR_1;
 return (0);
}
