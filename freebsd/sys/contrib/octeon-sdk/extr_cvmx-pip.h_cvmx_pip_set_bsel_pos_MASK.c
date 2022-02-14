
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int pos0_val; int pos0; int pos1_val; int pos1; int pos2_val; int pos2; int pos3_val; int pos3; int pos4_val; int pos4; int pos5_val; int pos5; int pos6_val; int pos6; int pos7_val; int pos7; } ;
struct TYPE_4__ {int u64; TYPE_1__ s; } ;
typedef TYPE_2__ cvmx_pip_bsel_ext_posx_t ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (char*,int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static inline void FUNC_5(int VAR_1, int VAR_2, int VAR_3)
{
    cvmx_pip_bsel_ext_posx_t VAR_4;


    if (!FUNC_4(VAR_0))
        return;

    if (VAR_1 < 0 || VAR_1 > 3)
    {
        FUNC_1("ERROR: cvmx_pip_set_bsel_pos: Invalid Bit-Select Extractor (%d) passed\n", VAR_1);
        return;
    }

    VAR_4.u64 = FUNC_2(FUNC_0(VAR_1));
    switch(VAR_2)
    {
        case 0:
            VAR_4.s.pos0_val = 1;
            VAR_4.s.pos0 = VAR_3 & 0x7f;
            break;
        case 1:
            VAR_4.s.pos1_val = 1;
            VAR_4.s.pos1 = VAR_3 & 0x7f;
            break;
        case 2:
            VAR_4.s.pos2_val = 1;
            VAR_4.s.pos2 = VAR_3 & 0x7f;
            break;
        case 3:
            VAR_4.s.pos3_val = 1;
            VAR_4.s.pos3 = VAR_3 & 0x7f;
            break;
        case 4:
            VAR_4.s.pos4_val = 1;
            VAR_4.s.pos4 = VAR_3 & 0x7f;
            break;
        case 5:
            VAR_4.s.pos5_val = 1;
            VAR_4.s.pos5 = VAR_3 & 0x7f;
            break;
        case 6:
            VAR_4.s.pos6_val = 1;
            VAR_4.s.pos6 = VAR_3 & 0x7f;
            break;
        case 7:
            VAR_4.s.pos7_val = 1;
            VAR_4.s.pos7 = VAR_3 & 0x7f;
            break;
        default:
            FUNC_1("Warning: cvmx_pip_set_bsel_pos: Invalid pos(%d)\n", VAR_2);
            break;
    }
    FUNC_3(FUNC_0(VAR_1), VAR_4.u64);
}
