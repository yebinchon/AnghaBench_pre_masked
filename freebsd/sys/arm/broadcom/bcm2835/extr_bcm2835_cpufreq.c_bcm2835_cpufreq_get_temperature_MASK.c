
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_9__ {scalar_t__ value; } ;
struct TYPE_8__ {scalar_t__ temperature_id; } ;
struct TYPE_10__ {TYPE_4__ resp; TYPE_3__ req; } ;
struct TYPE_7__ {int val_buf_size; int val_len; int tag; } ;
struct TYPE_6__ {int buf_size; int code; } ;
struct msg_get_temperature {TYPE_5__ body; scalar_t__ end_tag; TYPE_2__ tag_hdr; TYPE_1__ hdr; } ;
struct bcm2835_cpufreq_softc {int dev; } ;
typedef int msg ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,int) ;
 int VAR_2 ;
 int FUNC_1 (struct msg_get_temperature*,int) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (struct msg_get_temperature*,int ,int) ;

__attribute__((used)) static int
FUNC_4(struct bcm2835_cpufreq_softc *VAR_3)
{
 struct msg_get_temperature VAR_4;
 int VAR_5;
 int VAR_6;
 FUNC_3(&VAR_4, 0, sizeof(VAR_4));
 VAR_4.hdr.buf_size = sizeof(VAR_4);
 VAR_4.hdr.code = VAR_0;
 VAR_4.tag_hdr.tag = VAR_1;
 VAR_4.tag_hdr.val_buf_size = sizeof(VAR_4.body);
 VAR_4.tag_hdr.val_len = sizeof(VAR_4.body.req);
 VAR_4.body.req.temperature_id = 0;
 VAR_4.end_tag = 0;


 VAR_6 = FUNC_1(&VAR_4, sizeof(VAR_4));
 if (VAR_6) {
  FUNC_2(VAR_3->dev, "can't get temperature\n");
  return (VAR_2);
 }


 VAR_5 = (int)VAR_4.body.resp.value;
 FUNC_0("value = %d\n", VAR_5);
 return (VAR_5);
}
