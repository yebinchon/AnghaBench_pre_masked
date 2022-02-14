
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int bpp; } ;
struct TYPE_8__ {TYPE_2__ resp; } ;
struct TYPE_6__ {scalar_t__ val_len; } ;
struct TYPE_10__ {TYPE_3__ body; TYPE_1__ tag_hdr; } ;
struct TYPE_9__ {int buf_size; int code; } ;
struct msg_fb_get_bpp {TYPE_5__ bpp; scalar_t__ end_tag; TYPE_4__ hdr; } ;
struct bcm2835_fb_config {int bpp; } ;
typedef int msg ;


 int VAR_0 ;
 int FUNC_0 (TYPE_5__*,int ) ;
 int VAR_1 ;
 int FUNC_1 (struct msg_fb_get_bpp*,int) ;
 int FUNC_2 (struct msg_fb_get_bpp*,int ,int) ;

int
FUNC_3(struct bcm2835_fb_config *VAR_2)
{
 int VAR_3;
 struct msg_fb_get_bpp VAR_4;

 FUNC_2(&VAR_4, 0, sizeof(VAR_4));
 VAR_4.hdr.buf_size = sizeof(VAR_4);
 VAR_4.hdr.code = VAR_0;
 FUNC_0(&VAR_4.bpp, VAR_1);
 VAR_4.bpp.tag_hdr.val_len = 0;
 VAR_4.end_tag = 0;

 VAR_3 = FUNC_1(&VAR_4, sizeof(VAR_4));
 if (VAR_3 == 0)
  VAR_2->bpp = VAR_4.bpp.body.resp.bpp;

 return (VAR_3);
}
