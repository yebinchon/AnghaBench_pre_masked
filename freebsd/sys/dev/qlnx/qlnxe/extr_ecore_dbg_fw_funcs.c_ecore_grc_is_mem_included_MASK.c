
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u8 ;
struct ecore_hwfn {int dummy; } ;
struct block_defs {scalar_t__ storm_id; scalar_t__ associated_to_storm; } ;
struct big_ram_defs {size_t mem_group_id; size_t ram_mem_group_id; int grc_param; } ;
typedef enum dbg_storms { ____Placeholder_dbg_storms } dbg_storms ;
typedef enum block_id { ____Placeholder_block_id } block_id ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 size_t VAR_16 ;
 int FUNC_0 (struct ecore_hwfn*,int ) ;
 int FUNC_1 (struct ecore_hwfn*,int) ;
 struct big_ram_defs* VAR_17 ;
 struct block_defs** VAR_18 ;

__attribute__((used)) static bool FUNC_2(struct ecore_hwfn *VAR_19,
           enum block_id VAR_20,
           u8 VAR_21)
{
 struct block_defs *VAR_22 = VAR_18[VAR_20];
 u8 VAR_23;


 if (VAR_22->associated_to_storm &&
  !FUNC_1(VAR_19, (enum dbg_storms)VAR_22->storm_id))
  return 0;

 for (VAR_23 = 0; VAR_23 < VAR_16; VAR_23++) {
  struct big_ram_defs *VAR_24 = &VAR_17[VAR_23];

  if (VAR_21 == VAR_24->mem_group_id || VAR_21 == VAR_24->ram_mem_group_id)
   return FUNC_0(VAR_19, VAR_24->grc_param);
 }

 switch (VAR_21) {
 case 136:
 case 135:
  return FUNC_0(VAR_19, VAR_11);
 case 133:
  return FUNC_0(VAR_19, VAR_13);
 case 138:
  return FUNC_0(VAR_19, VAR_9);
 case 149:
 case 147:
 case 148:
  return FUNC_0(VAR_19, VAR_0);
 case 134:
  return FUNC_0(VAR_19, VAR_12);
 case 146:
 case 144:
 case 130:
  return FUNC_0(VAR_19, VAR_1) || FUNC_0(VAR_19, VAR_3);
 case 142:
 case 141:
  return FUNC_0(VAR_19, VAR_6);
 case 139:
  return FUNC_0(VAR_19, VAR_8);
 case 137:
  return FUNC_0(VAR_19, VAR_10);
 case 143:
  return FUNC_0(VAR_19, VAR_5);
 case 128:
  return FUNC_0(VAR_19, VAR_15);
 case 131:
  return FUNC_0(VAR_19, VAR_14);
 case 129:
 case 132:
  return FUNC_0(VAR_19, VAR_4);
 case 145:
  return FUNC_0(VAR_19, VAR_2);
 case 140:
  return FUNC_0(VAR_19, VAR_7);
 default:
  return 1;
 }
}
