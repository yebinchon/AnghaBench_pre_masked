
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int va_flags; scalar_t__ va_crtc_addr; } ;
typedef TYPE_1__ video_adapter_t ;
typedef int u_char ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (TYPE_1__*,int ,int ) ;

__attribute__((used)) static int
FUNC_3(video_adapter_t *VAR_5, u_char *VAR_6)
{
    int VAR_7;
    int VAR_8;

    FUNC_2(VAR_5, VAR_4, VAR_0);





    FUNC_1(VAR_2, 0x00);
    VAR_7 = (VAR_5->va_flags & VAR_3) != 0 ? 0 : 2;
    for (VAR_8 = 0; VAR_8 < 256*3; ++VAR_8)
 VAR_6[VAR_8] = FUNC_0(VAR_1) << VAR_7;
    FUNC_0(VAR_5->va_crtc_addr + 6);
    return 0;
}
