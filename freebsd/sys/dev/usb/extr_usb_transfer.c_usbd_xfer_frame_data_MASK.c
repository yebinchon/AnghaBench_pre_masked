
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t usb_frcount_t ;
struct usb_xfer {size_t max_frame_count; int* frlengths; TYPE_1__* frbuffers; } ;
struct TYPE_2__ {void* buffer; } ;


 int FUNC_0 (int,char*) ;

void
FUNC_1(struct usb_xfer *VAR_0, usb_frcount_t VAR_1,
    void **VAR_2, int *VAR_3)
{
 FUNC_0(VAR_1 < VAR_0->max_frame_count, ("frame index overflow"));

 if (VAR_2 != ((void*)0))
  *VAR_2 = VAR_0->frbuffers[VAR_1].buffer;
 if (VAR_3 != ((void*)0))
  *VAR_3 = VAR_0->frlengths[VAR_1];
}
