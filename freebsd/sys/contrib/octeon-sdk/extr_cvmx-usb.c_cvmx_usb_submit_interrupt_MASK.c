
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint64_t ;
typedef int cvmx_usb_state_t ;
typedef int cvmx_usb_internal_state_t ;
typedef int cvmx_usb_callback_func_t ;


 int VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 (char*,int) ;
 int FUNC_2 (int) ;
 int VAR_1 ;
 int FUNC_3 (int *,int,int ,int ,scalar_t__,int,int ,int ,int ,int *,int ,void*) ;
 scalar_t__ FUNC_4 (int) ;

int FUNC_5(cvmx_usb_state_t *VAR_2, int VAR_3,
                              uint64_t VAR_4, int VAR_5,
                              cvmx_usb_callback_func_t VAR_6,
                              void *VAR_7)
{
    int VAR_8;
    cvmx_usb_internal_state_t *VAR_9 = (cvmx_usb_internal_state_t*)VAR_2;

    FUNC_0();
    FUNC_1("%p", *VAR_2);
    FUNC_1("%d", VAR_3);
    FUNC_1("0x%llx", (unsigned long long)VAR_4);
    FUNC_1("%d", VAR_5);


    if (FUNC_4(!VAR_4))
        FUNC_2(VAR_0);
    if (FUNC_4(VAR_5 < 0))
        FUNC_2(VAR_0);

    VAR_8 = FUNC_3(VAR_9, VAR_3,
                                         VAR_1,
                                         0,
                                         VAR_4,
                                         VAR_5,
                                         0,
                                         0,
                                         0,
                                         ((void*)0),
                                         VAR_6,
                                         VAR_7);
    FUNC_2(VAR_8);
}
