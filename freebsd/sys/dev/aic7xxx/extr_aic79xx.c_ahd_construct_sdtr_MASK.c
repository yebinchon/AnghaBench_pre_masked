
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u_int ;
struct ahd_softc {int msgout_len; int msgout_index; scalar_t__* msgout_buf; } ;
struct ahd_devinfo {int channel; int target; int lun; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 char* FUNC_0 (struct ahd_softc*) ;
 scalar_t__ VAR_4 ;
 int FUNC_1 (char*,char*,int,int,int,scalar_t__,scalar_t__) ;

__attribute__((used)) static void
FUNC_2(struct ahd_softc *VAR_5, struct ahd_devinfo *VAR_6,
     u_int VAR_7, u_int VAR_8)
{
 if (VAR_8 == 0)
  VAR_7 = VAR_0;
 VAR_5->msgout_buf[VAR_5->msgout_index++] = VAR_1;
 VAR_5->msgout_buf[VAR_5->msgout_index++] = VAR_3;
 VAR_5->msgout_buf[VAR_5->msgout_index++] = VAR_2;
 VAR_5->msgout_buf[VAR_5->msgout_index++] = VAR_7;
 VAR_5->msgout_buf[VAR_5->msgout_index++] = VAR_8;
 VAR_5->msgout_len += 5;
 if (VAR_4) {
  FUNC_1("(%s:%c:%d:%d): Sending SDTR period %x, offset %x\n",
         FUNC_0(VAR_5), VAR_6->channel, VAR_6->target,
         VAR_6->lun, VAR_7, VAR_8);
 }
}
