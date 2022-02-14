
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef void* uint32_t ;
struct TYPE_9__ {scalar_t__ value; } ;
struct TYPE_8__ {void* value; void* voltage_id; } ;
struct TYPE_10__ {TYPE_4__ resp; TYPE_3__ req; } ;
struct TYPE_7__ {int val_buf_size; int val_len; int tag; } ;
struct TYPE_6__ {int buf_size; int code; } ;
struct msg_set_voltage {TYPE_5__ body; scalar_t__ end_tag; TYPE_2__ tag_hdr; TYPE_1__ hdr; } ;
struct bcm2835_cpufreq_softc {int dev; } ;
typedef int msg ;
typedef int int32_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct msg_set_voltage*,int) ;
 int FUNC_2 (int ,char*,...) ;
 int FUNC_3 (struct msg_set_voltage*,int ,int) ;

__attribute__((used)) static int
FUNC_4(struct bcm2835_cpufreq_softc *VAR_5,
    uint32_t VAR_6, int32_t VAR_7)
{
 struct msg_set_voltage VAR_8;
 int VAR_9;
 if (VAR_7 > VAR_2 || VAR_7 < VAR_3) {

  FUNC_2(VAR_5->dev, "not supported voltage: %d\n", VAR_7);
  return (VAR_4);
 }


 FUNC_3(&VAR_8, 0, sizeof(VAR_8));
 VAR_8.hdr.buf_size = sizeof(VAR_8);
 VAR_8.hdr.code = VAR_0;
 VAR_8.tag_hdr.tag = VAR_1;
 VAR_8.tag_hdr.val_buf_size = sizeof(VAR_8.body);
 VAR_8.tag_hdr.val_len = sizeof(VAR_8.body.req);
 VAR_8.body.req.voltage_id = VAR_6;
 VAR_8.body.req.value = (uint32_t)VAR_7;
 VAR_8.end_tag = 0;


 VAR_9 = FUNC_1(&VAR_8, sizeof(VAR_8));
 if (VAR_9) {
  FUNC_2(VAR_5->dev, "can't set voltage\n");
  return (VAR_4);
 }


 VAR_7 = (int)VAR_8.body.resp.value;
 FUNC_0("value = %d\n", VAR_7);
 return (VAR_7);
}
