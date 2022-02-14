
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ vm_paddr_t ;
typedef scalar_t__ vm_ooffset_t ;
typedef int vm_memattr_t ;
struct TYPE_4__ {scalar_t__ vi_registers_size; scalar_t__ vi_registers; scalar_t__ vi_buffer_size; scalar_t__ vi_buffer; scalar_t__ vi_window; } ;
typedef TYPE_1__ video_info_t ;
struct TYPE_5__ {scalar_t__ va_window_size; TYPE_1__ va_info; } ;
typedef TYPE_2__ video_adapter_t ;
struct machfb_softc {scalar_t__ sc_vmem; scalar_t__ sc_mem; } ;


 int VAR_0 ;

__attribute__((used)) static int
FUNC_0(video_adapter_t *VAR_1, vm_ooffset_t VAR_2, vm_paddr_t *VAR_3,
    int VAR_4, vm_memattr_t *VAR_5)
{
 struct machfb_softc *VAR_6;
 video_info_t *VAR_7;

 VAR_6 = (struct machfb_softc *)VAR_1;
 VAR_7 = &VAR_1->va_info;


 if (VAR_6->sc_vmem != 0 && VAR_2 >= VAR_6->sc_vmem &&
     VAR_2 < VAR_6->sc_vmem + VAR_7->vi_registers_size) {
  *VAR_3 = VAR_7->vi_registers + VAR_2 - VAR_6->sc_vmem;
  return (0);
 }


 if (VAR_2 >= VAR_6->sc_mem &&
     VAR_2 < VAR_6->sc_mem + VAR_7->vi_buffer_size) {
  *VAR_3 = VAR_7->vi_buffer + VAR_2 - VAR_6->sc_mem;
  return (0);
 }


 if (VAR_2 < VAR_1->va_window_size) {
  *VAR_3 = VAR_7->vi_window + VAR_2;
  return (0);
 }

 return (VAR_0);
}
