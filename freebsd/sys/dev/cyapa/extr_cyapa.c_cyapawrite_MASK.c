
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
struct uio {size_t uio_resid; } ;
struct TYPE_2__ {int resolution; int rate; int level; } ;
struct cyapa_softc {int ps2_cmd; int scaling_mode; scalar_t__ ps2_acked; int remote_mode; int reporting_mode; int track_but; int data_signal; int zenabled; TYPE_1__ mode; int delta_z; int delta_y; int delta_x; int rfifo; int wfifo; } ;
struct cdev {struct cyapa_softc* si_drv1; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct cyapa_softc*) ;
 int FUNC_1 (struct cyapa_softc*) ;
 int FUNC_2 (struct cyapa_softc*) ;
 void* FUNC_3 (struct cyapa_softc*,int *) ;
 scalar_t__ FUNC_4 (struct cyapa_softc*,int *) ;
 int FUNC_5 (struct cyapa_softc*,int *) ;
 size_t FUNC_6 (struct cyapa_softc*,int *) ;
 char* FUNC_7 (struct cyapa_softc*,int *,size_t) ;
 int FUNC_8 (struct cyapa_softc*,int *,int) ;
 int FUNC_9 (char*,int) ;
 int FUNC_10 (char*,size_t,struct uio*) ;

