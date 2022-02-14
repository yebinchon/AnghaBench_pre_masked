
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
typedef int cvmx_usb_state_t ;
typedef int cvmx_usb_internal_state_t ;
struct TYPE_4__ {int request_type; int length; } ;
struct TYPE_5__ {TYPE_1__ s; } ;
typedef TYPE_2__ cvmx_usb_control_header_t ;
typedef int cvmx_usb_callback_func_t ;


 int VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 (char*,int) ;
 int FUNC_2 (int) ;
 int VAR_1 ;
 int FUNC_3 (int *,int,int ,int ,scalar_t__,int,scalar_t__,int ,int ,int *,int ,void*) ;
 int FUNC_4 (int ) ;
 TYPE_2__* FUNC_5 (scalar_t__) ;
 scalar_t__ FUNC_6 (int) ;

int FUNC_7(cvmx_usb_state_t *VAR_2, int VAR_3,
                            uint64_t VAR_4,
                            uint64_t VAR_5, int VAR_6,
                            cvmx_usb_callback_func_t VAR_7,
                            void *VAR_8)
{
    int VAR_9;
    cvmx_usb_internal_state_t *VAR_10 = (cvmx_usb_internal_state_t*)VAR_2;
    cvmx_usb_control_header_t *VAR_11 = FUNC_5(VAR_4);

    FUNC_0();
    FUNC_1("%p", *VAR_2);
    FUNC_1("%d", VAR_3);
    FUNC_1("0x%llx", (unsigned long long)VAR_4);
    FUNC_1("0x%llx", (unsigned long long)VAR_5);
    FUNC_1("%d", VAR_6);


    if (FUNC_6(!VAR_4))
        FUNC_2(VAR_0);

    if (FUNC_6(VAR_5 && (VAR_6 < 0)))
        FUNC_2(VAR_0);
    if (FUNC_6(!VAR_5 && (VAR_6 != 0)))
        FUNC_2(VAR_0);
    if ((VAR_11->s.request_type & 0x80) == 0)
        VAR_6 = FUNC_4(VAR_11->s.length);

    VAR_9 = FUNC_3(VAR_10, VAR_3,
                                         VAR_1,
                                         0,
                                         VAR_5,
                                         VAR_6,
                                         VAR_4,
                                         0,
                                         0,
                                         ((void*)0),
                                         VAR_7,
                                         VAR_8);
    FUNC_2(VAR_9);
}
