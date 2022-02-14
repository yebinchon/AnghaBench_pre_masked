
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct tty {int t_ispeed; int t_ospeed; int t_cflag; TYPE_2__* t_sc; } ;
struct termios {int c_ospeed; int c_ispeed; int c_cflag; int c_iflag; int * c_cc; } ;
struct TYPE_7__ {TYPE_3__* chan; TYPE_1__* board; } ;
typedef TYPE_2__ drv_t ;
typedef int bdrv_t ;
struct TYPE_8__ {int dtr; } ;
struct TYPE_6__ {int * sys; } ;


 int VAR_0 ;




 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_2__*,char*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 size_t VAR_8 ;
 size_t VAR_9 ;
 int FUNC_3 (TYPE_3__*,int,int,int,int,int,int,int,int,int ,int ) ;
 int FUNC_4 (TYPE_3__*,int) ;
 int FUNC_5 () ;
 int FUNC_6 (int) ;
 int FUNC_7 (struct tty*) ;

__attribute__((used)) static int FUNC_8 (struct tty *VAR_10, struct termios *VAR_11)
{
 drv_t *VAR_12;
 bdrv_t *VAR_13;
 int VAR_14, VAR_15, VAR_16;

 VAR_12 = VAR_10->t_sc;
 VAR_13 = VAR_12->board->sys;

 VAR_14 = FUNC_5 ();
 FUNC_1 (VAR_13);
 if (VAR_11->c_ospeed == 0) {

  FUNC_4 (VAR_12->chan, 0);
  FUNC_2 (VAR_13);
  FUNC_6 (VAR_14);
  FUNC_0 (VAR_12, ("cx_param (hangup)\n"));
  return 0;
 }
 FUNC_0 (VAR_12, ("cx_param\n"));


 if (VAR_11->c_ospeed < 300 || VAR_11->c_ospeed > 256*1024) {
  FUNC_2 (VAR_13);
  FUNC_6 (VAR_14);
  return VAR_3;
 }
 if (VAR_11->c_ispeed && (VAR_11->c_ispeed < 300 || VAR_11->c_ispeed > 256*1024)) {
  FUNC_2 (VAR_13);
  FUNC_6 (VAR_14);
  return VAR_3;
 }


 VAR_10->t_ispeed = VAR_11->c_ispeed = VAR_10->t_ospeed = VAR_11->c_ospeed;
 VAR_10->t_cflag = VAR_11->c_cflag;


 switch (VAR_11->c_cflag & VAR_1) {
 default:
 case 128: VAR_15 = 8; break;
 case 129: VAR_15 = 7; break;
 case 130: VAR_15 = 6; break;
 case 131: VAR_15 = 5; break;
 }

 VAR_16 = ((VAR_11->c_cflag & VAR_6) ? 1 : 0) *
   (1 + ((VAR_11->c_cflag & VAR_7) ? 0 : 1));


 if (! VAR_12->chan->dtr)
  FUNC_4 (VAR_12->chan, 1);

 FUNC_7 (VAR_10);
 FUNC_3 (VAR_12->chan, VAR_11->c_ospeed, VAR_15, VAR_16, (VAR_11->c_cflag & VAR_2),
  !(VAR_11->c_cflag & VAR_6), (VAR_11->c_cflag & VAR_0),
  (VAR_11->c_iflag & VAR_5), (VAR_11->c_iflag & VAR_4),
  VAR_11->c_cc[VAR_8], VAR_11->c_cc[VAR_9]);
 FUNC_2 (VAR_13);
 FUNC_6 (VAR_14);
 return 0;
}
