
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint64_t ;
typedef int cvmx_usb_state_t ;
typedef int cvmx_usb_iso_packet_t ;
typedef int cvmx_usb_internal_state_t ;
typedef int cvmx_usb_callback_func_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 () ;
 int FUNC_1 (char*,int) ;
 int FUNC_2 (int) ;
 int VAR_3 ;
 int FUNC_3 (int *,int,int ,int,scalar_t__,int,int ,int,int,int *,int ,void*) ;
 scalar_t__ FUNC_4 (int) ;

int FUNC_5(cvmx_usb_state_t *VAR_4, int VAR_5,
                                int VAR_6, int VAR_7,
                                int VAR_8,
                                cvmx_usb_iso_packet_t VAR_9[],
                                uint64_t VAR_10, int VAR_11,
                                cvmx_usb_callback_func_t VAR_12,
                                void *VAR_13)
{
    int VAR_14;
    cvmx_usb_internal_state_t *VAR_15 = (cvmx_usb_internal_state_t*)VAR_4;

    FUNC_0();
    FUNC_1("%p", *VAR_4);
    FUNC_1("%d", VAR_5);
    FUNC_1("%d", VAR_6);
    FUNC_1("0x%x", VAR_7);
    FUNC_1("%d", VAR_8);
    FUNC_1("%p", *VAR_9);
    FUNC_1("0x%llx", (unsigned long long)VAR_10);
    FUNC_1("%d", VAR_11);


    if (FUNC_4(VAR_6 < 0))
        FUNC_2(VAR_0);
    if (FUNC_4(VAR_7 & ~(VAR_1 | VAR_2)))
        FUNC_2(VAR_0);
    if (FUNC_4(VAR_8 < 1))
        FUNC_2(VAR_0);
    if (FUNC_4(!VAR_9))
        FUNC_2(VAR_0);
    if (FUNC_4(!VAR_10))
        FUNC_2(VAR_0);
    if (FUNC_4(VAR_11 < 0))
        FUNC_2(VAR_0);

    VAR_14 = FUNC_3(VAR_15, VAR_5,
                                         VAR_3,
                                         VAR_7,
                                         VAR_10,
                                         VAR_11,
                                         0,
                                         VAR_6,
                                         VAR_8,
                                         VAR_9,
                                         VAR_12,
                                         VAR_13);
    FUNC_2(VAR_14);
}
