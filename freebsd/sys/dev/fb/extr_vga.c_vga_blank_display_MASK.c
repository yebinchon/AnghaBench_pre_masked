
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int va_type; int va_crtc_addr; } ;
typedef TYPE_1__ video_adapter_t ;
typedef int u_char ;


 int VAR_0 ;





 int VAR_1 ;
 int VAR_2 ;




 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 () ;
 int FUNC_3 (int) ;

__attribute__((used)) static int
FUNC_4(video_adapter_t *VAR_3, int VAR_4)
{
    u_char VAR_5;
    int VAR_6;

    VAR_6 = FUNC_2();
    switch (VAR_3->va_type) {
    case 132:
 switch (VAR_4) {
 case 128:
 case 129:
     FUNC_1(VAR_1, 0x01);
     VAR_5 = FUNC_0(VAR_2);
     FUNC_1(VAR_1, 0x01);
     FUNC_1(VAR_2, VAR_5 | 0x20);
     FUNC_1(VAR_3->va_crtc_addr, 0x17);
     VAR_5 = FUNC_0(VAR_3->va_crtc_addr + 1);
     FUNC_1(VAR_3->va_crtc_addr + 1, VAR_5 & ~0x80);
     break;
 case 131:
     FUNC_1(VAR_1, 0x01);
     VAR_5 = FUNC_0(VAR_2);
     FUNC_1(VAR_1, 0x01);
     FUNC_1(VAR_2, VAR_5 | 0x20);
     break;
 case 130:
     FUNC_1(VAR_1, 0x01);
     VAR_5 = FUNC_0(VAR_2);
     FUNC_1(VAR_1, 0x01);
     FUNC_1(VAR_2, VAR_5 & 0xDF);
     FUNC_1(VAR_3->va_crtc_addr, 0x17);
     VAR_5 = FUNC_0(VAR_3->va_crtc_addr + 1);
     FUNC_1(VAR_3->va_crtc_addr + 1, VAR_5 | 0x80);
     break;
 }
 break;

    case 135:

 FUNC_3(VAR_6);
 return VAR_0;

    case 136:
 switch (VAR_4) {
 case 128:
 case 129:
 case 131:
     FUNC_1(VAR_3->va_crtc_addr + 4, 0x25);
     break;
 case 130:
     FUNC_1(VAR_3->va_crtc_addr + 4, 0x2d);
     break;
 }
 break;

    case 133:
    case 134:
 switch (VAR_4) {
 case 128:
 case 129:
 case 131:
     FUNC_1(VAR_3->va_crtc_addr + 4, 0x21);
     break;
 case 130:
     FUNC_1(VAR_3->va_crtc_addr + 4, 0x29);
     break;
 }
 break;
    default:
 break;
    }
    FUNC_3(VAR_6);

    return 0;
}
