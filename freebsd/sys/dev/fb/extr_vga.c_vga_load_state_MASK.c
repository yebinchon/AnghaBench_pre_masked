
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int va_crtc_addr; scalar_t__ va_unit; } ;
typedef TYPE_1__ video_adapter_t ;
typedef int u_char ;
struct TYPE_6__ {scalar_t__ sig; int* regs; } ;
typedef TYPE_2__ adp_state_t ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ VAR_11 ;
 int FUNC_1 (int*,int ) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int,int) ;
 int FUNC_4 (TYPE_1__*,int ,int ) ;
 int VAR_12 ;
 int FUNC_5 () ;
 int FUNC_6 (int) ;
 int FUNC_7 (int ,int) ;

__attribute__((used)) static int
FUNC_8(video_adapter_t *VAR_13, void *VAR_14)
{
    u_char *VAR_15;
    int VAR_16;
    int VAR_17;
    int VAR_18;

    FUNC_4(VAR_13, VAR_9, VAR_2);
    if (((adp_state_t *)VAR_14)->sig != VAR_11)
 return VAR_1;

    VAR_15 = ((adp_state_t *)VAR_14)->regs;
    VAR_16 = VAR_13->va_crtc_addr;





    VAR_17 = FUNC_5();

    FUNC_3(VAR_6, 0x00); FUNC_3(VAR_7, 0x01);
    for (VAR_18 = 0; VAR_18 < 4; ++VAR_18) {
 FUNC_3(VAR_6, VAR_18 + 1);
 FUNC_3(VAR_7, VAR_15[VAR_18 + 5]);
    }
    FUNC_3(VAR_5, VAR_15[9]);
    FUNC_3(VAR_6, 0x00); FUNC_3(VAR_7, 0x03);
    FUNC_3(VAR_16, 0x11);
    FUNC_3(VAR_16 + 1, FUNC_2(VAR_16 + 1) & 0x7F);
    for (VAR_18 = 0; VAR_18 < 25; ++VAR_18) {
 FUNC_3(VAR_16, VAR_18);
 FUNC_3(VAR_16 + 1, VAR_15[VAR_18 + 10]);
    }
    FUNC_2(VAR_16+6);
    for (VAR_18 = 0; VAR_18 < 20; ++VAR_18) {
 FUNC_3(VAR_0, VAR_18);
 FUNC_3(VAR_0, VAR_15[VAR_18 + 35]);
    }
    for (VAR_18 = 0; VAR_18 < 9; ++VAR_18) {
 FUNC_3(VAR_3, VAR_18);
 FUNC_3(VAR_4, VAR_15[VAR_18 + 55]);
    }
    FUNC_2(VAR_16 + 6);
    FUNC_3(VAR_0, 0x20);
    FUNC_6(VAR_17);
    return 0;
}
