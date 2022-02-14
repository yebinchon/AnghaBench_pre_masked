
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_24__ TYPE_8__ ;
typedef struct TYPE_23__ TYPE_7__ ;
typedef struct TYPE_22__ TYPE_6__ ;
typedef struct TYPE_21__ TYPE_5__ ;
typedef struct TYPE_20__ TYPE_4__ ;
typedef struct TYPE_19__ TYPE_3__ ;
typedef struct TYPE_18__ TYPE_2__ ;
typedef struct TYPE_17__ TYPE_1__ ;


struct TYPE_18__ {scalar_t__ prtena; } ;
struct TYPE_20__ {void* u32; TYPE_2__ s; } ;
typedef TYPE_4__ cvmx_usbcx_hprt_t ;
struct TYPE_17__ {int frnum; } ;
struct TYPE_21__ {TYPE_1__ s; void* u32; } ;
typedef TYPE_5__ cvmx_usbcx_hfnum_t ;
struct TYPE_22__ {int u32; } ;
typedef TYPE_6__ cvmx_usbcx_haint_t ;
struct TYPE_19__ {int sof; scalar_t__ hchint; scalar_t__ prtint; scalar_t__ disconnint; scalar_t__ nptxfemp; scalar_t__ ptxfemp; scalar_t__ rxflvl; } ;
struct TYPE_23__ {TYPE_3__ s; void* u32; } ;
typedef TYPE_7__ cvmx_usbcx_gintsts_t ;
typedef int cvmx_usb_status_t ;
typedef int cvmx_usb_state_t ;
struct TYPE_24__ {int frame_number; int init_flags; int index; } ;
typedef TYPE_8__ cvmx_usb_internal_state_t ;


 int FUNC_0 (int,int) ;
 int FUNC_1 (TYPE_8__*,int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_6 () ;
 int FUNC_7 (char*,int *) ;
 int FUNC_8 (int ) ;
 int VAR_3 ;
 int FUNC_9 (TYPE_8__*,int *,int *,int ,int ) ;
 int FUNC_10 (TYPE_8__*,int) ;
 int FUNC_11 (TYPE_8__*) ;
 int FUNC_12 (TYPE_8__*) ;
 void* FUNC_13 (TYPE_8__*,int ) ;
 int FUNC_14 (TYPE_8__*,int ) ;
 int FUNC_15 (TYPE_8__*,int ,void*) ;

cvmx_usb_status_t FUNC_16(cvmx_usb_state_t *VAR_4)
{
    cvmx_usbcx_hfnum_t VAR_5;
    cvmx_usbcx_gintsts_t VAR_6;
    cvmx_usb_internal_state_t *VAR_7 = (cvmx_usb_internal_state_t*)VAR_4;

    FUNC_1(VAR_7, 0);
    FUNC_1(VAR_7, 1*128);
    FUNC_1(VAR_7, 2*128);
    FUNC_1(VAR_7, 3*128);
    FUNC_1(VAR_7, 4*128);

    FUNC_6();
    FUNC_7("%p", VAR_4);


    VAR_5.u32 = FUNC_13(VAR_7, FUNC_4(VAR_7->index));
    if ((VAR_7->frame_number&0x3fff) > VAR_5.s.frnum)
        VAR_7->frame_number += 0x4000;
    VAR_7->frame_number &= ~0x3fffull;
    VAR_7->frame_number |= VAR_5.s.frnum;


    VAR_6.u32 = FUNC_13(VAR_7, FUNC_2(VAR_7->index));


    FUNC_15(VAR_7, FUNC_2(VAR_7->index), VAR_6.u32);

    if (VAR_6.s.rxflvl)
    {




        if (VAR_7->init_flags & VAR_2)
            FUNC_11(VAR_7);
    }
    if (VAR_6.s.ptxfemp || VAR_6.s.nptxfemp)
    {

        if (VAR_7->init_flags & VAR_2)
            FUNC_12(VAR_7);
    }
    if (VAR_6.s.disconnint || VAR_6.s.prtint)
    {
        cvmx_usbcx_hprt_t VAR_8;
        FUNC_9(VAR_7, ((void*)0), ((void*)0),
                                    VAR_0,
                                    VAR_1);

        VAR_8.u32 = FUNC_13(VAR_7, FUNC_5(VAR_7->index));
        VAR_8.s.prtena = 0;
        FUNC_15(VAR_7, FUNC_5(VAR_7->index), VAR_8.u32);
    }
    if (VAR_6.s.hchint)
    {
        cvmx_usbcx_haint_t VAR_9;
        VAR_9.u32 = FUNC_13(VAR_7, FUNC_3(VAR_7->index));
        while (VAR_9.u32)
        {
            int VAR_10;
            FUNC_0(VAR_10, VAR_9.u32);
            VAR_10 = 31 - VAR_10;
            FUNC_10(VAR_7, VAR_10);
            VAR_9.u32 ^= 1<<VAR_10;
        }
    }

    FUNC_14(VAR_7, VAR_6.s.sof);

    FUNC_8(VAR_3);
}
