
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_xfer {int max_frame_size; int buf_fixup; scalar_t__ frbuffers; } ;
struct uhci_mem_layout {int max_frame_size; scalar_t__ buf_offset; int fix_pc; scalar_t__ buf_pc; } ;



__attribute__((used)) static void
FUNC_0(struct uhci_mem_layout *VAR_0, struct usb_xfer *VAR_1)
{
 VAR_0->buf_pc = VAR_1->frbuffers + 0;
 VAR_0->fix_pc = VAR_1->buf_fixup;

 VAR_0->buf_offset = 0;

 VAR_0->max_frame_size = VAR_1->max_frame_size;
}
