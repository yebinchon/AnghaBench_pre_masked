
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
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 char* FUNC_0 (struct ahd_softc*) ;
 scalar_t__ VAR_6 ;
 int FUNC_1 (char*,char*,int,int,int,scalar_t__,scalar_t__,scalar_t__,scalar_t__) ;

__attribute__((used)) static void
FUNC_2(struct ahd_softc *VAR_7, struct ahd_devinfo *VAR_8,
    u_int VAR_9, u_int VAR_10, u_int VAR_11,
    u_int VAR_12)
{





 if (VAR_9 <= VAR_1)
  VAR_12 |= VAR_5;
 if (VAR_10 == 0)
  VAR_9 = VAR_0;
 VAR_7->msgout_buf[VAR_7->msgout_index++] = VAR_2;
 VAR_7->msgout_buf[VAR_7->msgout_index++] = VAR_4;
 VAR_7->msgout_buf[VAR_7->msgout_index++] = VAR_3;
 VAR_7->msgout_buf[VAR_7->msgout_index++] = VAR_9;
 VAR_7->msgout_buf[VAR_7->msgout_index++] = 0;
 VAR_7->msgout_buf[VAR_7->msgout_index++] = VAR_10;
 VAR_7->msgout_buf[VAR_7->msgout_index++] = VAR_11;
 VAR_7->msgout_buf[VAR_7->msgout_index++] = VAR_12;
 VAR_7->msgout_len += 8;
 if (VAR_6) {
  FUNC_1("(%s:%c:%d:%d): Sending PPR bus_width %x, period %x, "
         "offset %x, ppr_options %x\n", FUNC_0(VAR_7),
         VAR_8->channel, VAR_8->target, VAR_8->lun,
         VAR_11, VAR_9, VAR_10, VAR_12);
 }
}
