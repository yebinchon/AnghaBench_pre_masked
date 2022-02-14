
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_6__ ;
typedef struct TYPE_18__ TYPE_5__ ;
typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


struct TYPE_16__ {int vi_mode; } ;
typedef TYPE_3__ video_info_t ;
struct TYPE_17__ {int y; int x; } ;
typedef TYPE_4__ video_display_start_t ;
struct TYPE_15__ {int y; int x; } ;
struct TYPE_18__ {int va_index; int va_type; int va_mode; int va_line_width; TYPE_2__ va_disp_start; int va_window_orig; int va_initial_bios_mode; int va_initial_mode; int va_buffer_size; int va_buffer; int va_window_gran; int va_window_size; int va_window; int va_mem_size; int va_mem_base; int va_crtc_addr; int va_io_size; int va_io_base; int va_flags; int va_unit; int va_name; } ;
typedef TYPE_5__ video_adapter_t ;
struct TYPE_14__ {int y; int x; } ;
struct TYPE_19__ {int va_index; int va_type; int va_mode; TYPE_1__ va_disp_start; int va_line_width; int va_initial_bios_mode; int va_initial_mode; int va_buffer_size; void* va_unused0; int va_window_orig; int va_window_gran; int va_window_size; void* va_window; int va_mem_size; int va_mem_base; int va_crtc_addr; int va_io_size; int va_io_base; int va_flags; int va_unit; int va_name; } ;
typedef TYPE_6__ video_adapter_info_t ;
typedef int u_long ;
typedef int u_int ;
typedef scalar_t__ caddr_t ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 () ;
 int FUNC_3 (int) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (TYPE_5__*,int) ;
 int FUNC_6 (TYPE_5__*,int ,TYPE_3__*) ;
 int FUNC_7 (TYPE_5__*,TYPE_3__*) ;
 int FUNC_8 (TYPE_5__*,int) ;
 void* FUNC_9 (int ) ;

int
FUNC_10(video_adapter_t *VAR_1, u_long VAR_2, caddr_t VAR_3)
{
 int VAR_4;
 int VAR_5;



 VAR_4 = 0;
 VAR_5 = FUNC_2();

 switch (VAR_2) {

 case 143:
  *(int *)VAR_3 = VAR_1->va_index;
  break;

 case 141:
  *(int *)VAR_3 = VAR_1->va_type;
  break;

 case 142:
         ((video_adapter_info_t *)VAR_3)->va_index = VAR_1->va_index;
  ((video_adapter_info_t *)VAR_3)->va_type = VAR_1->va_type;
  FUNC_0(VAR_1->va_name, ((video_adapter_info_t *)VAR_3)->va_name,
        FUNC_1(FUNC_4(VAR_1->va_name) + 1,
      sizeof(((video_adapter_info_t *)VAR_3)->va_name)));
  ((video_adapter_info_t *)VAR_3)->va_unit = VAR_1->va_unit;
  ((video_adapter_info_t *)VAR_3)->va_flags = VAR_1->va_flags;
  ((video_adapter_info_t *)VAR_3)->va_io_base = VAR_1->va_io_base;
  ((video_adapter_info_t *)VAR_3)->va_io_size = VAR_1->va_io_size;
  ((video_adapter_info_t *)VAR_3)->va_crtc_addr = VAR_1->va_crtc_addr;
  ((video_adapter_info_t *)VAR_3)->va_mem_base = VAR_1->va_mem_base;
  ((video_adapter_info_t *)VAR_3)->va_mem_size = VAR_1->va_mem_size;
  ((video_adapter_info_t *)VAR_3)->va_window

   = FUNC_9(VAR_1->va_window);



  ((video_adapter_info_t *)VAR_3)->va_window_size
   = VAR_1->va_window_size;
  ((video_adapter_info_t *)VAR_3)->va_window_gran
   = VAR_1->va_window_gran;
  ((video_adapter_info_t *)VAR_3)->va_window_orig
   = VAR_1->va_window_orig;
  ((video_adapter_info_t *)VAR_3)->va_unused0

   = VAR_1->va_buffer != 0 ? FUNC_9(VAR_1->va_buffer) : 0;



  ((video_adapter_info_t *)VAR_3)->va_buffer_size
   = VAR_1->va_buffer_size;
  ((video_adapter_info_t *)VAR_3)->va_mode = VAR_1->va_mode;
  ((video_adapter_info_t *)VAR_3)->va_initial_mode
   = VAR_1->va_initial_mode;
  ((video_adapter_info_t *)VAR_3)->va_initial_bios_mode
   = VAR_1->va_initial_bios_mode;
  ((video_adapter_info_t *)VAR_3)->va_line_width
   = VAR_1->va_line_width;
  ((video_adapter_info_t *)VAR_3)->va_disp_start.x
   = VAR_1->va_disp_start.x;
  ((video_adapter_info_t *)VAR_3)->va_disp_start.y
   = VAR_1->va_disp_start.y;
  break;

 case 133:
  VAR_4 = FUNC_6(VAR_1,
      ((video_info_t *)VAR_3)->vi_mode,
      (video_info_t *)VAR_3);
  if (VAR_4)
   VAR_4 = VAR_0;
  break;

 case 139:
  VAR_4 = FUNC_7(VAR_1, (video_info_t *)VAR_3);
  break;

 case 136:
  *(int *)VAR_3 = VAR_1->va_mode;
  break;

 case 130:
  VAR_4 = FUNC_8(VAR_1, *(int *)VAR_3);
  if (VAR_4)
   VAR_4 = VAR_0;
  break;

 case 134:
  *(u_int *)VAR_3 = VAR_1->va_window_orig;
  break;

 case 138:
  ((video_display_start_t *)VAR_3)->x = VAR_1->va_disp_start.x;
  ((video_display_start_t *)VAR_3)->y = VAR_1->va_disp_start.y;
  break;

 case 137:
  *(u_int *)VAR_3 = VAR_1->va_line_width;
  break;

 case 140:
  VAR_4 = FUNC_5(VAR_1, *(int *)VAR_3);
  break;

 case 135:
 case 129:


 case 149:
 case 155:
 case 148:
 case 154:


 case 128:
 case 132:
 case 131:

 case 153:
 case 159:
 case 145:
 case 152:
 case 144:
 case 146:
 case 156:
 case 147:
 case 157:
 case 158:
 case 150:
 case 151:

 default:
  VAR_4 = VAR_0;
  break;
 }

 FUNC_3(VAR_5);
 return VAR_4;
}
