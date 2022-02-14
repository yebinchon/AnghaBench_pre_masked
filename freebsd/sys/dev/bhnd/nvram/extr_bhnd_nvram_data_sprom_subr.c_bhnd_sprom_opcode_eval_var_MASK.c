
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_5__ {scalar_t__ var_state; } ;
typedef TYPE_1__ bhnd_sprom_opcode_state ;
typedef int bhnd_sprom_opcode_idx_entry ;


 int FUNC_0 (int,char*) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_2 (TYPE_1__*,int *) ;
 int FUNC_3 (TYPE_1__*,int *) ;

int
FUNC_4(bhnd_sprom_opcode_state *VAR_2,
    bhnd_sprom_opcode_idx_entry *VAR_3)
{
 uint8_t VAR_4;
 int VAR_5;


 if ((VAR_5 = FUNC_2(VAR_2, VAR_3)))
  return (VAR_5);


 while ((VAR_5 = FUNC_3(VAR_2, &VAR_4)) == 0) {

  if (FUNC_1(VAR_4) != VAR_0)
   continue;

  FUNC_0(VAR_2->var_state == VAR_1,
      ("incomplete variable definition"));

  return (0);
 }


 return (VAR_5);
}
