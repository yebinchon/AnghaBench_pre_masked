
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_24__ TYPE_8__ ;
typedef struct TYPE_23__ TYPE_4__ ;
typedef struct TYPE_22__ TYPE_3__ ;
typedef struct TYPE_21__ TYPE_2__ ;
typedef struct TYPE_20__ TYPE_1__ ;
typedef struct TYPE_19__ TYPE_17__ ;
typedef struct TYPE_18__ TYPE_15__ ;


typedef void* vm_offset_t ;
struct TYPE_21__ {int vi_flags; int vi_buffer_size; int vi_height; int vi_planes; int vi_window_size; int vi_window_gran; int vi_width; int vi_window; int vi_buffer; } ;
typedef TYPE_2__ video_info_t ;
struct TYPE_19__ {int vi_flags; } ;
struct TYPE_20__ {scalar_t__ y; scalar_t__ x; } ;
struct TYPE_22__ {int va_flags; int va_mode; int va_line_width; int va_window_size; int va_window_gran; int va_buffer_size; size_t va_index; TYPE_17__ va_info; TYPE_1__ va_disp_start; scalar_t__ va_window_orig; void* va_window; void* va_buffer; int va_crtc_addr; int va_initial_bios_mode; int va_type; } ;
typedef TYPE_3__ video_adapter_t ;
struct TYPE_24__ {int v_flags; } ;
struct TYPE_23__ {int (* set_hw_cursor ) (TYPE_3__*,int,int) ;} ;
struct TYPE_18__ {int (* set_mode ) (TYPE_3__*,int) ;scalar_t__ (* get_info ) (TYPE_3__*,int,TYPE_2__*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_1 (TYPE_2__*,TYPE_17__*,int) ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ,int ,int ) ;
 int FUNC_4 (void*,int ) ;
 TYPE_15__* VAR_10 ;
 int FUNC_5 (char*,...) ;
 int FUNC_6 (TYPE_3__*,int) ;
 scalar_t__ FUNC_7 (TYPE_3__*,int,TYPE_2__*) ;
 scalar_t__ FUNC_8 (TYPE_3__*,int) ;
 int FUNC_9 (TYPE_3__*,int,int) ;
 TYPE_3__* VAR_11 ;
 TYPE_8__* VAR_12 ;
 int FUNC_10 () ;
 int FUNC_11 (int) ;
 scalar_t__ FUNC_12 (int) ;
 scalar_t__ FUNC_13 (TYPE_3__*,int,TYPE_2__*) ;
 int FUNC_14 (int ,int,int) ;
 int VAR_13 ;
 TYPE_4__** VAR_14 ;
 scalar_t__ FUNC_15 (int ) ;

__attribute__((used)) static int
FUNC_16(video_adapter_t *VAR_15, int VAR_16)
{
 video_info_t VAR_17;

 if (VAR_15 != VAR_11)
  return ((*VAR_10->set_mode)(VAR_15, VAR_16));

 VAR_16 = FUNC_14(VAR_15->va_type,
         VAR_15->va_flags & VAR_3, VAR_16);
 if (FUNC_0(VAR_15->va_mode)) {
  if (!FUNC_0(VAR_16) &&
      (*VAR_10->get_info)(VAR_15, VAR_16, &VAR_17) == 0) {
   if ((VAR_15->va_flags & VAR_5) != 0) {
    FUNC_11(6);
    VAR_15->va_flags &= ~VAR_5;
   }
   FUNC_2(VAR_15->va_initial_bios_mode);
   if (VAR_15->va_info.vi_flags & VAR_9)
    FUNC_4(VAR_15->va_buffer, VAR_13);




  }
 }


 if (!FUNC_0(VAR_16) && (*VAR_10->set_mode)(VAR_15, VAR_16) == 0)
  return (0);


 if (FUNC_13(VAR_15, VAR_16, &VAR_17))
  return (1);
 if (VAR_15->va_flags & VAR_5) {
     FUNC_11(6);
     VAR_15->va_flags &= ~VAR_5;
 }


 if (!(VAR_17.vi_flags & VAR_8))
  VAR_17.vi_flags &= ~VAR_9;

 if ((VAR_17.vi_flags & VAR_9) != 0)
  VAR_16 |= 0x4000;
 if (FUNC_12(VAR_16 | 0x8000))
  return (1);

 if ((VAR_12->v_flags & VAR_6) != 0 &&
     (VAR_17.vi_flags & VAR_8) != 0 &&
     FUNC_11(8) > 6)
  VAR_15->va_flags |= VAR_5;

 if (VAR_15->va_info.vi_flags & VAR_9)
  FUNC_4(VAR_15->va_buffer, VAR_13);




 VAR_11->va_mode = VAR_16 & 0x1ff;
 VAR_11->va_flags &= ~VAR_3;
 VAR_11->va_flags |=
  (VAR_17.vi_flags & VAR_7) ? VAR_3 : 0;
 VAR_11->va_crtc_addr =
  (VAR_11->va_flags & VAR_3) ? VAR_0 : VAR_1;

 VAR_11->va_flags &= ~VAR_4;
 VAR_11->va_line_width = VAR_17.vi_buffer_size / VAR_17.vi_height;
 if ((VAR_17.vi_flags & VAR_8) != 0)
  VAR_11->va_line_width /= VAR_17.vi_planes;
 if (VAR_17.vi_flags & VAR_9) {



  VAR_11->va_buffer =
      (vm_offset_t)FUNC_3(VAR_17.vi_buffer,
      VAR_13, VAR_2);
  VAR_11->va_window = VAR_11->va_buffer;
  VAR_11->va_window_size = VAR_17.vi_buffer_size / VAR_17.vi_planes;
  VAR_11->va_window_gran = VAR_17.vi_buffer_size / VAR_17.vi_planes;
 } else {
  VAR_11->va_buffer = 0;
  VAR_11->va_window = (vm_offset_t)FUNC_15(VAR_17.vi_window);
  VAR_11->va_window_size = VAR_17.vi_window_size;
  VAR_11->va_window_gran = VAR_17.vi_window_gran;
 }
 VAR_11->va_buffer_size = VAR_17.vi_buffer_size;
 VAR_11->va_window_orig = 0;
 VAR_11->va_disp_start.x = 0;
 VAR_11->va_disp_start.y = 0;




 FUNC_1(&VAR_17, &VAR_11->va_info, sizeof(VAR_11->va_info));


 (*VAR_14[VAR_11->va_index]->set_hw_cursor)(VAR_11, -1, -1);

 return (0);
}
