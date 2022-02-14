
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_3__ {int last_f2f3; int osz; } ;
struct TYPE_4__ {TYPE_1__ s; } ;
struct pt_ild {int map; size_t nominal_opcode; int imm1_bytes; int imm2_bytes; TYPE_2__ u; } ;
typedef int map_map ;






 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct pt_ild*) ;
 int FUNC_1 (struct pt_ild*) ;
 int FUNC_2 (struct pt_ild*) ;
 int FUNC_3 (int*,int ) ;
 int FUNC_4 (int*,int ) ;

__attribute__((used)) static int FUNC_5(struct pt_ild *VAR_3)
{

 static uint8_t const *const VAR_4[] = {
              129,
              128
 };
 uint8_t VAR_5, VAR_6;

 if (!VAR_3)
  return -VAR_2;

 VAR_5 = VAR_3->map;

 if ((sizeof(VAR_4) / sizeof(*VAR_4)) <= VAR_5)
  return 0;

 VAR_6 = VAR_4[VAR_5][VAR_3->nominal_opcode];
 switch (VAR_6) {
 case 141:
 case 142:
 default:
  return 0;

 case 131:
  VAR_3->imm1_bytes = 1;
  return 0;

 case 135:
  VAR_3->imm1_bytes = 1;
  return 0;

 case 133:

  return FUNC_4(&VAR_3->imm1_bytes, FUNC_1(VAR_3));

 case 130:

  return FUNC_3(&VAR_3->imm1_bytes, FUNC_1(VAR_3));

 case 132:
  VAR_3->imm1_bytes = 2;
  return 0;

 case 134:

  return FUNC_4(&VAR_3->imm1_bytes,
     FUNC_2(VAR_3));

 case 136:
  if (VAR_3->map == VAR_0 && FUNC_0(VAR_3) < 2) {
   return FUNC_4(&VAR_3->imm1_bytes,
      FUNC_1(VAR_3));
  }
  return 0;

 case 138:
  if (VAR_3->map == VAR_0 && FUNC_0(VAR_3) == 0) {
   return FUNC_4(&VAR_3->imm1_bytes,
      FUNC_1(VAR_3));
  }
  return 0;

 case 137:
  if (VAR_3->map == VAR_0 && FUNC_0(VAR_3) < 2)
   VAR_3->imm1_bytes = 1;

  return 0;

 case 139:
  if (VAR_3->map == VAR_0) {

   VAR_3->imm1_bytes = 2;
   VAR_3->imm2_bytes = 1;
  }
  return 0;

 case 140:



  if (VAR_3->map == VAR_1) {
   if (VAR_3->u.s.osz || VAR_3->u.s.last_f2f3 == 2) {
    VAR_3->imm1_bytes = 1;
    VAR_3->imm2_bytes = 1;
   }
  }
  return 0;
 }
}
