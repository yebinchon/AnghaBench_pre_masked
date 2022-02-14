
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_38__ TYPE_9__ ;
typedef struct TYPE_37__ TYPE_8__ ;
typedef struct TYPE_36__ TYPE_7__ ;
typedef struct TYPE_35__ TYPE_6__ ;
typedef struct TYPE_34__ TYPE_5__ ;
typedef struct TYPE_33__ TYPE_4__ ;
typedef struct TYPE_32__ TYPE_3__ ;
typedef struct TYPE_31__ TYPE_2__ ;
typedef struct TYPE_30__ TYPE_1__ ;
typedef struct TYPE_29__ TYPE_19__ ;
typedef struct TYPE_28__ TYPE_18__ ;
typedef struct TYPE_27__ TYPE_17__ ;
typedef struct TYPE_26__ TYPE_16__ ;
typedef struct TYPE_25__ TYPE_15__ ;
typedef struct TYPE_24__ TYPE_14__ ;
typedef struct TYPE_23__ TYPE_13__ ;
typedef struct TYPE_22__ TYPE_12__ ;
typedef struct TYPE_21__ TYPE_11__ ;
typedef struct TYPE_20__ TYPE_10__ ;


typedef unsigned int uint8_t ;
typedef int uint64_t ;
typedef int uint16_t ;
struct TYPE_28__ {unsigned int plc; int payload; int ip; } ;
struct TYPE_27__ {int autonomous; int store; int interrupt; int deepest; int last; } ;
struct TYPE_26__ {int hw; int sub_state; int state; } ;
struct TYPE_25__ {int hints; int ext; } ;
struct TYPE_24__ {int ip; } ;
struct TYPE_23__ {int payload; } ;
struct TYPE_22__ {int base; } ;
struct TYPE_21__ {int value; } ;
struct TYPE_20__ {int ctc; } ;
struct TYPE_38__ {int ctc; int fc; } ;
struct TYPE_37__ {int ratio; } ;
struct TYPE_36__ {int tsc; } ;
struct TYPE_35__ {int cr3; int nr; } ;
struct TYPE_32__ {int abrt; int intx; } ;
struct TYPE_31__ {int csd; int csl; } ;
struct TYPE_33__ {TYPE_3__ tsx; TYPE_2__ exec; } ;
struct TYPE_34__ {TYPE_4__ bits; int leaf; } ;
struct TYPE_30__ {int bit_size; unsigned int payload; } ;
struct TYPE_29__ {TYPE_18__ ptw; TYPE_17__ pwrx; TYPE_16__ pwre; TYPE_15__ mwait; TYPE_14__ exstop; TYPE_13__ mnt; TYPE_12__ vmcs; TYPE_11__ cyc; TYPE_10__ mtc; TYPE_9__ tma; TYPE_8__ cbr; TYPE_7__ tsc; TYPE_6__ pip; TYPE_5__ mode; TYPE_1__ tnt; int ip; } ;
struct pt_packet {int type; TYPE_19__ payload; } ;
struct pt_encoder {unsigned int* pos; } ;
 unsigned int* FUNC_0 (unsigned int*,int,int) ;
 int FUNC_1 (struct pt_encoder*,int ,int *) ;
 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 unsigned int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 unsigned int VAR_16 ;
 unsigned int VAR_17 ;
 unsigned int VAR_18 ;
 unsigned int VAR_19 ;


 unsigned int VAR_20 ;
 void* VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 unsigned int VAR_31 ;
 int VAR_32 ;
 unsigned int VAR_33 ;
 int VAR_34 ;
 int VAR_35 ;
 unsigned int VAR_36 ;
 unsigned int VAR_37 ;
 int VAR_38 ;
 int VAR_39 ;
 int VAR_40 ;
 int VAR_41 ;
 int VAR_42 ;
 int VAR_43 ;
 int VAR_44 ;
 int VAR_45 ;
 int VAR_46 ;
 int VAR_47 ;
 int VAR_48 ;
 int VAR_49 ;
 int VAR_50 ;
 int VAR_51 ;
 int VAR_52 ;
 int VAR_53 ;
 int VAR_54 ;
 int VAR_55 ;
 int VAR_56 ;
 int VAR_57 ;
 int VAR_58 ;
 int VAR_59 ;
 int VAR_60 ;
 int VAR_61 ;
 int VAR_62 ;
 unsigned int VAR_63 ;
 int VAR_64 ;
 int VAR_65 ;
 int VAR_66 ;
 int VAR_67 ;
 int VAR_68 ;
 int FUNC_2 (unsigned int) ;
 int FUNC_3 (struct pt_encoder*,unsigned int) ;
 int VAR_69 ;
 int VAR_70 ;
 int VAR_71 ;
 unsigned int VAR_72 ;
 unsigned int VAR_73 ;
 unsigned int VAR_74 ;
 unsigned int VAR_75 ;
 unsigned int VAR_76 ;
 unsigned int VAR_77 ;
 unsigned int VAR_78 ;
 unsigned int VAR_79 ;
 unsigned int VAR_80 ;
 unsigned int VAR_81 ;
 unsigned int VAR_82 ;
 unsigned int VAR_83 ;
 unsigned int VAR_84 ;
 unsigned int VAR_85 ;
 unsigned int VAR_86 ;
 unsigned int VAR_87 ;
 unsigned int VAR_88 ;
 unsigned int VAR_89 ;
 unsigned int VAR_90 ;

