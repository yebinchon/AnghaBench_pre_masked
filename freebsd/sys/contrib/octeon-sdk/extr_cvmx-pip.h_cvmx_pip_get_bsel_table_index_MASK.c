
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_7__ ;
typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_10__ {int addr; } ;
struct TYPE_11__ {TYPE_1__ s; } ;
struct TYPE_14__ {TYPE_2__ packet_ptr; } ;
typedef TYPE_5__ cvmx_wqe_t ;
struct TYPE_12__ {int pos0; int pos1; int pos2; int pos3; int pos4; int pos5; int pos6; int pos7; } ;
struct TYPE_15__ {TYPE_3__ s; void* u64; } ;
typedef TYPE_6__ cvmx_pip_bsel_ext_posx_t ;
struct TYPE_13__ {scalar_t__ offset; int skip; } ;
struct TYPE_16__ {TYPE_4__ s; void* u64; } ;
typedef TYPE_7__ cvmx_pip_bsel_ext_cfgx_t ;


 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int VAR_0 ;
 scalar_t__ FUNC_2 (int ) ;
 void* FUNC_3 (int ) ;
 int FUNC_4 (TYPE_5__*) ;
 int FUNC_5 (int ) ;

__attribute__((used)) static inline int FUNC_6(cvmx_wqe_t *VAR_1)
{
    int VAR_2 = FUNC_4(VAR_1) & 0x3;

    int VAR_3;
    int VAR_4;
    cvmx_pip_bsel_ext_cfgx_t VAR_5;
    cvmx_pip_bsel_ext_posx_t VAR_6;


    if (!FUNC_5(VAR_0))
        return -1;

    VAR_5.u64 = FUNC_3(FUNC_0(VAR_2));
    VAR_6.u64 = FUNC_3(FUNC_1(VAR_2));

    VAR_3 = 0;
    for (VAR_4 = 0; VAR_4 < 8; VAR_4++)
    {
        char *VAR_7 = (char *)FUNC_2(VAR_1->packet_ptr.s.addr);
        int VAR_8 = 0;
        int VAR_9;

        VAR_7 += VAR_5.s.skip;
        switch(VAR_4)
        {
            case 0:
                VAR_7 += (VAR_6.s.pos0 >> 3);
                VAR_8 = 7 - (VAR_6.s.pos0 & 0x3);
                break;
            case 1:
                VAR_7 += (VAR_6.s.pos1 >> 3);
                VAR_8 = 7 - (VAR_6.s.pos1 & 0x3);
                break;
            case 2:
                VAR_7 += (VAR_6.s.pos2 >> 3);
                VAR_8 = 7 - (VAR_6.s.pos2 & 0x3);
                break;
            case 3:
                VAR_7 += (VAR_6.s.pos3 >> 3);
                VAR_8 = 7 - (VAR_6.s.pos3 & 0x3);
                break;
            case 4:
                VAR_7 += (VAR_6.s.pos4 >> 3);
                VAR_8 = 7 - (VAR_6.s.pos4 & 0x3);
                break;
            case 5:
                VAR_7 += (VAR_6.s.pos5 >> 3);
                VAR_8 = 7 - (VAR_6.s.pos5 & 0x3);
                break;
            case 6:
                VAR_7 += (VAR_6.s.pos6 >> 3);
                VAR_8 = 7 - (VAR_6.s.pos6 & 0x3);
                break;
            case 7:
                VAR_7 += (VAR_6.s.pos7 >> 3);
                VAR_8 = 7 - (VAR_6.s.pos7 & 0x3);
                break;
        }
        VAR_9 = (*VAR_7 >> VAR_8) & 1;
        VAR_3 |= VAR_9 << VAR_4;
    }
    VAR_3 += VAR_5.s.offset;
    VAR_3 &= 0x1ff;
    return VAR_3;
}
