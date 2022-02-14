
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ uint8_t ;
struct TYPE_3__ {size_t asz; } ;
struct TYPE_4__ {TYPE_1__ s; } ;
struct pt_ild {size_t nominal_opcode; scalar_t__ max_bytes; size_t mode; int disp_bytes; TYPE_2__ u; int modrm_byte; } ;
typedef size_t pti_map_enum_t ;


 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct pt_ild*,scalar_t__) ;
 int *** VAR_5 ;
 scalar_t__** VAR_6 ;
 int FUNC_1 (struct pt_ild*,scalar_t__) ;


 scalar_t__*** VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 size_t FUNC_2 (struct pt_ild*) ;
 int FUNC_3 (struct pt_ild*) ;
 int FUNC_4 (struct pt_ild*) ;
 int FUNC_5 (struct pt_ild*,scalar_t__) ;

__attribute__((used)) static int FUNC_6(struct pt_ild *VAR_10, uint8_t VAR_11)
{
 static uint8_t const *const VAR_12[2] = {
  129,
  128
 };
 int VAR_13 = VAR_1;
 pti_map_enum_t VAR_14;

 if (!VAR_10)
  return -VAR_9;

 VAR_14 = FUNC_2(VAR_10);
 if (VAR_14 >= VAR_0)
  VAR_13 = VAR_3;
 else
  VAR_13 = VAR_12[VAR_14][VAR_10->nominal_opcode];

 if (VAR_13 == VAR_1 || VAR_13 == VAR_4)
  return FUNC_0(VAR_10, VAR_11);


 if (VAR_11 >= VAR_10->max_bytes)
  return -VAR_8;

 VAR_10->modrm_byte = FUNC_1(VAR_10, VAR_11);

 if (VAR_13 != VAR_2) {


  uint8_t VAR_15 = VAR_6[VAR_10->u.s.asz][VAR_10->mode];
  uint8_t VAR_16 = (uint8_t) FUNC_3(VAR_10);
  uint8_t VAR_17 = (uint8_t) FUNC_4(VAR_10);
  uint8_t VAR_18;

  VAR_10->disp_bytes = VAR_5[VAR_15][VAR_16][VAR_17];

  VAR_18 = VAR_7[VAR_15][VAR_16][VAR_17];
  if (VAR_18)
   return FUNC_5(VAR_10, VAR_11 + 1);
 }

 return FUNC_0(VAR_10, VAR_11 + 1);
}
