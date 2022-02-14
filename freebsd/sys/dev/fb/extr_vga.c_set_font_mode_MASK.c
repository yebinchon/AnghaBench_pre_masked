
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ va_type; scalar_t__ va_crtc_addr; int va_mode; } ;
typedef TYPE_1__ video_adapter_t ;
typedef int u_char ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int* FUNC_0 (int ) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__,int) ;
 int FUNC_3 (scalar_t__,int) ;
 int FUNC_4 () ;
 int FUNC_5 (int) ;

__attribute__((used)) static void
FUNC_6(video_adapter_t *VAR_6, u_char *VAR_7)
{
    u_char *VAR_8;
    int VAR_9;

    VAR_9 = FUNC_4();


    if (VAR_6->va_type == VAR_3) {
 FUNC_2(VAR_4, 0x02); VAR_7[0] = FUNC_1(VAR_5);
 FUNC_2(VAR_4, 0x04); VAR_7[1] = FUNC_1(VAR_5);
 FUNC_2(VAR_1, 0x04); VAR_7[2] = FUNC_1(VAR_2);
 FUNC_2(VAR_1, 0x05); VAR_7[3] = FUNC_1(VAR_2);
 FUNC_2(VAR_1, 0x06); VAR_7[4] = FUNC_1(VAR_2);
 FUNC_1(VAR_6->va_crtc_addr + 6);
 FUNC_2(VAR_0, 0x10); VAR_7[5] = FUNC_1(VAR_0 + 1);
    } else {




 VAR_8 = FUNC_0(VAR_6->va_mode);
 VAR_7[0] = VAR_8[5 + 0x02 - 1];
 VAR_7[1] = VAR_8[5 + 0x04 - 1];
 VAR_7[2] = VAR_8[55 + 0x04];
 VAR_7[3] = VAR_8[55 + 0x05];
 VAR_7[4] = VAR_8[55 + 0x06];
 VAR_7[5] = VAR_8[35 + 0x10];
    }


    FUNC_1(VAR_6->va_crtc_addr + 6);
    FUNC_2(VAR_0, 0x10); FUNC_2(VAR_0, VAR_7[5] & ~0x01);
    FUNC_1(VAR_6->va_crtc_addr + 6);
    FUNC_2(VAR_0, 0x20);
    FUNC_3(VAR_4, 0x0402);
    FUNC_3(VAR_4, 0x0704);



    FUNC_3(VAR_1, 0x0204);
    FUNC_3(VAR_1, 0x0005);
    FUNC_3(VAR_1, 0x0406);


    FUNC_5(VAR_9);
}
