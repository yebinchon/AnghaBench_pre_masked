
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ va_crtc_addr; } ;
typedef TYPE_1__ video_adapter_t ;
typedef int u_char ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 () ;
 int FUNC_4 (int) ;

__attribute__((used)) static void
FUNC_5(video_adapter_t *VAR_6, u_char *VAR_7)
{
    int VAR_8;

    VAR_8 = FUNC_3();


    FUNC_0(VAR_6->va_crtc_addr + 6);
    FUNC_1(VAR_0, 0x10); FUNC_1(VAR_0, VAR_7[5]);
    FUNC_0(VAR_6->va_crtc_addr + 6);
    FUNC_1(VAR_0, 0x20);
    FUNC_2(VAR_4, 0x0002 | (VAR_7[0] << 8));
    FUNC_2(VAR_4, 0x0004 | (VAR_7[1] << 8));



    FUNC_2(VAR_1, 0x0004 | (VAR_7[2] << 8));
    FUNC_2(VAR_1, 0x0005 | (VAR_7[3] << 8));
    if (VAR_6->va_crtc_addr == VAR_3)
        FUNC_2(VAR_1, 0x0006 | (((VAR_7[4] & 0x03) | 0x08)<<8));
    else
        FUNC_2(VAR_1, 0x0006 | (((VAR_7[4] & 0x03) | 0x0c)<<8));


    FUNC_4(VAR_8);
}