__attribute__((used)) static int
FUNC_11(struct cdev *VAR_3, struct uio *VAR_4, int VAR_5)
{
 struct cyapa_softc *VAR_6;
 int VAR_7;
 int VAR_8;
 size_t VAR_9;
 uint8_t VAR_10;
 char* VAR_11;

 VAR_6 = VAR_3->si_drv1;
again:




 FUNC_0(VAR_6);
 while ((VAR_9 = FUNC_6(VAR_6, &VAR_6->wfifo)) > 0 && VAR_4->uio_resid) {
  if (VAR_9 > VAR_4->uio_resid)
   VAR_9 = VAR_4->uio_resid;
  VAR_11 = FUNC_7(VAR_6, &VAR_6->wfifo, 0);
  FUNC_2(VAR_6);
  VAR_7 = FUNC_10(VAR_11, VAR_9, VAR_4);
  FUNC_0(VAR_6);
  if (VAR_7)
   break;
  FUNC_7(VAR_6, &VAR_6->wfifo, VAR_9);
 }


 VAR_8 = (FUNC_4(VAR_6, &VAR_6->wfifo) != 0);
 while (FUNC_4(VAR_6, &VAR_6->wfifo) && VAR_8 && VAR_7 == 0) {
  if (VAR_6->ps2_cmd == 0)
   VAR_6->ps2_cmd = FUNC_3(VAR_6, &VAR_6->wfifo);
  switch(VAR_6->ps2_cmd) {
  case 0xE6:

   VAR_6->scaling_mode = 0;
   FUNC_8(VAR_6, &VAR_6->rfifo, 0xFA);
   break;
  case 0xE7:

   VAR_6->scaling_mode = 1;
   FUNC_8(VAR_6, &VAR_6->rfifo, 0xFA);
   break;
  case 0xE8:

   if (VAR_6->ps2_acked == 0) {
    VAR_6->ps2_acked = 1;
    FUNC_8(VAR_6, &VAR_6->rfifo, 0xFA);
   }
   if (FUNC_4(VAR_6, &VAR_6->wfifo) == 0) {
    VAR_8 = 0;
    break;
   }
   VAR_6->mode.resolution = FUNC_3(VAR_6, &VAR_6->wfifo);
   FUNC_8(VAR_6, &VAR_6->rfifo, 0xFA);
   break;
  case 0xE9:
   VAR_10 = 0;
   if (VAR_6->remote_mode)
    VAR_10 |= 0x40;
   if (VAR_6->reporting_mode)
    VAR_10 |= 0x20;
   if (VAR_6->scaling_mode)
    VAR_10 |= 0x10;
   if (VAR_6->track_but & VAR_0)
    VAR_10 |= 0x04;
   if (VAR_6->track_but & VAR_1)
    VAR_10 |= 0x02;
   if (VAR_6->track_but & VAR_2)
    VAR_10 |= 0x01;
   FUNC_8(VAR_6, &VAR_6->rfifo, 0xFA);
   FUNC_8(VAR_6, &VAR_6->rfifo, VAR_10);
   FUNC_8(VAR_6, &VAR_6->rfifo, 0x00);
   FUNC_8(VAR_6, &VAR_6->rfifo, 100);
   break;
  case 0xEA:

   VAR_6->remote_mode = 0;
   FUNC_8(VAR_6, &VAR_6->rfifo, 0xFA);
   VAR_6->delta_x = 0;
   VAR_6->delta_y = 0;
   VAR_6->delta_z = 0;
   break;
  case 0xEB:




   FUNC_8(VAR_6, &VAR_6->rfifo, 0xFA);
   VAR_6->data_signal = 1;
   break;
  case 0xEC:

   FUNC_8(VAR_6, &VAR_6->rfifo, 0xFA);
   break;
  case 0xEE:

   FUNC_8(VAR_6, &VAR_6->rfifo, 0xFA);
   break;
  case 0xF0:

   VAR_6->remote_mode = 1;
   FUNC_8(VAR_6, &VAR_6->rfifo, 0xFA);
   VAR_6->delta_x = 0;
   VAR_6->delta_y = 0;
   VAR_6->delta_z = 0;
   break;
  case 0xF2:
   FUNC_8(VAR_6, &VAR_6->rfifo, 0xFA);
   switch(VAR_6->zenabled) {
   case 1:
    FUNC_8(VAR_6, &VAR_6->rfifo, 0x03);
    break;
   case 2:
    FUNC_8(VAR_6, &VAR_6->rfifo, 0x04);
    break;
   default:
    FUNC_8(VAR_6, &VAR_6->rfifo, 0x00);
    break;
   }
   VAR_6->delta_x = 0;
   VAR_6->delta_y = 0;
   VAR_6->delta_z = 0;
   break;
  case 0xF3:





   if (VAR_6->ps2_acked == 0) {
    VAR_6->ps2_acked = 1;
    FUNC_8(VAR_6, &VAR_6->rfifo, 0xFA);
   }
   if (FUNC_4(VAR_6, &VAR_6->wfifo) == 0) {
    VAR_8 = 0;
    break;
   }
   VAR_6->mode.rate = FUNC_3(VAR_6, &VAR_6->wfifo);
   FUNC_8(VAR_6, &VAR_6->rfifo, 0xFA);
   if (VAR_6->zenabled == 0 && VAR_6->mode.rate == 200)
    VAR_6->zenabled = -1;
   else if (VAR_6->zenabled == -1 && VAR_6->mode.rate == 100)
    VAR_6->zenabled = -2;
   else if (VAR_6->zenabled == -1 && VAR_6->mode.rate == 200)
    VAR_6->zenabled = -3;
   else if (VAR_6->zenabled == -2 && VAR_6->mode.rate == 80)
    VAR_6->zenabled = 1;
   else if (VAR_6->zenabled == -3 && VAR_6->mode.rate == 80)
    VAR_6->zenabled = 2;
   if (VAR_6->mode.level)
    VAR_6->zenabled = 1;
   break;
  case 0xF4:

   FUNC_8(VAR_6, &VAR_6->rfifo, 0xFA);
   VAR_6->reporting_mode = 1;
   break;
  case 0xF5:




   FUNC_8(VAR_6, &VAR_6->rfifo, 0xFA);
   VAR_6->reporting_mode = 1;
   break;
  case 0xF6:






   FUNC_8(VAR_6, &VAR_6->rfifo, 0xFA);
   VAR_6->mode.rate = 100;
   VAR_6->mode.resolution = 4;
   VAR_6->scaling_mode = 0;
   VAR_6->reporting_mode = 1;
   VAR_6->remote_mode = 0;
   VAR_6->delta_x = 0;
   VAR_6->delta_y = 0;
   VAR_6->delta_z = 0;

   break;
  case 0xFE:






   FUNC_8(VAR_6, &VAR_6->rfifo, 0xFA);
   VAR_6->data_signal = 1;
   break;
  case 0xFF:



   FUNC_5(VAR_6, &VAR_6->rfifo);
   FUNC_5(VAR_6, &VAR_6->wfifo);
   FUNC_8(VAR_6, &VAR_6->rfifo, 0xFA);
   VAR_6->delta_x = 0;
   VAR_6->delta_y = 0;
   VAR_6->delta_z = 0;
   VAR_6->zenabled = 0;
   VAR_6->mode.level = 0;
   break;
  default:
   FUNC_9("unknown command %02x\n", VAR_6->ps2_cmd);
   break;
  }
  if (VAR_8) {
   VAR_6->ps2_cmd = 0;
   VAR_6->ps2_acked = 0;
  }
  FUNC_1(VAR_6);
 }
 FUNC_2(VAR_6);
 if (VAR_7 == 0 && (VAR_8 || VAR_4->uio_resid))
  goto again;
 return (VAR_7);
}
