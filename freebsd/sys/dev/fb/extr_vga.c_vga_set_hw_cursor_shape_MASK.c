
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int va_type; int va_crtc_addr; } ;
typedef TYPE_1__ video_adapter_t ;


 int VAR_0 ;





 int FUNC_0 (int ,int) ;
 int FUNC_1 () ;
 int FUNC_2 (int) ;
 int VAR_1 ;

__attribute__((used)) static int
FUNC_3(video_adapter_t *VAR_2, int VAR_3, int VAR_4,
   int VAR_5, int VAR_6)
{
    int VAR_7;

    if (!VAR_1)
 return VAR_0;

    VAR_7 = FUNC_1();
    switch (VAR_2->va_type) {
    case 128:
    case 132:
    case 129:
    case 130:
    default:
 if (VAR_4 <= 0) {

     FUNC_0(VAR_2->va_crtc_addr, 10);
     FUNC_0(VAR_2->va_crtc_addr + 1, 32);
     FUNC_0(VAR_2->va_crtc_addr, 11);
     FUNC_0(VAR_2->va_crtc_addr + 1, 0);
 } else {
     FUNC_0(VAR_2->va_crtc_addr, 10);
     FUNC_0(VAR_2->va_crtc_addr + 1, VAR_5 - VAR_3 - VAR_4);
     FUNC_0(VAR_2->va_crtc_addr, 11);
     FUNC_0(VAR_2->va_crtc_addr + 1, VAR_5 - VAR_3 - 1);
 }
 break;
    case 131:
 if (VAR_4 <= 0) {

     FUNC_0(VAR_2->va_crtc_addr, 10);
     FUNC_0(VAR_2->va_crtc_addr + 1, VAR_5);
     FUNC_0(VAR_2->va_crtc_addr, 11);
     FUNC_0(VAR_2->va_crtc_addr + 1, 0);
 } else {
     FUNC_0(VAR_2->va_crtc_addr, 10);
     FUNC_0(VAR_2->va_crtc_addr + 1, VAR_5 - VAR_3 - VAR_4);
     FUNC_0(VAR_2->va_crtc_addr, 11);
     FUNC_0(VAR_2->va_crtc_addr + 1, VAR_5 - VAR_3);
 }
 break;
    }
    FUNC_2(VAR_7);

    return 0;
}
