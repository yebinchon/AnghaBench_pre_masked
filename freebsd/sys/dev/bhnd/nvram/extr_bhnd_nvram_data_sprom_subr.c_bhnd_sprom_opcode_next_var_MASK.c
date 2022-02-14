
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_4__ {int var_state; } ;
typedef TYPE_1__ bhnd_sprom_opcode_state ;


 int FUNC_0 (int,char*) ;
 int FUNC_1 (int ) ;



 int VAR_0 ;
 int FUNC_2 (TYPE_1__*,int *) ;

int
FUNC_3(bhnd_sprom_opcode_state *VAR_1)
{
 uint8_t VAR_2;
 int VAR_3;


 while ((VAR_3 = FUNC_2(VAR_1, &VAR_2)) == 0) {
  switch (FUNC_1(VAR_2)) {
  case 130:
  case 129:
  case 128:
   FUNC_0(
       VAR_1->var_state == VAR_0,
       ("missing variable definition"));

   return (0);
  default:
   continue;
  }
 }


 return (VAR_3);
}
