
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_7__ {int state; int device_id; } ;
struct TYPE_8__ {TYPE_3__ req; } ;
struct TYPE_6__ {int val_buf_size; int val_len; int tag; } ;
struct TYPE_5__ {int buf_size; int code; } ;
struct msg_set_power_state {scalar_t__ end_tag; TYPE_4__ body; TYPE_2__ tag_hdr; TYPE_1__ hdr; } ;
typedef int msg ;
typedef scalar_t__ boolean_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct msg_set_power_state*,int) ;
 int FUNC_1 (struct msg_set_power_state*,int ,int) ;

int
FUNC_2(uint32_t VAR_4, boolean_t VAR_5)
{
 struct msg_set_power_state VAR_6;
 int VAR_7;

 FUNC_1(&VAR_6, 0, sizeof(VAR_6));
 VAR_6.hdr.buf_size = sizeof(VAR_6);
 VAR_6.hdr.code = VAR_0;
 VAR_6.tag_hdr.tag = VAR_3;
 VAR_6.tag_hdr.val_buf_size = sizeof(VAR_6.body);
 VAR_6.tag_hdr.val_len = sizeof(VAR_6.body.req);
 VAR_6.body.req.device_id = VAR_4;
 VAR_6.body.req.state = (VAR_5 ? VAR_1 : 0) |
     VAR_2;
 VAR_6.end_tag = 0;

 VAR_7 = FUNC_0(&VAR_6, sizeof(VAR_6));

 return (VAR_7);
}
