
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
typedef int int8_t ;
typedef int int32_t ;
struct TYPE_5__ {int* input; } ;
typedef TYPE_1__ bhnd_sprom_opcode_state ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*,char*,int) ;





 int FUNC_1 (TYPE_1__*,int*) ;
 int FUNC_2 (int const*) ;
 int FUNC_3 (int const*) ;

__attribute__((used)) static int
FUNC_4(bhnd_sprom_opcode_state *VAR_1, uint8_t VAR_2,
   uint32_t *VAR_3)
{
 const uint8_t *VAR_4;
 int VAR_5;

 VAR_4 = VAR_1->input;
 switch (VAR_2) {
 case 132:

  *VAR_3 = (int32_t)(int8_t)(*VAR_4);
  VAR_4 += 1;
  break;
 case 129:
  *VAR_3 = *VAR_4;
  VAR_4 += 1;
  break;
 case 128:
  *VAR_3 = *VAR_4;

  if ((VAR_5 = FUNC_1(VAR_1, VAR_3)))
   return (VAR_5);

  VAR_4 += 1;
  break;
 case 131:
  *VAR_3 = FUNC_2(VAR_4);
  VAR_4 += 2;
  break;
 case 130:
  *VAR_3 = FUNC_3(VAR_4);
  VAR_4 += 4;
  break;
 default:
  FUNC_0(VAR_1, "unsupported data type: %hhu\n", VAR_2);
  return (VAR_0);
 }


 VAR_1->input = VAR_4;

 return (0);
}
