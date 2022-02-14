
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int va_type; int va_crtc_addr; } ;
typedef TYPE_1__ video_adapter_t ;


 int VAR_0 ;
 int VAR_1 ;





 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (TYPE_1__*,int ,int ) ;

__attribute__((used)) static int
FUNC_3(video_adapter_t *VAR_3, int VAR_4)
{
    FUNC_2(VAR_3, VAR_2, VAR_1);

    switch (VAR_3->va_type) {
    case 131:
    case 128:
 FUNC_0(VAR_3->va_crtc_addr + 6);
 FUNC_1(VAR_0, 0x31); FUNC_1(VAR_0, VAR_4 & 0xff);
 break;
    case 132:
 FUNC_1(VAR_3->va_crtc_addr + 5, VAR_4 & 0x0f);
 break;
    case 129:
    case 130:
    default:
 break;
    }
    return 0;
}