int FUNC_4(struct pt_encoder *VAR_91, const struct pt_packet *VAR_92)
{
 uint8_t *VAR_93, *VAR_94;
 int VAR_95;

 if (!VAR_91 || !VAR_92)
  return -VAR_71;

 VAR_93 = VAR_94 = VAR_91->pos;
 switch (VAR_92->type) {
 case 146:
  VAR_95 = FUNC_3(VAR_91, VAR_79);
  if (VAR_95 < 0)
   return VAR_95;

  *VAR_93++ = VAR_25;

  VAR_91->pos = VAR_93;
  return (int) (VAR_93 - VAR_94);

 case 144: {
  uint64_t VAR_96;

  VAR_95 = FUNC_3(VAR_91, VAR_81);
  if (VAR_95 < 0)
   return VAR_95;

  VAR_96 = ((uint64_t) VAR_68 << 48 |
         (uint64_t) VAR_68 << 32 |
         (uint64_t) VAR_68 << 16 |
         (uint64_t) VAR_68);

  VAR_93 = FUNC_0(VAR_93, VAR_96, 8);
  VAR_93 = FUNC_0(VAR_93, VAR_96, 8);

  VAR_91->pos = VAR_93;
  return (int) (VAR_93 - VAR_94);
 }

 case 143:
  VAR_95 = FUNC_3(VAR_91, VAR_82);
  if (VAR_95 < 0)
   return VAR_95;

  *VAR_93++ = VAR_21;
  *VAR_93++ = VAR_8;

  VAR_91->pos = VAR_93;
  return (int) (VAR_93 - VAR_94);

 case 147:
  VAR_95 = FUNC_3(VAR_91, VAR_78);
  if (VAR_95 < 0)
   return VAR_95;

  *VAR_93++ = VAR_21;
  *VAR_93++ = VAR_6;

  VAR_91->pos = VAR_93;
  return (int) (VAR_93 - VAR_94);

 case 153:
  return FUNC_1(VAR_91, VAR_22, &VAR_92->payload.ip);

 case 138:
  return FUNC_1(VAR_91, VAR_26, &VAR_92->payload.ip);

 case 136:
  return FUNC_1(VAR_91, VAR_28,
        &VAR_92->payload.ip);

 case 137:
  return FUNC_1(VAR_91, VAR_27,
        &VAR_92->payload.ip);

 case 133: {
  uint8_t VAR_97, VAR_98;

  if (VAR_92->payload.tnt.bit_size >= 7)
   return -VAR_70;

  VAR_95 = FUNC_3(VAR_91, VAR_88);
  if (VAR_95 < 0)
   return VAR_95;

  VAR_98 = VAR_92->payload.tnt.bit_size + VAR_37;
  VAR_97 = (uint8_t)
   (VAR_92->payload.tnt.payload << VAR_37);

  *VAR_93++ = (uint8_t) (VAR_97 | (1u << VAR_98));

  VAR_91->pos = VAR_93;
  return (int) (VAR_93 - VAR_94);
 }

 case 134: {
  uint64_t VAR_99, VAR_100;

  VAR_95 = FUNC_3(VAR_91, VAR_87);
  if (VAR_95 < 0)
   return VAR_95;

  if (VAR_92->payload.tnt.bit_size >= VAR_63)
   return -VAR_71;

  VAR_100 = 1ull << VAR_92->payload.tnt.bit_size;
  VAR_99 = VAR_92->payload.tnt.payload;

  if (VAR_99 & ~(VAR_100 - 1))
   return -VAR_71;

  *VAR_93++ = VAR_21;
  *VAR_93++ = VAR_14;
  VAR_93 = FUNC_0(VAR_93, VAR_99 | VAR_100, VAR_64);

  VAR_91->pos = VAR_93;
  return (int) (VAR_93 - VAR_94);
 }

 case 150: {
  uint8_t VAR_101;

  VAR_95 = FUNC_3(VAR_91, VAR_75);
  if (VAR_95 < 0)
   return VAR_95;

  switch (VAR_92->payload.mode.leaf) {
  default:
   return -VAR_70;

  case 129:
   VAR_101 = 129;

   if (VAR_92->payload.mode.bits.exec.csl)
    VAR_101 |= VAR_17;

   if (VAR_92->payload.mode.bits.exec.csd)
    VAR_101 |= VAR_16;
   break;

  case 128:
   VAR_101 = 128;

   if (VAR_92->payload.mode.bits.tsx.intx)
    VAR_101 |= VAR_19;

   if (VAR_92->payload.mode.bits.tsx.abrt)
    VAR_101 |= VAR_18;
   break;
  }

  *VAR_93++ = VAR_23;
  *VAR_93++ = VAR_101;

  VAR_91->pos = VAR_93;
  return (int) (VAR_93 - VAR_94);
 }

 case 145: {
  uint64_t VAR_102;

  VAR_95 = FUNC_3(VAR_91, VAR_80);
  if (VAR_95 < 0)
   return VAR_95;

  VAR_102 = VAR_92->payload.pip.cr3;
  VAR_102 >>= VAR_43;
  VAR_102 <<= VAR_44;

  if (VAR_92->payload.pip.nr)
   VAR_102 |= (uint64_t) VAR_42;

  *VAR_93++ = VAR_21;
  *VAR_93++ = VAR_7;
  VAR_93 = FUNC_0(VAR_93, VAR_102, VAR_45);

  VAR_91->pos = VAR_93;
  return (int) (VAR_93 - VAR_94);
 }

 case 132:
  VAR_95 = FUNC_3(VAR_91, VAR_89);
  if (VAR_95 < 0)
   return VAR_95;

  *VAR_93++ = VAR_29;
  VAR_93 = FUNC_0(VAR_93, VAR_92->payload.tsc.tsc,
        VAR_65);

  VAR_91->pos = VAR_93;
  return (int) (VAR_93 - VAR_94);

 case 156:
  VAR_95 = FUNC_3(VAR_91, VAR_72);
  if (VAR_95 < 0)
   return VAR_95;

  *VAR_93++ = VAR_21;
  *VAR_93++ = VAR_1;
  *VAR_93++ = VAR_92->payload.cbr.ratio;
  *VAR_93++ = 0;

  VAR_91->pos = VAR_93;
  return (int) (VAR_93 - VAR_94);

 case 135: {
  uint16_t VAR_103, VAR_104;

  VAR_95 = FUNC_3(VAR_91, VAR_86);
  if (VAR_95 < 0)
   return VAR_95;

  VAR_103 = VAR_92->payload.tma.ctc;
  VAR_104 = VAR_92->payload.tma.fc;

  if (VAR_104 & ~VAR_61)
   return -VAR_70;

  *VAR_93++ = VAR_21;
  *VAR_93++ = VAR_13;
  VAR_93 = FUNC_0(VAR_93, VAR_103, VAR_60);
  *VAR_93++ = 0;
  VAR_93 = FUNC_0(VAR_93, VAR_104, VAR_62);

  VAR_91->pos = VAR_93;
  return (int) (VAR_93 - VAR_94);
 }

 case 149:
  VAR_95 = FUNC_3(VAR_91, VAR_76);
  if (VAR_95 < 0)
   return VAR_95;

  *VAR_93++ = VAR_24;
  *VAR_93++ = VAR_92->payload.mtc.ctc;

  VAR_91->pos = VAR_93;
  return (int) (VAR_93 - VAR_94);

 case 155: {
  uint8_t VAR_105[VAR_38], VAR_106, VAR_107;
  uint64_t VAR_108;

  VAR_108 = (uint8_t) VAR_92->payload.cyc.value;
  VAR_108 <<= VAR_32;

  VAR_105[0] = VAR_20;
  VAR_105[0] |= (uint8_t) VAR_108;

  VAR_108 = VAR_92->payload.cyc.value;
  VAR_108 >>= (8 - VAR_32);
  if (VAR_108)
   VAR_105[0] |= VAR_31;

  for (VAR_107 = 1; VAR_108; ++VAR_107) {

   if (VAR_38 <= VAR_107)
    return -VAR_70;

   VAR_108 <<= VAR_34;

   VAR_105[VAR_107] = (uint8_t) VAR_108;

   VAR_108 >>= 8;
   if (VAR_108)
    VAR_105[VAR_107] |= VAR_33;
  }

  VAR_95 = FUNC_3(VAR_91, VAR_107);
  if (VAR_95 < 0)
   return VAR_95;

  for (VAR_106 = 0; VAR_106 < VAR_107; ++VAR_106)
   *VAR_93++ = VAR_105[VAR_106];

  VAR_91->pos = VAR_93;
  return (int) (VAR_93 - VAR_94);
 }

 case 139:
  VAR_95 = FUNC_3(VAR_91, VAR_85);
  if (VAR_95 < 0)
   return VAR_95;

  *VAR_93++ = VAR_21;
  *VAR_93++ = VAR_12;

  VAR_91->pos = VAR_93;
  return (int) (VAR_93 - VAR_94);

 case 130:
  VAR_95 = FUNC_3(VAR_91, VAR_90);
  if (VAR_95 < 0)
   return VAR_95;

  *VAR_93++ = VAR_21;
  *VAR_93++ = VAR_15;
  VAR_93 = FUNC_0(VAR_93,
        VAR_92->payload.vmcs.base >> VAR_66,
        VAR_67);

  VAR_91->pos = VAR_93;
  return (int) (VAR_93 - VAR_94);

 case 151:
  VAR_95 = FUNC_3(VAR_91, VAR_74);
  if (VAR_95 < 0)
   return VAR_95;

  *VAR_93++ = VAR_21;
  *VAR_93++ = VAR_4;
  *VAR_93++ = VAR_0;
  VAR_93 = FUNC_0(VAR_93, VAR_92->payload.mnt.payload,
        VAR_39);

  VAR_91->pos = VAR_93;
  return (int) (VAR_93 - VAR_94);

 case 154: {
  uint8_t VAR_109;

  VAR_95 = FUNC_3(VAR_91, VAR_73);
  if (VAR_95 < 0)
   return VAR_95;

  VAR_109 = VAR_92->payload.exstop.ip ?
   VAR_3 : VAR_2;

  *VAR_93++ = VAR_21;
  *VAR_93++ = VAR_109;

  VAR_91->pos = VAR_93;
  return (int) (VAR_93 - VAR_94);
 }

 case 148:
  VAR_95 = FUNC_3(VAR_91, VAR_77);
  if (VAR_95 < 0)
   return VAR_95;

  *VAR_93++ = VAR_21;
  *VAR_93++ = VAR_5;
  VAR_93 = FUNC_0(VAR_93, VAR_92->payload.mwait.hints,
        VAR_41);
  VAR_93 = FUNC_0(VAR_93, VAR_92->payload.mwait.ext,
        VAR_40);

  VAR_91->pos = VAR_93;
  return (int) (VAR_93 - VAR_94);

 case 141: {
  uint64_t VAR_110;

  VAR_95 = FUNC_3(VAR_91, VAR_83);
  if (VAR_95 < 0)
   return VAR_95;

  VAR_110 = 0ull;
  VAR_110 |= ((uint64_t) VAR_92->payload.pwre.state <<
       VAR_49) &
   (uint64_t) VAR_48;
  VAR_110 |= ((uint64_t) VAR_92->payload.pwre.sub_state <<
       VAR_51) &
   (uint64_t) VAR_50;

  if (VAR_92->payload.pwre.hw)
   VAR_110 |= (uint64_t) VAR_46;

  *VAR_93++ = VAR_21;
  *VAR_93++ = VAR_10;
  VAR_93 = FUNC_0(VAR_93, VAR_110, VAR_47);

  VAR_91->pos = VAR_93;
  return (int) (VAR_93 - VAR_94);
 }

 case 140: {
  uint64_t VAR_111;

  VAR_95 = FUNC_3(VAR_91, VAR_84);
  if (VAR_95 < 0)
   return VAR_95;

  VAR_111 = 0ull;
  VAR_111 |= ((uint64_t) VAR_92->payload.pwrx.last <<
       VAR_55) &
   (uint64_t) VAR_54;
  VAR_111 |= ((uint64_t) VAR_92->payload.pwrx.deepest <<
       VAR_53) &
   (uint64_t) VAR_52;

  if (VAR_92->payload.pwrx.interrupt)
   VAR_111 |= (uint64_t) VAR_58;
  if (VAR_92->payload.pwrx.store)
   VAR_111 |= (uint64_t) VAR_59;
  if (VAR_92->payload.pwrx.autonomous)
   VAR_111 |= (uint64_t) VAR_57;

  *VAR_93++ = VAR_21;
  *VAR_93++ = VAR_11;
  VAR_93 = FUNC_0(VAR_93, VAR_111, VAR_56);

  VAR_91->pos = VAR_93;
  return (int) (VAR_93 - VAR_94);
 }

 case 142: {
  uint8_t VAR_112, VAR_113;
  int VAR_114;

  VAR_112 = VAR_92->payload.ptw.plc;

  VAR_114 = FUNC_2(VAR_112);
  if (VAR_114 < 0)
   return VAR_114;

  VAR_95 = FUNC_3(VAR_91,
         (unsigned int) (VAR_30 + VAR_114));
  if (VAR_95 < 0)
   return VAR_95;

  VAR_113 = VAR_9;
  VAR_113 |= VAR_112 << VAR_36;

  if (VAR_92->payload.ptw.ip)
   VAR_113 |= (uint8_t) VAR_35;

  *VAR_93++ = VAR_21;
  *VAR_93++ = VAR_113;
  VAR_93 = FUNC_0(VAR_93, VAR_92->payload.ptw.payload, VAR_114);

  VAR_91->pos = VAR_93;
  return (int) (VAR_93 - VAR_94);
 }

 case 131:
 case 152:
  return -VAR_69;
 }

 return -VAR_69;
}
