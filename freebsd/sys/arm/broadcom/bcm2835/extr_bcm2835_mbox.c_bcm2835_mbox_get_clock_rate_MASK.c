
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_9__ {int rate_hz; } ;
struct TYPE_8__ {int clock_id; } ;
struct TYPE_10__ {TYPE_4__ resp; TYPE_3__ req; } ;
struct TYPE_7__ {int val_buf_size; int val_len; int tag; } ;
struct TYPE_6__ {int buf_size; int code; } ;
struct msg_get_clock_rate {TYPE_5__ body; scalar_t__ end_tag; TYPE_2__ tag_hdr; TYPE_1__ hdr; } ;
typedef int msg ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct msg_get_clock_rate*,int) ;
 int FUNC_1 (struct msg_get_clock_rate*,int ,int) ;

int
FUNC_2(uint32_t VAR_2, uint32_t *VAR_3)
{
 struct msg_get_clock_rate VAR_4;
 int VAR_5;

 FUNC_1(&VAR_4, 0, sizeof(VAR_4));
 VAR_4.hdr.buf_size = sizeof(VAR_4);
 VAR_4.hdr.code = VAR_0;
 VAR_4.tag_hdr.tag = VAR_1;
 VAR_4.tag_hdr.val_buf_size = sizeof(VAR_4.body);
 VAR_4.tag_hdr.val_len = sizeof(VAR_4.body.req);
 VAR_4.body.req.clock_id = VAR_2;
 VAR_4.end_tag = 0;

 VAR_5 = FUNC_0(&VAR_4, sizeof(VAR_4));
 *VAR_3 = VAR_4.body.resp.rate_hz;

 return (VAR_5);
}
