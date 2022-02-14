
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef size_t uint_t ;
typedef int uint8_t ;
typedef void* uint16_t ;
struct TYPE_6__ {int p_model; } ;
typedef TYPE_1__ proc_t ;
typedef void* int8_t ;
typedef void* int32_t ;
struct TYPE_7__ {int ftt_size; int ftt_segment; scalar_t__ ftt_type; int ftt_code; int ftt_ripmode; int * ftt_instr; int ftt_modrm; void* ftt_dest; void* ftt_index; void* ftt_base; int ftt_scale; } ;
typedef TYPE_2__ fasttrap_tracepoint_t ;
typedef int fasttrap_probe_type_t ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;

 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int,size_t,size_t) ;
 size_t FUNC_2 (int) ;
 size_t FUNC_3 (int) ;
 size_t FUNC_4 (int) ;

 void* VAR_5 ;
 int FUNC_5 (int) ;
 int FUNC_6 (int) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 size_t FUNC_7 (int) ;
 size_t FUNC_8 (int) ;
 int FUNC_9 (int) ;
 void* VAR_10 ;
 scalar_t__ VAR_11 ;
 void* VAR_12 ;
 scalar_t__ VAR_13 ;
 void* VAR_14 ;
 scalar_t__ VAR_15 ;
 scalar_t__ VAR_16 ;
 scalar_t__ VAR_17 ;
 scalar_t__ VAR_18 ;
 scalar_t__ VAR_19 ;
 size_t FUNC_10 (size_t,scalar_t__) ;
 uintptr_t VAR_20 ;
 scalar_t__ VAR_21 ;
 void* VAR_22 ;
 int FUNC_11 (int*,int *,int) ;
 int FUNC_12 (int*,size_t) ;
 int FUNC_13 (int*,int ,int*) ;
 void** VAR_23 ;
 scalar_t__ FUNC_14 (TYPE_1__*,int*,size_t,uintptr_t) ;

