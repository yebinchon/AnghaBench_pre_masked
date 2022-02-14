
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct fwohci_softc {int state; int dev; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int FUNC_0 (struct fwohci_softc*,int ) ;
 int FUNC_1 (struct fwohci_softc*,int ,int) ;
 int FUNC_2 (int ,char*,...) ;
 TYPE_1__* VAR_17 ;
 int FUNC_3 (char*) ;

void
FUNC_4(struct fwohci_softc *VAR_18)
{
  uint32_t VAR_19;
  int VAR_20;

  VAR_19 = FUNC_0(VAR_18, VAR_1);
  if (!(VAR_19 & VAR_11)) {



   return;
  }


  FUNC_1(VAR_18, VAR_0, VAR_7);

  FUNC_1(VAR_18, VAR_3, 1 << 31);

  FUNC_1(VAR_18, VAR_12, 0x7fffffff);
  FUNC_1(VAR_18, VAR_13, 0xffffffff);
  FUNC_1(VAR_18, VAR_14, 0x10000);

  FUNC_1(VAR_18, VAR_4, 1<<(13+16) | 0xfff);




  VAR_20 = FUNC_0(VAR_18, VAR_15);
  FUNC_2(VAR_17->dev, "node_id=0x%08x, gen=%d, ",
   VAR_19, (VAR_20 >> 16) & 0xff);
  if (VAR_19 & VAR_10) {
   FUNC_2(VAR_18->dev, "CYCLEMASTER mode\n");
   FUNC_1(VAR_18, VAR_8,
    VAR_5 | VAR_6);
  } else {
   FUNC_2(VAR_18->dev, "non CYCLEMASTER mode\n");
   FUNC_1(VAR_18, VAR_9, VAR_5);
   FUNC_1(VAR_18, VAR_8, VAR_6);
  }
  if (VAR_20 & VAR_16) {
   FUNC_2(VAR_17->dev, "SID Error\n");
   return;
  }
  FUNC_2(VAR_18->dev, "bus reset phase done\n");
  VAR_18->state = VAR_2;
}
