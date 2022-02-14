
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {int fb_size; int fb_address; int pitch; int y; int x; int height; int width; } ;
struct TYPE_7__ {int alignment; int alpha; int bpp; int y; int x; int height; int width; } ;
struct TYPE_9__ {TYPE_3__ resp; TYPE_2__ req; } ;
struct TYPE_10__ {TYPE_4__ body; } ;
struct TYPE_6__ {int buf_size; int code; } ;
struct msg_fb_setup {TYPE_5__ buffer; TYPE_5__ pitch; TYPE_5__ offset; TYPE_5__ virtual_w_h; TYPE_5__ physical_w_h; scalar_t__ end_tag; TYPE_5__ alpha; TYPE_5__ depth; TYPE_1__ hdr; } ;
struct bcm2835_fb_config {int size; int base; int pitch; int yoffset; int xoffset; int vyres; int vxres; int yres; int xres; int bpp; } ;
typedef int msg ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_5__*,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct msg_fb_setup*,int) ;
 int FUNC_3 (struct msg_fb_setup*,int ,int) ;

int
FUNC_4(struct bcm2835_fb_config *VAR_10)
{
 int VAR_11;
 struct msg_fb_setup VAR_12;

 FUNC_3(&VAR_12, 0, sizeof(VAR_12));
 VAR_12.hdr.buf_size = sizeof(VAR_12);
 VAR_12.hdr.code = VAR_2;
 FUNC_0(&VAR_12.physical_w_h, VAR_7);
 VAR_12.physical_w_h.body.req.width = VAR_10->xres;
 VAR_12.physical_w_h.body.req.height = VAR_10->yres;
 FUNC_0(&VAR_12.virtual_w_h, VAR_9);
 VAR_12.virtual_w_h.body.req.width = VAR_10->vxres;
 VAR_12.virtual_w_h.body.req.height = VAR_10->vyres;
 FUNC_0(&VAR_12.offset, VAR_8);
 VAR_12.offset.body.req.x = VAR_10->xoffset;
 VAR_12.offset.body.req.y = VAR_10->yoffset;
 FUNC_0(&VAR_12.depth, VAR_6);
 VAR_12.depth.body.req.bpp = VAR_10->bpp;
 FUNC_0(&VAR_12.alpha, VAR_5);
 VAR_12.alpha.body.req.alpha = VAR_1;
 FUNC_0(&VAR_12.buffer, VAR_0);
 VAR_12.buffer.body.req.alignment = VAR_4;
 FUNC_0(&VAR_12.pitch, VAR_3);
 VAR_12.end_tag = 0;

 VAR_11 = FUNC_2(&VAR_12, sizeof(VAR_12));
 if (VAR_11 == 0) {
  VAR_10->xres = VAR_12.physical_w_h.body.resp.width;
  VAR_10->yres = VAR_12.physical_w_h.body.resp.height;
  VAR_10->vxres = VAR_12.virtual_w_h.body.resp.width;
  VAR_10->vyres = VAR_12.virtual_w_h.body.resp.height;
  VAR_10->xoffset = VAR_12.offset.body.resp.x;
  VAR_10->yoffset = VAR_12.offset.body.resp.y;
  VAR_10->pitch = VAR_12.pitch.body.resp.pitch;
  VAR_10->base = FUNC_1(VAR_12.buffer.body.resp.fb_address);
  VAR_10->size = VAR_12.buffer.body.resp.fb_size;
 }

 return (VAR_11);
}
