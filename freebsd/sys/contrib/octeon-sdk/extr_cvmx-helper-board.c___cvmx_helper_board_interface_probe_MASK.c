
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int mode; } ;
struct TYPE_5__ {void* u64; TYPE_1__ cn56xx; } ;
typedef TYPE_2__ cvmx_pcsx_miscx_ctl_reg_t ;
struct TYPE_6__ {int board_type; } ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int,int) ;
 scalar_t__ FUNC_1 (int) ;
 void* FUNC_2 (int ) ;
 TYPE_3__* FUNC_3 () ;
 int FUNC_4 (int ,void*) ;
 scalar_t__ FUNC_5 (char*) ;

int FUNC_6(int VAR_3, int VAR_4)
{
    switch (FUNC_3()->board_type)
    {
        case 140:
        case 132:
        case 130:
        case 131:
            if (VAR_3 == 0)
                return 2;
     break;
        case 141:
            if (VAR_3 == 0)
                return 2;
     break;
        case 128:
            if (VAR_3 == 0)
                return 0;
     break;


        case 135:
            if (VAR_3 == 1)
                return 0;
     break;
        case 136:




     break;
        case 134:

     if (VAR_3 == 3)
  return 0;
     break;
        case 133:
            return 1;

        case 129:
            if (VAR_3 == 0)
                return 2;
    }




    return VAR_4;
}
