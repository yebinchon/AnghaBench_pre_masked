
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_9__ ;
typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_11__ {int ptxfspcavail; } ;
struct TYPE_13__ {TYPE_1__ s; void* u32; } ;
typedef TYPE_3__ cvmx_usbcx_hptxsts_t ;
struct TYPE_12__ {int nptxfspcavail; } ;
struct TYPE_14__ {TYPE_2__ s; void* u32; } ;
typedef TYPE_4__ cvmx_usbcx_gnptxsts_t ;
struct TYPE_16__ {scalar_t__ head; scalar_t__ tail; } ;
struct TYPE_15__ {int index; TYPE_9__ nonperiodic; TYPE_9__ periodic; } ;
typedef TYPE_5__ cvmx_usb_internal_state_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 () ;
 int FUNC_4 (char*,TYPE_5__*) ;
 int FUNC_5 () ;
 int FUNC_6 (int ,int ,int ,int) ;
 scalar_t__ FUNC_7 (TYPE_5__*,TYPE_9__*,int ) ;
 void* FUNC_8 (TYPE_5__*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static void FUNC_9(cvmx_usb_internal_state_t *VAR_3)
{
    FUNC_3();
    FUNC_4("%p", VAR_3);

    if (VAR_3->periodic.head != VAR_3->periodic.tail)
    {
        cvmx_usbcx_hptxsts_t VAR_4;
        VAR_4.u32 = FUNC_8(VAR_3, FUNC_2(VAR_3->index));
        if (FUNC_7(VAR_3, &VAR_3->periodic, VAR_4.s.ptxfspcavail))
            FUNC_6(FUNC_0(VAR_3->index), VAR_0, VAR_2, 1);
        else
            FUNC_6(FUNC_0(VAR_3->index), VAR_0, VAR_2, 0);
    }

    if (VAR_3->nonperiodic.head != VAR_3->nonperiodic.tail)
    {
        cvmx_usbcx_gnptxsts_t VAR_5;
        VAR_5.u32 = FUNC_8(VAR_3, FUNC_1(VAR_3->index));
        if (FUNC_7(VAR_3, &VAR_3->nonperiodic, VAR_5.s.nptxfspcavail))
            FUNC_6(FUNC_0(VAR_3->index), VAR_0, VAR_1, 1);
        else
            FUNC_6(FUNC_0(VAR_3->index), VAR_0, VAR_1, 0);
    }

    FUNC_5();
}
