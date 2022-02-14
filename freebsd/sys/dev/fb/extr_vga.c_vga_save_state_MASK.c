
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int vi_flags; int vi_width; int vi_cwidth; int vi_height; int vi_cheight; } ;
typedef TYPE_1__ video_info_t ;
struct TYPE_9__ {int va_crtc_addr; int va_mode; } ;
typedef TYPE_2__ video_adapter_t ;
typedef int u_char ;
struct TYPE_10__ {int* regs; int sig; } ;
typedef TYPE_3__ adp_state_t ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_1 (int*,int ) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int,int) ;
 int FUNC_4 (TYPE_2__*,int ,int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 () ;
 int FUNC_7 (int) ;
 scalar_t__ FUNC_8 (TYPE_2__*,int ,TYPE_1__*) ;

__attribute__((used)) static int
FUNC_9(video_adapter_t *VAR_12, void *VAR_13, size_t VAR_14)
{
    video_info_t VAR_15;
    u_char *VAR_16;
    int VAR_17;
    int VAR_18, VAR_19;
    int VAR_20;

    if (VAR_14 == 0) {

 FUNC_4(VAR_12, VAR_8, 0);
 return sizeof(adp_state_t);
    } else {
 FUNC_4(VAR_12, VAR_8, VAR_2);
 if (VAR_14 < sizeof(adp_state_t))
     return VAR_1;
    }

    ((adp_state_t *)VAR_13)->sig = VAR_11;
    VAR_16 = ((adp_state_t *)VAR_13)->regs;
    FUNC_1(VAR_16, VAR_10);
    VAR_17 = VAR_12->va_crtc_addr;

    VAR_20 = FUNC_6();

    FUNC_3(VAR_6, 0x00); FUNC_3(VAR_7, 0x01);
    for (VAR_18 = 0, VAR_19 = 5; VAR_18 < 4; VAR_18++) {
 FUNC_3(VAR_6, VAR_18 + 1);
 VAR_16[VAR_19++] = FUNC_2(VAR_7);
    }
    VAR_16[9] = FUNC_2(VAR_5 + 10);
    FUNC_3(VAR_6, 0x00); FUNC_3(VAR_7, 0x03);

    for (VAR_18 = 0, VAR_19 = 10; VAR_18 < 25; VAR_18++) {
 FUNC_3(VAR_17, VAR_18);
 VAR_16[VAR_19++] = FUNC_2(VAR_17 + 1);
    }
    for (VAR_18 = 0, VAR_19 = 35; VAR_18 < 20; VAR_18++) {
        FUNC_2(VAR_17 + 6);
 FUNC_3(VAR_0, VAR_18);
 VAR_16[VAR_19++] = FUNC_2(VAR_0 + 1);
    }
    for (VAR_18 = 0, VAR_19 = 55; VAR_18 < 9; VAR_18++) {
 FUNC_3(VAR_3, VAR_18);
 VAR_16[VAR_19++] = FUNC_2(VAR_4);
    }
    FUNC_2(VAR_17 + 6);
    FUNC_3(VAR_0, 0x20);

    FUNC_7(VAR_20);


    if (FUNC_8(VAR_12, VAR_12->va_mode, &VAR_15) == 0) {
 if (VAR_15.vi_flags & VAR_9) {
     VAR_16[0] = VAR_15.vi_width/VAR_15.vi_cwidth;
     VAR_16[1] = VAR_15.vi_height/VAR_15.vi_cheight - 1;
 } else {
     VAR_16[0] = VAR_15.vi_width;
     VAR_16[1] = VAR_15.vi_height - 1;
 }
 VAR_16[2] = VAR_15.vi_cheight;
    }
    return 0;
}
