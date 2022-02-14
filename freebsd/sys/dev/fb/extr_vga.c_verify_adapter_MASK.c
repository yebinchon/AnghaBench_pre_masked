
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ vm_offset_t ;
struct TYPE_3__ {int va_window; int va_type; char* va_name; int va_flags; int va_crtc_addr; } ;
typedef TYPE_1__ video_adapter_t ;
typedef int u_int32_t ;
typedef int u_int16_t ;
typedef int u_char ;


 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int VAR_0 ;
 int FUNC_2 (int,int) ;



 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int) ;
 int FUNC_5 (scalar_t__) ;
 int * VAR_8 ;
 int * VAR_9 ;
 int FUNC_6 (scalar_t__,int) ;

__attribute__((used)) static int
FUNC_7(video_adapter_t *VAR_10)
{
    vm_offset_t VAR_11;
    u_int16_t VAR_12;

    u_int32_t VAR_13;


    VAR_11 = FUNC_0(VAR_10->va_window);
    VAR_12 = FUNC_5(VAR_11);
    FUNC_6(VAR_11, 0xA55A);
    if (FUNC_5(VAR_11) != 0xA55A)
 return VAR_0;
    FUNC_6(VAR_11, VAR_12);

    switch (VAR_10->va_type) {

    case 129:
 FUNC_4(VAR_10->va_crtc_addr, 7);
 if (FUNC_3(VAR_10->va_crtc_addr) == 7) {
     VAR_10->va_type = VAR_1;
     VAR_10->va_name = "vga";
     VAR_10->va_flags |= VAR_6 | VAR_4;
 }
 VAR_10->va_flags |= VAR_5 | VAR_2;




 VAR_13 = *(u_int32_t *)FUNC_0(0x4a8);
 VAR_13 = FUNC_1(VAR_13);
 if (FUNC_2(VAR_13, sizeof(u_int32_t))) {
     VAR_13 = *(u_int32_t *)FUNC_0(VAR_13);
     VAR_13 = FUNC_1(VAR_13);
     if (FUNC_2(VAR_13, VAR_7))
  VAR_8 = (u_char *)FUNC_0(VAR_13);
 }

 break;

    case 130:
 VAR_10->va_flags |= VAR_3 | VAR_2;



 VAR_13 = *(u_int32_t *)FUNC_0(0x1d*4);
 VAR_13 = FUNC_1(VAR_13);
 VAR_9 = (u_char *)FUNC_0(VAR_13);

 break;

    case 128:


 VAR_13 = *(u_int32_t *)FUNC_0(0x1d*4);
 VAR_13 = FUNC_1(VAR_13);
 VAR_9 = (u_char *)FUNC_0(VAR_13);

 break;
    }

    return 0;
}
