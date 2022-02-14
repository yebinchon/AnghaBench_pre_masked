
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_5__ {int have_bind; } ;
struct TYPE_6__ {scalar_t__ var_state; TYPE_1__ var; } ;
typedef TYPE_2__ bhnd_sprom_opcode_state ;


 int FUNC_0 (int,char*) ;
 int VAR_0 ;
 int VAR_1 ;



 int FUNC_1 (int ) ;

 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_2 (TYPE_2__*,int *) ;

int
FUNC_3(bhnd_sprom_opcode_state *VAR_4)
{
 uint8_t VAR_5;
 int VAR_6;

 if (VAR_4->var_state != VAR_3)
  return (VAR_0);


 while ((VAR_6 = FUNC_2(VAR_4, &VAR_5)) == 0) {
  switch (FUNC_1(VAR_5)) {
  case 131:
  case 130:
  case 129:

   FUNC_0(
       VAR_4->var_state == VAR_3,
       ("missing variable definition"));
   FUNC_0(VAR_4->var.have_bind, ("missing bind"));

   return (0);

  case 128:

   FUNC_0(
       VAR_4->var_state == VAR_2,
       ("variable definition still available"));
   return (VAR_1);
  }
 }


 return (VAR_6);
}
