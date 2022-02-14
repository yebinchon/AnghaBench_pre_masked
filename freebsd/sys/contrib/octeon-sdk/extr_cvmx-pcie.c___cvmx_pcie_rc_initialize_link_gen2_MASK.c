
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
struct TYPE_7__ {int lnk_enb; } ;
struct TYPE_10__ {int u64; TYPE_1__ s; } ;
typedef TYPE_4__ cvmx_pemx_ctl_status_t ;
struct TYPE_9__ {int rtl; } ;
struct TYPE_11__ {void* u32; TYPE_3__ s; } ;
typedef TYPE_5__ cvmx_pciercx_cfg448_t ;
struct TYPE_8__ {scalar_t__ dlla; int lt; int nlw; } ;
struct TYPE_12__ {TYPE_2__ s; void* u32; } ;
typedef TYPE_6__ cvmx_pciercx_cfg032_t ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 scalar_t__ FUNC_3 (int ) ;
 scalar_t__ FUNC_4 () ;
 void* FUNC_5 (int,int ) ;
 int FUNC_6 (int,int ,void*) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int) ;
 int FUNC_9 (int ,int ) ;

__attribute__((used)) static int FUNC_10(int VAR_1)
{
    uint64_t VAR_2;
    cvmx_pemx_ctl_status_t VAR_3;
    cvmx_pciercx_cfg032_t VAR_4;
    cvmx_pciercx_cfg448_t VAR_5;


    VAR_3.u64 = FUNC_7(FUNC_2(VAR_1));
    VAR_3.s.lnk_enb = 1;
    FUNC_9(FUNC_2(VAR_1), VAR_3.u64);


    VAR_2 = FUNC_4();
    do
    {
        if (FUNC_4() - VAR_2 > FUNC_3(VAR_0))
            return -1;
        FUNC_8(10000);
        VAR_4 = FUNC_5(VAR_1, FUNC_0(VAR_1));
    } while ((VAR_4 == 0) || (VAR_4 == 1));






    VAR_5 = FUNC_5(VAR_1, FUNC_1(VAR_1));
    switch (VAR_4)
    {
        case 1:
            VAR_5 = 1677;
            break;
        case 2:
            VAR_5 = 867;
            break;
        case 4:
            VAR_5 = 462;
            break;
        case 8:
            VAR_5 = 258;
            break;
    }
    FUNC_6(VAR_1, FUNC_1(VAR_1), VAR_5);

    return 0;
}
