
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct TYPE_9__ {scalar_t__ level; } ;
struct TYPE_8__ {scalar_t__ level; scalar_t__ id; } ;
struct TYPE_10__ {TYPE_4__ resp; TYPE_3__ req; } ;
struct TYPE_7__ {int val_buf_size; int val_len; int tag; } ;
struct TYPE_6__ {int buf_size; int code; } ;
struct msg_set_turbo {TYPE_5__ body; scalar_t__ end_tag; TYPE_2__ tag_hdr; TYPE_1__ hdr; } ;
struct bcm2835_cpufreq_softc {int dev; } ;
typedef int msg ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (char*,int) ;
 int VAR_4 ;
 int FUNC_1 (struct msg_set_turbo*,int) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (struct msg_set_turbo*,int ,int) ;

__attribute__((used)) static int
FUNC_4(struct bcm2835_cpufreq_softc *VAR_5, uint32_t VAR_6)
{
 struct msg_set_turbo VAR_7;
 int VAR_8;
 int VAR_9;
 if (VAR_6 != VAR_3 && VAR_6 != VAR_2)
  VAR_6 = VAR_2;


 FUNC_3(&VAR_7, 0, sizeof(VAR_7));
 VAR_7.hdr.buf_size = sizeof(VAR_7);
 VAR_7.hdr.code = VAR_0;
 VAR_7.tag_hdr.tag = VAR_1;
 VAR_7.tag_hdr.val_buf_size = sizeof(VAR_7.body);
 VAR_7.tag_hdr.val_len = sizeof(VAR_7.body.req);
 VAR_7.body.req.id = 0;
 VAR_7.body.req.level = VAR_6;
 VAR_7.end_tag = 0;


 VAR_9 = FUNC_1(&VAR_7, sizeof(VAR_7));
 if (VAR_9) {
  FUNC_2(VAR_5->dev, "can't set turbo\n");
  return (VAR_4);
 }


 VAR_8 = (int)VAR_7.body.resp.level;
 FUNC_0("level = %d\n", VAR_8);
 return (VAR_8);
}
