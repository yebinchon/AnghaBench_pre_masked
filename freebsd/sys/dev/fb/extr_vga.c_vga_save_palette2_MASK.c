
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
FUNC_3(video_adapter_t *VAR_5, int VAR_6, int VAR_7,
    u_char *VAR_8, u_char *VAR_9, u_char *VAR_10)
{
    int VAR_11;
    int VAR_12;

    FUNC_2(VAR_5, VAR_4, VAR_0);

    FUNC_1(VAR_2, VAR_6);
    VAR_11 = (VAR_5->va_flags & VAR_3) != 0 ? 0 : 2;
    for (VAR_12 = 0; VAR_12 < VAR_7; ++VAR_12) {
 VAR_8[VAR_12] = FUNC_0(VAR_1) << VAR_11;
 VAR_9[VAR_12] = FUNC_0(VAR_1) << VAR_11;
 VAR_10[VAR_12] = FUNC_0(VAR_1) << VAR_11;
    }
    FUNC_0(VAR_5->va_crtc_addr + 6);
    return 0;
}
