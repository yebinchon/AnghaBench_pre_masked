
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int va_flags; scalar_t__ va_crtc_addr; } ;
typedef TYPE_1__ video_adapter_t ;
typedef int u_char ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (TYPE_1__*,int ,int ) ;

__attribute__((used)) static int
FUNC_3(video_adapter_t *VAR_7, u_char *VAR_8)
{
    int VAR_9;
    int VAR_10;

    FUNC_2(VAR_7, VAR_6, VAR_1);

    FUNC_1(VAR_4, 0xff);
    FUNC_1(VAR_3, 0x00);
    VAR_9 = (VAR_7->va_flags & VAR_5) != 0 ? 0 : 2;
    for (VAR_10 = 0; VAR_10 < 256*3; ++VAR_10)
 FUNC_1(VAR_2, VAR_8[VAR_10] >> VAR_9);
    FUNC_0(VAR_7->va_crtc_addr + 6);
    FUNC_1(VAR_0, 0x20);
    return 0;
}
