
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_7__ {int bind_total; } ;
struct TYPE_8__ {int var_state; TYPE_1__ var; } ;
typedef TYPE_2__ bhnd_sprom_opcode_state ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int VAR_1 ;



 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (TYPE_2__*,int,int,int,int) ;

__attribute__((used)) static int
FUNC_6(bhnd_sprom_opcode_state *VAR_5,
    uint8_t *VAR_6)
{
 uint8_t VAR_7;
 int VAR_8;

 VAR_7 = FUNC_0(*VAR_6);
 switch (VAR_5->var_state) {
 case 129:

  return (0);

 case 128:







  if (FUNC_2(VAR_7) &&
      VAR_5->var.bind_total == 0)
  {
   uint8_t VAR_9, VAR_10, VAR_11;
   bool VAR_12;


   VAR_9 = 1;
   VAR_10 = 1;
   VAR_11 = 1;
   VAR_12 = 0;

   VAR_8 = FUNC_5(VAR_5, VAR_9,
       VAR_10, VAR_12, VAR_11);
   if (VAR_8)
    return (VAR_8);


   *VAR_6 = VAR_0 |
       (0 << VAR_3) |
       (1 << VAR_2) |
       (1 << VAR_4);

   return (0);
  }





  if (FUNC_1(VAR_7)) {

   if ((VAR_8 = FUNC_4(VAR_5)))
    return (VAR_8);


   *VAR_6 = VAR_1;
   return (0);
  }
  break;


 case 130:


  return (FUNC_3(VAR_5));
 }


 return (0);
}
