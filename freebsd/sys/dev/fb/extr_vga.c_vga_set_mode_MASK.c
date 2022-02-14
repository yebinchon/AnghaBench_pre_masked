
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


struct TYPE_14__ {int vi_flags; } ;
typedef TYPE_1__ video_info_t ;
struct TYPE_15__ {int va_flags; int va_mode; int va_type; } ;
typedef TYPE_2__ video_adapter_t ;
struct TYPE_16__ {int* regs; int sig; } ;
typedef TYPE_3__ adp_state_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,int*,int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ,int,int) ;
 int FUNC_3 (char*,int) ;
 int FUNC_4 (TYPE_2__*,int ,int) ;
 int FUNC_5 (TYPE_3__*) ;
 int FUNC_6 (TYPE_2__*,TYPE_1__*) ;
 scalar_t__ FUNC_7 (TYPE_2__*,int,TYPE_1__*) ;
 int FUNC_8 (TYPE_2__*,TYPE_3__*) ;
 int FUNC_9 (TYPE_2__*,int,int) ;

__attribute__((used)) static int
FUNC_10(video_adapter_t *VAR_6, int VAR_7)
{

    video_info_t VAR_8;
    adp_state_t VAR_9;

    FUNC_4(VAR_6, VAR_3, VAR_1);

    VAR_7 = FUNC_2(VAR_6->va_type,
       VAR_6->va_flags & VAR_2, VAR_7);
    if (FUNC_7(VAR_6, VAR_7, &VAR_8))
 return VAR_0;





    VAR_9.sig = VAR_5;
    FUNC_0(FUNC_1(VAR_7), VAR_9.regs, sizeof(VAR_9.regs));

    switch (VAR_7) {





    case 144: case 134:
 VAR_9.regs[2] = 0x08;
 VAR_9.regs[19] = 0x47;
 goto special_480l;






    case 146: case 136:
 VAR_9.regs[19] = 0x4f;
special_480l:
 VAR_9.regs[9] |= 0xc0;
 VAR_9.regs[16] = 0x08;
 VAR_9.regs[17] = 0x3e;
 VAR_9.regs[26] = 0xea;
 VAR_9.regs[28] = 0xdf;
 VAR_9.regs[31] = 0xe7;
 VAR_9.regs[32] = 0x04;
 goto setup_mode;






    case 150: case 153:
 VAR_9.regs[28] = 87;
 goto special_80x50;






    case 145: case 135:
special_80x50:
 VAR_9.regs[2] = 8;
 VAR_9.regs[19] = 7;
 goto setup_mode;






    case 148: case 147:
    case 137:
    case 168: case 163:
    case 167: case 162:
    case 155: case 152:
    case 154: case 151:
    case 156:

setup_mode:
 FUNC_8(VAR_6, &VAR_9);
 break;

    case 128:

 VAR_9.regs[5-1+0x04] &= 0xf7;
 VAR_9.regs[5-1+0x04] |= 0x04;

 VAR_9.regs[10+0x14] &= 0xbf;

 VAR_9.regs[10+0x17] |= 0x40;

 VAR_9.regs[10+0x13] = 80;

 VAR_9.regs[10+0x11] = 0x2c;
 VAR_9.regs[10+0x06] = 0x0d;
 VAR_9.regs[10+0x07] = 0x3e;
 VAR_9.regs[10+0x10] = 0xea;
 VAR_9.regs[10+0x11] = 0xac;
 VAR_9.regs[10+0x12] = 0xdf;
 VAR_9.regs[10+0x15] = 0xe7;
 VAR_9.regs[10+0x16] = 0x06;

 VAR_9.regs[9] = 0xe3;
 goto setup_grmode;

    case 166: case 161: case 165:
    case 160: case 159:
    case 158: case 149:
    case 164: case 157: case 138:

setup_grmode:
 FUNC_8(VAR_6, &VAR_9);
 break;

    default:
 return VAR_0;
    }

    VAR_6->va_mode = VAR_7;
    VAR_8.vi_flags &= ~VAR_4;
    FUNC_6(VAR_6, &VAR_8);


    FUNC_9(VAR_6, -1, -1);

    return 0;



}
