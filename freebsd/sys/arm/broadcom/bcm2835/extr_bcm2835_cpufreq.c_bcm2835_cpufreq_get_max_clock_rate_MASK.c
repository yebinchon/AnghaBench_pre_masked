
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
struct TYPE_9__ {scalar_t__ rate_hz; } ;
struct TYPE_8__ {int clock_id; } ;
struct TYPE_10__ {TYPE_4__ resp; TYPE_3__ req; } ;
struct TYPE_7__ {int val_buf_size; int val_len; int tag; } ;
struct TYPE_6__ {int buf_size; int code; } ;
struct msg_get_max_clock_rate {TYPE_5__ body; scalar_t__ end_tag; TYPE_2__ tag_hdr; TYPE_1__ hdr; } ;
struct bcm2835_cpufreq_softc {int dev; } ;
typedef int msg ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,int) ;
 int VAR_2 ;
 int FUNC_1 (struct msg_get_max_clock_rate*,int) ;
 int FUNC_2 (int ,char*,int ) ;
 int FUNC_3 (struct msg_get_max_clock_rate*,int ,int) ;

__attribute__((used)) static int
FUNC_4(struct bcm2835_cpufreq_softc *VAR_3,
    uint32_t VAR_4)
{
 struct msg_get_max_clock_rate VAR_5;
 int VAR_6;
 int VAR_7;
 FUNC_3(&VAR_5, 0, sizeof(VAR_5));
 VAR_5.hdr.buf_size = sizeof(VAR_5);
 VAR_5.hdr.code = VAR_0;
 VAR_5.tag_hdr.tag = VAR_1;
 VAR_5.tag_hdr.val_buf_size = sizeof(VAR_5.body);
 VAR_5.tag_hdr.val_len = sizeof(VAR_5.body.req);
 VAR_5.body.req.clock_id = VAR_4;
 VAR_5.end_tag = 0;


 VAR_7 = FUNC_1(&VAR_5, sizeof(VAR_5));
 if (VAR_7) {
  FUNC_2(VAR_3->dev, "can't get max clock rate (id=%u)\n",
      VAR_4);
  return (VAR_2);
 }


 VAR_6 = (int)VAR_5.body.resp.rate_hz;
 FUNC_0("clock = %d(Hz)\n", VAR_6);
 return (VAR_6);
}
