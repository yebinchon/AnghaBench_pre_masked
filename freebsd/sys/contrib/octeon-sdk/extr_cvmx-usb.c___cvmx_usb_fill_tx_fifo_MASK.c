
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_22__ TYPE_9__ ;
typedef struct TYPE_21__ TYPE_8__ ;
typedef struct TYPE_20__ TYPE_7__ ;
typedef struct TYPE_19__ TYPE_6__ ;
typedef struct TYPE_18__ TYPE_5__ ;
typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


struct TYPE_17__ {int xfersize; } ;
struct TYPE_18__ {TYPE_4__ s; void* u32; } ;
typedef TYPE_5__ cvmx_usbcx_hctsizx_t ;
struct TYPE_14__ {scalar_t__ compsplt; scalar_t__ spltena; } ;
struct TYPE_19__ {TYPE_1__ s; void* u32; } ;
typedef TYPE_6__ cvmx_usbcx_hcspltx_t ;
struct TYPE_15__ {scalar_t__ epdir; scalar_t__ eptype; } ;
struct TYPE_20__ {TYPE_2__ s; void* u32; } ;
typedef TYPE_7__ cvmx_usbcx_hccharx_t ;
struct TYPE_21__ {size_t head; TYPE_3__* entry; } ;
typedef TYPE_8__ cvmx_usb_tx_fifo_t ;
struct TYPE_22__ {int index; TYPE_8__ nonperiodic; TYPE_8__ periodic; } ;
typedef TYPE_9__ cvmx_usb_internal_state_t ;
struct TYPE_16__ {int channel; int size; int address; } ;


 int FUNC_0 (int,int ) ;
 int FUNC_1 (int,int ) ;
 int FUNC_2 (int,int ) ;
 scalar_t__ FUNC_3 (int ) ;
 scalar_t__ VAR_0 ;
 int FUNC_4 () ;
 int FUNC_5 (char*,...) ;
 int FUNC_6 () ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 size_t VAR_3 ;
 int FUNC_7 (TYPE_9__*) ;
 void* FUNC_8 (TYPE_9__*,int ) ;
 int FUNC_9 (TYPE_9__*,scalar_t__) ;

__attribute__((used)) static void FUNC_10(cvmx_usb_internal_state_t *VAR_4, int VAR_5)
{
    cvmx_usbcx_hccharx_t VAR_6;
    cvmx_usbcx_hcspltx_t VAR_7;
    cvmx_usbcx_hctsizx_t VAR_8;
    cvmx_usb_tx_fifo_t *VAR_9;

    FUNC_4();
    FUNC_5("%p", VAR_4);
    FUNC_5("%d", VAR_5);


    VAR_6.u32 = FUNC_8(VAR_4, FUNC_0(VAR_5, VAR_4->index));
    if (VAR_6.s.epdir != VAR_0)
        FUNC_6();


    VAR_7.u32 = FUNC_8(VAR_4, FUNC_1(VAR_5, VAR_4->index));
    if (VAR_7.s.spltena && VAR_7.s.compsplt)
        FUNC_6();


    VAR_8.u32 = FUNC_8(VAR_4, FUNC_2(VAR_5, VAR_4->index));
    if (!VAR_8.s.xfersize)
        FUNC_6();

    if ((VAR_6.s.eptype == VAR_1) ||
        (VAR_6.s.eptype == VAR_2))
        VAR_9 = &VAR_4->periodic;
    else
        VAR_9 = &VAR_4->nonperiodic;

    VAR_9->entry[VAR_9->head].channel = VAR_5;
    VAR_9->entry[VAR_9->head].address = FUNC_9(VAR_4, FUNC_3(VAR_4->index) + VAR_5*8);
    VAR_9->entry[VAR_9->head].size = (VAR_8.s.xfersize+3)>>2;
    VAR_9->head++;
    if (VAR_9->head > VAR_3)
        VAR_9->head = 0;

    FUNC_7(VAR_4);

    FUNC_6();
}
