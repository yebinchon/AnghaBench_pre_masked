
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int int8_t ;
struct TYPE_5__ {int shift; } ;
struct TYPE_6__ {scalar_t__ var_state; TYPE_1__ var; } ;
typedef TYPE_2__ bhnd_sprom_opcode_state ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (TYPE_2__*,char*) ;

__attribute__((used)) static inline int
FUNC_1(bhnd_sprom_opcode_state *VAR_2, int8_t VAR_3)
{
 if (VAR_2->var_state != VAR_1) {
  FUNC_0(VAR_2, "no open variable definition\n");
  return (VAR_0);
 }

 VAR_2->var.shift = VAR_3;
 return (0);
}
