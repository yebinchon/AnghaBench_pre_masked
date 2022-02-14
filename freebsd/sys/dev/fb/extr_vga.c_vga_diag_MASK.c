
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;
typedef struct TYPE_13__ TYPE_11__ ;
typedef struct TYPE_12__ TYPE_10__ ;


struct TYPE_14__ {scalar_t__ vi_mode; } ;
typedef TYPE_1__ video_info_t ;
struct TYPE_15__ {int va_flags; int va_initial_mode; scalar_t__ va_type; int va_unit; char* va_name; } ;
typedef TYPE_2__ video_adapter_t ;
typedef int u_char ;
struct TYPE_13__ {int * regs; } ;
struct TYPE_12__ {int * regs; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 TYPE_11__ VAR_9 ;
 TYPE_10__ VAR_10 ;
 TYPE_1__* VAR_11 ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (int ,TYPE_2__*,int) ;
 int FUNC_3 (int ,TYPE_2__*,TYPE_1__*,int) ;
 int * FUNC_4 (scalar_t__) ;
 int FUNC_5 (char*,...) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int VAR_12 ;
 int FUNC_8 (int ) ;
 int FUNC_9 (TYPE_2__*,int,TYPE_1__*) ;
 int VAR_13 ;
 int * VAR_14 ;
 int VAR_15 ;

__attribute__((used)) static int
FUNC_10(video_adapter_t *VAR_16, int VAR_17)
{
    u_char *VAR_18;





    if (!VAR_13)
 return VAR_0;
    FUNC_2(VAR_6, VAR_16, VAR_17);
    if ((VAR_16->va_type != VAR_2) && (VAR_16->va_type != VAR_3))
 return 0;

    if (VAR_14 == ((void*)0))
 FUNC_5("vga%d: %s: WARNING: video mode switching is not "
        "fully supported on this adapter\n",
        VAR_16->va_unit, VAR_16->va_name);

    if (VAR_17 <= 0)
 return 0;

    if (VAR_16->va_type == VAR_3) {
 FUNC_5("VGA parameters upon power-up\n");
 FUNC_1(VAR_9.regs, sizeof(VAR_9.regs));
 FUNC_5("VGA parameters in BIOS for mode %d\n", VAR_16->va_initial_mode);
 FUNC_1(VAR_10, sizeof(VAR_10));
    }

    VAR_18 = FUNC_4(VAR_16->va_initial_mode);
    if (VAR_18 == ((void*)0))
 return 0;
    FUNC_5("EGA/VGA parameters to be used for mode %d\n", VAR_16->va_initial_mode);
    FUNC_1(VAR_18, VAR_8);

    return 0;
}