int
FUNC_15(proc_t *VAR_24, fasttrap_tracepoint_t *VAR_25, uintptr_t VAR_26,
    fasttrap_probe_type_t VAR_27)
{
 uint8_t VAR_28[VAR_4 + 10];
 size_t VAR_29 = VAR_4;
 size_t VAR_30 = FUNC_10(VAR_29, VAR_21 - (VAR_26 & VAR_20));
 uint_t VAR_31 = 0;
 int VAR_32, VAR_33;
 uint8_t VAR_34, VAR_35 = 0;
 if (FUNC_14(VAR_24, &VAR_28[0], VAR_30, VAR_26) != 0)
  return (-1);
 if (VAR_29 > VAR_30 &&
     FUNC_14(VAR_24, &VAR_28[VAR_30], VAR_29 - VAR_30, VAR_26 + VAR_30) != 0) {
  FUNC_12(&VAR_28[VAR_30], VAR_29 - VAR_30);
  VAR_29 = VAR_30;
 }




 if ((VAR_33 = FUNC_13(VAR_28, VAR_24->p_model, &VAR_32)) <= 0)
  return (-1);




 FUNC_0(-1 <= VAR_32 && VAR_32 < VAR_33);







 if (VAR_33 > VAR_29)
  return (-1);

 VAR_25->ftt_size = (uint8_t)VAR_33;
 VAR_25->ftt_segment = VAR_9;





 for (;;) {
  VAR_34 = 0;
  switch (VAR_28[VAR_31]) {
  case 131:
   VAR_34++;

  case 136:
   VAR_34++;

  case 137:
   VAR_34++;

  case 138:
   VAR_34++;

  case 139:
   VAR_34++;

  case 140:
   VAR_34++;

  case 134:
  case 141:
  case 135:
  case 133:
  case 132:
   if (VAR_34 != 0) {





    if (VAR_25->ftt_segment != VAR_9)
     return (-1);

    VAR_25->ftt_segment = VAR_34;
   }
   VAR_31++;
   continue;
  }
  break;
 }





 if (VAR_24->p_model == VAR_0 && (VAR_28[VAR_31] & 0xf0) == 0x40)
  VAR_35 = VAR_28[VAR_31++];






 FUNC_11(VAR_28, VAR_25->ftt_instr, VAR_4);

 VAR_25->ftt_type = VAR_11;
 if (VAR_28[VAR_31] == VAR_1) {
  switch (VAR_28[VAR_31 + 1]) {
  case 170:
  case 173:
  case 181:
  case 182:
  case 179:
  case 174:
  case 180:
  case 183:
  case 168:
  case 171:
  case 169:
  case 172:
  case 176:
  case 177:
  case 175:
  case 178:
   VAR_25->ftt_type = VAR_12;
   VAR_25->ftt_code = (VAR_28[VAR_31 + 1] & 0x0f) | 148;
   VAR_25->ftt_dest = VAR_26 + VAR_25->ftt_size +

       *(int32_t *)&VAR_28[VAR_31 + 2];
   break;
  }
 } else if (VAR_28[VAR_31] == VAR_2) {
  uint_t VAR_36 = FUNC_2(VAR_28[VAR_31 + 1]);
  uint_t VAR_37 = FUNC_3(VAR_28[VAR_31 + 1]);
  uint_t VAR_38 = FUNC_4(VAR_28[VAR_31 + 1]);

  if (VAR_37 == 2 || VAR_37 == 4) {
   uint_t VAR_39, VAR_40;

   if (VAR_37 == 2)
    VAR_25->ftt_type = VAR_10;
   else
    VAR_25->ftt_type = VAR_14;

   if (VAR_36 == 3)
    VAR_25->ftt_code = 2;
   else
    VAR_25->ftt_code = 1;

   FUNC_0(VAR_24->p_model == VAR_0 || VAR_35 == 0);






   if (VAR_36 != 3 && VAR_38 == 4) {
    uint8_t VAR_41 = VAR_28[VAR_31 + 2];
    uint_t VAR_42 = FUNC_8(VAR_41);
    uint_t VAR_43 = FUNC_7(VAR_41);

    VAR_25->ftt_scale = FUNC_9(VAR_41);

    VAR_25->ftt_index = (VAR_42 == 4) ?
        VAR_5 :
        VAR_23[VAR_42 | (FUNC_6(VAR_35) << 3)];
    VAR_25->ftt_base = (VAR_36 == 0 && VAR_43 == 5) ?
        VAR_5 :
        VAR_23[VAR_43 | (FUNC_5(VAR_35) << 3)];

    VAR_39 = 3;
    VAR_40 = VAR_36 == 1 ? 1 : 4;
   } else {






    if (VAR_36 == 0 && VAR_38 == 5) {

     if (VAR_24->p_model == VAR_0)
      VAR_25->ftt_base = VAR_22;
     else

      VAR_25->ftt_base = VAR_5;
     VAR_40 = 4;
    } else {
     uint8_t VAR_44 = VAR_38 |
         (FUNC_5(VAR_35) << 3);

     VAR_25->ftt_base = VAR_23[VAR_44];
     VAR_40 = VAR_36 == 1 ? 1 : VAR_36 == 2 ? 4 : 0;
    }
    VAR_25->ftt_index = VAR_5;
    VAR_39 = 2;
   }

   if (VAR_40 == 1) {
    VAR_25->ftt_dest = *(int8_t *)&VAR_28[VAR_31 + VAR_39];
   } else if (VAR_40 == 4) {

    VAR_25->ftt_dest = *(int32_t *)&VAR_28[VAR_31 + VAR_39];
   } else {
    VAR_25->ftt_dest = 0;
   }
  }
 } else {
  switch (VAR_28[VAR_31]) {
  case 129:
   VAR_25->ftt_type = VAR_18;
   break;

  case 128:
   VAR_25->ftt_type = VAR_19;

   VAR_25->ftt_dest = *(uint16_t *)&VAR_28[VAR_31 + 1];
   break;

  case 148:
  case 151:
  case 162:
  case 163:
  case 159:
  case 152:
  case 161:
  case 164:
  case 146:
  case 149:
  case 147:
  case 150:
  case 156:
  case 157:
  case 155:
  case 158:
   VAR_25->ftt_type = VAR_12;
   VAR_25->ftt_code = VAR_28[VAR_31];
   VAR_25->ftt_dest = VAR_26 + VAR_25->ftt_size +
       (int8_t)VAR_28[VAR_31 + 1];
   break;

  case 144:
  case 143:
  case 145:
   VAR_25->ftt_type = VAR_15;
   VAR_25->ftt_code = VAR_28[VAR_31];
   VAR_25->ftt_dest = VAR_26 + VAR_25->ftt_size +
       (int8_t)VAR_28[VAR_31 + 1];
   break;

  case 160:
   VAR_25->ftt_type = VAR_13;
   VAR_25->ftt_dest = VAR_26 + VAR_25->ftt_size +
       (int8_t)VAR_28[VAR_31 + 1];
   break;

  case 167:
   VAR_25->ftt_type = VAR_10;
   VAR_25->ftt_dest = VAR_26 + VAR_25->ftt_size +

       *(int32_t *)&VAR_28[VAR_31 + 1];
   VAR_25->ftt_code = 0;
   break;

  case 154:
   VAR_25->ftt_type = VAR_14;
   VAR_25->ftt_dest = VAR_26 + VAR_25->ftt_size +

       *(int32_t *)&VAR_28[VAR_31 + 1];
   break;
  case 153:
   VAR_25->ftt_type = VAR_14;
   VAR_25->ftt_dest = VAR_26 + VAR_25->ftt_size +
       (int8_t)VAR_28[VAR_31 + 1];
   break;

  case 130:
   if (VAR_31 == 0)
    VAR_25->ftt_type = VAR_17;
   break;

  case 142:

   FUNC_0(VAR_24->p_model == VAR_0 || VAR_35 == 0);







   if (FUNC_5(VAR_35) == 0)

    VAR_25->ftt_type = VAR_16;
   break;

  case 165:




   FUNC_0(VAR_28[VAR_31] == VAR_3);
   return (-1);

  case 166:
   return (-1);
  }
 }


 if (VAR_24->p_model == VAR_0 && VAR_25->ftt_type == VAR_11) {
  if (VAR_32 != -1) {
   uint_t VAR_45 = FUNC_2(VAR_28[VAR_32]);
   uint_t VAR_46 = FUNC_3(VAR_28[VAR_32]);
   uint_t VAR_47 = FUNC_4(VAR_28[VAR_32]);

   FUNC_0(VAR_32 > VAR_31);

   if (VAR_45 == 0 && VAR_47 == 5) {
    if (VAR_46 != 0) {
     VAR_25->ftt_ripmode = VAR_6 |
         (VAR_8 *
         FUNC_5(VAR_35));
     VAR_47 = 0;
    } else {
     VAR_25->ftt_ripmode = VAR_7 |
         (VAR_8 *
         FUNC_5(VAR_35));
     VAR_47 = 1;
    }

    VAR_25->ftt_modrm = VAR_25->ftt_instr[VAR_32];
    VAR_25->ftt_instr[VAR_32] =
        FUNC_1(2, VAR_46, VAR_47);
   }
  }
 }


 return (0);
}
