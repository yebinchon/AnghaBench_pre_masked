
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_6__ ;
typedef struct TYPE_17__ TYPE_5__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


typedef int uint64_t ;
struct TYPE_13__ {int bl_len; void* bl_data; } ;
struct _Dwarf_Attribute {int at_offset; int at_form; int at_indirect; TYPE_2__* u; TYPE_1__ at_block; int * at_ld; int at_attrib; int at_die; } ;
typedef int atref ;
struct TYPE_18__ {int ad_form; int ad_attrib; } ;
struct TYPE_17__ {int cu_pointer_size; int cu_version; } ;
struct TYPE_16__ {int (* read ) (int ,int*,int) ;} ;
struct TYPE_15__ {int ds_data; int ds_size; } ;
struct TYPE_14__ {int u64; int s; void* u8p; int s64; } ;
typedef TYPE_3__ Dwarf_Section ;
typedef int Dwarf_Error ;
typedef int Dwarf_Die ;
typedef TYPE_4__* Dwarf_Debug ;
typedef TYPE_5__* Dwarf_CU ;
typedef TYPE_6__* Dwarf_AttrDef ;


 int FUNC_0 (TYPE_4__*,int *,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ,struct _Dwarf_Attribute*,int *,int *) ;
 void* FUNC_2 (int ,int*,int) ;
 int FUNC_3 (int ,int*) ;
 int FUNC_4 (int ,int ,int*) ;
 void* FUNC_5 (int ,int*) ;
 int FUNC_6 (TYPE_4__*) ;
 int FUNC_7 (struct _Dwarf_Attribute*,int ,int) ;
 int FUNC_8 (int ,int*,int) ;
 int FUNC_9 (int ,int*,int) ;
 int FUNC_10 (int ,int*,int) ;
 int FUNC_11 (int ,int*,int) ;
 int FUNC_12 (int ,int*,int) ;
 int FUNC_13 (int ,int*,int) ;
 int FUNC_14 (int ,int*,int) ;
 int FUNC_15 (int ,int*,int) ;
 int FUNC_16 (int ,int*,int) ;
 int FUNC_17 (int ,int*,int) ;
 int FUNC_18 (int ,int*,int) ;
 int FUNC_19 (int ,int*,int) ;

int
FUNC_20(Dwarf_Debug VAR_2, Dwarf_Section *VAR_3, uint64_t *VAR_4,
    int VAR_5, Dwarf_CU VAR_6, Dwarf_Die VAR_7, Dwarf_AttrDef VAR_8,
    uint64_t VAR_9, int VAR_10, Dwarf_Error *VAR_11)
{
 struct _Dwarf_Attribute VAR_12;
 int VAR_13;

 VAR_13 = VAR_1;
 FUNC_7(&VAR_12, 0, sizeof(VAR_12));
 VAR_12.at_die = VAR_7;
 VAR_12.at_offset = *VAR_4;
 VAR_12.at_attrib = VAR_8->ad_attrib;
 VAR_12.at_form = VAR_10 ? VAR_9 : VAR_8->ad_form;
 VAR_12.at_indirect = VAR_10;
 VAR_12.at_ld = ((void*)0);

 switch (VAR_9) {
 case 152:
  VAR_12.u[0].u64 = VAR_2->read(VAR_3->ds_data, VAR_4,
      VAR_6->cu_pointer_size);
  break;
 case 151:
 case 143:
  VAR_12.u[0].u64 = FUNC_5(VAR_3->ds_data, VAR_4);
  VAR_12.u[1].u8p = FUNC_2(VAR_3->ds_data, VAR_4,
      VAR_12.u[0].u64);
  break;
 case 150:
  VAR_12.u[0].u64 = VAR_2->read(VAR_3->ds_data, VAR_4, 1);
  VAR_12.u[1].u8p = FUNC_2(VAR_3->ds_data, VAR_4,
      VAR_12.u[0].u64);
  break;
 case 149:
  VAR_12.u[0].u64 = VAR_2->read(VAR_3->ds_data, VAR_4, 2);
  VAR_12.u[1].u8p = FUNC_2(VAR_3->ds_data, VAR_4,
      VAR_12.u[0].u64);
  break;
 case 148:
  VAR_12.u[0].u64 = VAR_2->read(VAR_3->ds_data, VAR_4, 4);
  VAR_12.u[1].u8p = FUNC_2(VAR_3->ds_data, VAR_4,
      VAR_12.u[0].u64);
  break;
 case 147:
 case 142:
 case 139:
  VAR_12.u[0].u64 = VAR_2->read(VAR_3->ds_data, VAR_4, 1);
  break;
 case 146:
 case 138:
  VAR_12.u[0].u64 = VAR_2->read(VAR_3->ds_data, VAR_4, 2);
  break;
 case 145:
 case 137:
  VAR_12.u[0].u64 = VAR_2->read(VAR_3->ds_data, VAR_4, 4);
  break;
 case 144:
 case 136:
  VAR_12.u[0].u64 = VAR_2->read(VAR_3->ds_data, VAR_4, 8);
  break;
 case 140:
  VAR_9 = FUNC_5(VAR_3->ds_data, VAR_4);
  return (FUNC_20(VAR_2, VAR_3, VAR_4, VAR_5, VAR_6, VAR_7,
      VAR_8, VAR_9, 1, VAR_11));
 case 135:
  if (VAR_6->cu_version == 2)
   VAR_12.u[0].u64 = VAR_2->read(VAR_3->ds_data, VAR_4,
       VAR_6->cu_pointer_size);
  else
   VAR_12.u[0].u64 = VAR_2->read(VAR_3->ds_data, VAR_4,
       VAR_5);
  break;
 case 133:
 case 128:
  VAR_12.u[0].u64 = FUNC_5(VAR_3->ds_data, VAR_4);
  break;
 case 132:
  VAR_12.u[0].s64 = FUNC_3(VAR_3->ds_data, VAR_4);
  break;
 case 131:
  VAR_12.u[0].u64 = VAR_2->read(VAR_3->ds_data, VAR_4, VAR_5);
  break;
 case 130:
  VAR_12.u[0].s = FUNC_4(VAR_3->ds_data, VAR_3->ds_size,
      VAR_4);
  break;
 case 129:
  VAR_12.u[0].u64 = VAR_2->read(VAR_3->ds_data, VAR_4, VAR_5);
  VAR_12.u[1].s = FUNC_6(VAR_2) + VAR_12.u[0].u64;
  break;
 case 134:
  VAR_12.u[0].u64 = 8;
  VAR_12.u[1].u8p = FUNC_2(VAR_3->ds_data, VAR_4,
      VAR_12.u[0].u64);
  break;
 case 141:

  VAR_12.u[0].u64 = 1;
  break;
 default:
  FUNC_0(VAR_2, VAR_11, VAR_0);
  VAR_13 = VAR_0;
  break;
 }

 if (VAR_13 == VAR_1) {
  if (VAR_9 == 151 || VAR_9 == 150 ||
      VAR_9 == 149 || VAR_9 == 148) {
   VAR_12.at_block.bl_len = VAR_12.u[0].u64;
   VAR_12.at_block.bl_data = VAR_12.u[1].u8p;
  }
  VAR_13 = FUNC_1(VAR_7, &VAR_12, ((void*)0), VAR_11);
 }

 return (VAR_13);
}
