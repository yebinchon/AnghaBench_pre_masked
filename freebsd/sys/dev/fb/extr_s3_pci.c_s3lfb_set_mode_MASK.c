
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_5__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int vi_flags; int vi_buffer_size; int vi_planes; int vi_buffer; } ;
struct TYPE_7__ {int va_buffer_size; int va_window_size; int va_window_gran; TYPE_1__ va_info; int va_buffer; int va_window; } ;
typedef TYPE_2__ video_adapter_t ;
struct s3pci_softc {int mem_base; } ;
typedef int device_t ;
struct TYPE_8__ {int (* set_mode ) (TYPE_2__*,int) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int,int) ;
 int FUNC_4 (int,int ) ;
 TYPE_5__* VAR_6 ;
 int FUNC_5 (int ,int) ;
 int VAR_7 ;
 int FUNC_6 (TYPE_2__*,int) ;

__attribute__((used)) static int
FUNC_7(video_adapter_t *VAR_8, int VAR_9)
{
 device_t VAR_10 = VAR_7;
 struct s3pci_softc *VAR_11 = (struct s3pci_softc *)FUNC_0(VAR_10);



 int VAR_12;



 if ((VAR_12 = (*VAR_6->set_mode)(VAR_8, VAR_9)))
  return VAR_12;
 if ((VAR_9 <= VAR_1) ||
  !(VAR_8->va_info.vi_flags & VAR_4) ||
  (VAR_8->va_info.vi_flags & VAR_5))
  return 0;



 FUNC_4(0x38, VAR_2); FUNC_4(0x48, VAR_3);
 FUNC_4(0x39, VAR_2); FUNC_4(0xa5, VAR_3);
 FUNC_4(0x40, VAR_2);
 FUNC_4(FUNC_2(VAR_3) | 1, VAR_3);



 FUNC_3(FUNC_1(0) | 1, 0x0);



 FUNC_4(0x31, VAR_2);
 FUNC_4(FUNC_2(VAR_3) | 8, VAR_3);



 FUNC_4(0x58, VAR_2);
 FUNC_4(FUNC_2(VAR_3) | 0x13, VAR_3);



 FUNC_4(0x40, VAR_2);
 FUNC_4(FUNC_2(VAR_3) & ~1, VAR_3);



 FUNC_4(0x39, VAR_2); FUNC_4(0x5a, VAR_3);
 FUNC_4(0x38, VAR_2); FUNC_4(0x00, VAR_3);

 VAR_8->va_info.vi_flags |= VAR_5;
 VAR_8->va_info.vi_buffer = VAR_11->mem_base;
 VAR_8->va_buffer = FUNC_5(VAR_8->va_info.vi_buffer,
    VAR_8->va_info.vi_buffer_size);
 VAR_8->va_buffer_size = VAR_8->va_info.vi_buffer_size;
 VAR_8->va_window = VAR_8->va_buffer;
 VAR_8->va_window_size = VAR_8->va_info.vi_buffer_size/VAR_8->va_info.vi_planes;
 VAR_8->va_window_gran = VAR_8->va_info.vi_buffer_size/VAR_8->va_info.vi_planes;

 return 0;
}
