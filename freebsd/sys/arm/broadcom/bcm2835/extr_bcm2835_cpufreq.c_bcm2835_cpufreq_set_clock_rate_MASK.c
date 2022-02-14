
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
struct TYPE_9__ {scalar_t__ rate_hz; } ;
struct TYPE_8__ {scalar_t__ rate_hz; scalar_t__ clock_id; } ;
struct TYPE_10__ {TYPE_4__ resp; TYPE_3__ req; } ;
struct TYPE_7__ {int val_buf_size; int val_len; void* tag; } ;
struct TYPE_6__ {int buf_size; void* code; } ;
struct msg_set_clock_rate {TYPE_5__ body; scalar_t__ end_tag; TYPE_2__ tag_hdr; TYPE_1__ hdr; } ;
struct bcm2835_cpufreq_softc {int dev; } ;
typedef int msg ;


 scalar_t__ VAR_0 ;
 void* VAR_1 ;
 void* VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (char*,int) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (struct msg_set_clock_rate*,int) ;
 int FUNC_3 (int ,char*,scalar_t__) ;
 int FUNC_4 (struct msg_set_clock_rate*,int ,int) ;

__attribute__((used)) static int
FUNC_5(struct bcm2835_cpufreq_softc *VAR_5,
    uint32_t VAR_6, uint32_t VAR_7)
{
 struct msg_set_clock_rate VAR_8;
 int VAR_9;
 int VAR_10;
 FUNC_4(&VAR_8, 0, sizeof(VAR_8));
 VAR_8.hdr.buf_size = sizeof(VAR_8);
 VAR_8.hdr.code = VAR_1;
 VAR_8.tag_hdr.tag = VAR_2;
 VAR_8.tag_hdr.val_buf_size = sizeof(VAR_8.body);
 VAR_8.tag_hdr.val_len = sizeof(VAR_8.body.req);
 VAR_8.body.req.clock_id = VAR_6;
 VAR_8.body.req.rate_hz = VAR_7;
 VAR_8.end_tag = 0;


 VAR_10 = FUNC_2(&VAR_8, sizeof(VAR_8));
 if (VAR_10) {
  FUNC_3(VAR_5->dev, "can't set clock rate (id=%u)\n",
      VAR_6);
  return (VAR_3);
 }


 if (VAR_6 == VAR_0) {

  FUNC_0(VAR_4);







  FUNC_4(&VAR_8, 0, sizeof(VAR_8));
  VAR_8.hdr.buf_size = sizeof(VAR_8);
  VAR_8.hdr.code = VAR_1;
  VAR_8.tag_hdr.tag = VAR_2;
  VAR_8.tag_hdr.val_buf_size = sizeof(VAR_8.body);
  VAR_8.tag_hdr.val_len = sizeof(VAR_8.body.req);
  VAR_8.body.req.clock_id = VAR_6;
  VAR_8.body.req.rate_hz = VAR_7;
  VAR_8.end_tag = 0;


  VAR_10 = FUNC_2(&VAR_8, sizeof(VAR_8));
  if (VAR_10) {
   FUNC_3(VAR_5->dev,
       "can't set clock rate (id=%u)\n", VAR_6);
   return (VAR_3);
  }
 }


 VAR_9 = (int)VAR_8.body.resp.rate_hz;
 FUNC_1("clock = %d(Hz)\n", VAR_9);
 return (VAR_9);
}
