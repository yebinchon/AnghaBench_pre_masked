
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
typedef int uint32_t ;
struct TYPE_9__ {int pktsts; int bcnt; int chnum; } ;
struct TYPE_10__ {TYPE_1__ s; void* u32; } ;
typedef TYPE_2__ cvmx_usbcx_grxstsph_t ;
struct TYPE_11__ {int index; } ;
typedef TYPE_3__ cvmx_usb_internal_state_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 () ;
 int FUNC_3 (char*,TYPE_3__*) ;
 int FUNC_4 () ;
 int FUNC_5 (int,int ) ;
 void* FUNC_6 (TYPE_3__*,int ) ;
 scalar_t__ FUNC_7 (TYPE_3__*,scalar_t__) ;
 int FUNC_8 (TYPE_3__*,scalar_t__,scalar_t__) ;
 int * FUNC_9 (scalar_t__) ;

__attribute__((used)) static void FUNC_10(cvmx_usb_internal_state_t *VAR_1)
{
    cvmx_usbcx_grxstsph_t VAR_2;
    int VAR_3;
    int VAR_4;
    uint64_t VAR_5;
    uint32_t *VAR_6;

    FUNC_2();
    FUNC_3("%p", VAR_1);

    VAR_2.u32 = FUNC_6(VAR_1, FUNC_0(VAR_1->index));

    if (VAR_2.s.pktsts != 2)
        FUNC_4();

    if (!VAR_2.s.bcnt)
        FUNC_4();

    VAR_3 = VAR_2.s.chnum;
    VAR_4 = VAR_2.s.bcnt;
    if (!VAR_4)
        FUNC_4();


    VAR_5 = FUNC_7(VAR_1, FUNC_1(VAR_1->index) + VAR_3*8);
    VAR_6 = FUNC_9(VAR_5);
    FUNC_8(VAR_1, FUNC_1(VAR_1->index) + VAR_3*8, VAR_5 + VAR_4);


    while (VAR_4 > 0)
    {
        *VAR_6++ = FUNC_6(VAR_1, FUNC_5(VAR_3, VAR_1->index));
        VAR_4 -= 4;
    }
    VAR_0;

    FUNC_4();
}
