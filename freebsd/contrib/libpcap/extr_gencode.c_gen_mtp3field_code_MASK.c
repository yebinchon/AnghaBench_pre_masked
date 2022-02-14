
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int u_int ;
struct block {int dummy; } ;
struct TYPE_5__ {int off_sio; int off_opc; int off_dpc; int off_sls; } ;
typedef TYPE_1__ compiler_state_t ;
typedef int bpf_u_int32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 () ;
 int FUNC_1 (TYPE_1__*,char*,...) ;
 struct block* FUNC_2 (TYPE_1__*,int ,int,int ,int,int,int,int) ;

struct block *
FUNC_3(compiler_state_t *VAR_4, int VAR_5, bpf_u_int32 VAR_6,
    bpf_u_int32 VAR_7, int VAR_8)
{
 struct block *VAR_9;
 bpf_u_int32 VAR_10 , VAR_11 , VAR_12;
 u_int VAR_13 = VAR_4->off_sio;
 u_int VAR_14 = VAR_4->off_opc;
 u_int VAR_15 = VAR_4->off_dpc;
 u_int VAR_16 = VAR_4->off_sls;

 switch (VAR_5) {

 case 133:
  VAR_13 += 3;


 case 129:
  if (VAR_4->off_sio == VAR_2)
   FUNC_1(VAR_4, "'sio' supported only on SS7");

  if(VAR_6 > 255)
          FUNC_1(VAR_4, "sio value %u too big; max value = 255",
              VAR_6);
  VAR_9 = FUNC_2(VAR_4, VAR_3, VAR_13, VAR_0, 0xffffffff,
      (u_int)VAR_7, VAR_8, (u_int)VAR_6);
  break;

 case 134:
  VAR_14+=3;
        case 130:
         if (VAR_4->off_opc == VAR_2)
   FUNC_1(VAR_4, "'opc' supported only on SS7");

  if (VAR_6 > 16383)
          FUNC_1(VAR_4, "opc value %u too big; max value = 16383",
              VAR_6);


  VAR_10 = VAR_6 & 0x00003c00;
  VAR_10 = VAR_10 >>10;
  VAR_11 = VAR_6 & 0x000003fc;
  VAR_11 = VAR_11 <<6;
  VAR_12 = VAR_6 & 0x00000003;
  VAR_12 = VAR_12 <<22;
  VAR_6 = VAR_10 + VAR_11 + VAR_12;
  VAR_9 = FUNC_2(VAR_4, VAR_3, VAR_14, VAR_1, 0x00c0ff0f,
      (u_int)VAR_7, VAR_8, (u_int)VAR_6);
  break;

 case 135:
  VAR_15 += 3;


 case 131:
         if (VAR_4->off_dpc == VAR_2)
   FUNC_1(VAR_4, "'dpc' supported only on SS7");

  if (VAR_6 > 16383)
          FUNC_1(VAR_4, "dpc value %u too big; max value = 16383",
              VAR_6);


  VAR_10 = VAR_6 & 0x000000ff;
  VAR_10 = VAR_10 << 24;
  VAR_11 = VAR_6 & 0x00003f00;
  VAR_11 = VAR_11 << 8;
  VAR_6 = VAR_10 + VAR_11;
  VAR_9 = FUNC_2(VAR_4, VAR_3, VAR_15, VAR_1, 0xff3f0000,
      (u_int)VAR_7, VAR_8, (u_int)VAR_6);
  break;

 case 132:
   VAR_16+=3;
 case 128:
         if (VAR_4->off_sls == VAR_2)
   FUNC_1(VAR_4, "'sls' supported only on SS7");

  if (VAR_6 > 15)
           FUNC_1(VAR_4, "sls value %u too big; max value = 15",
               VAR_6);


  VAR_6 = VAR_6 << 4;
  VAR_9 = FUNC_2(VAR_4, VAR_3, VAR_16, VAR_0, 0xf0,
      (u_int)VAR_7,VAR_8, (u_int)VAR_6);
  break;

 default:
  FUNC_0();
 }
 return VAR_9;
}
