
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int ;
struct ahd_softc {int* msgout_buf; int msgout_len; int msgout_index; } ;
struct ahd_devinfo {int channel; int target; int lun; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 char* FUNC_0 (struct ahd_softc*) ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (char*,char*,int,int,int,int) ;

__attribute__((used)) static void
FUNC_2(struct ahd_softc *VAR_4, struct ahd_devinfo *VAR_5,
     u_int VAR_6)
{
 VAR_4->msgout_buf[VAR_4->msgout_index++] = VAR_0;
 VAR_4->msgout_buf[VAR_4->msgout_index++] = VAR_2;
 VAR_4->msgout_buf[VAR_4->msgout_index++] = VAR_1;
 VAR_4->msgout_buf[VAR_4->msgout_index++] = VAR_6;
 VAR_4->msgout_len += 4;
 if (VAR_3) {
  FUNC_1("(%s:%c:%d:%d): Sending WDTR %x\n",
         FUNC_0(VAR_4), VAR_5->channel, VAR_5->target,
         VAR_5->lun, VAR_6);
 }
}
