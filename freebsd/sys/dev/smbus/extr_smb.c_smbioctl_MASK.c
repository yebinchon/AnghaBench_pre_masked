
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u_long ;
typedef void* u_char ;
struct thread {int dummy; } ;
struct TYPE_4__ {char byte; int word; } ;
struct TYPE_3__ {int word; int byte; } ;
struct smbcmd {int slave; int rcount; int wcount; int rbuf; int cmd; int wbuf; TYPE_2__ rdata; TYPE_1__ wdata; } ;
struct smb_softc {int sc_dev; } ;
struct cdev {struct smb_softc* si_drv1; } ;
typedef int device_t ;
typedef scalar_t__ caddr_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;


 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;




 int VAR_6 ;


 int VAR_7 ;




 int VAR_8 ;


 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (char*,int ,int) ;
 int FUNC_2 (struct cdev*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int,int ,void**,char*) ;
 int FUNC_5 (int ,int,int ,int,char*) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ,int,int ,int ,int*) ;
 int FUNC_8 (int ,int,int ) ;
 int FUNC_9 (int ,int,int ,char*) ;
 int FUNC_10 (int ,int,int ,int*) ;
 int FUNC_11 (int ,int,int *) ;
 int FUNC_12 (int ,int ) ;
 int FUNC_13 (int ,int ,int) ;
 int FUNC_14 (int ,int,int ) ;
 int FUNC_15 (int ,int,int ,int ) ;
 int FUNC_16 (int ,int,int ,int ) ;

__attribute__((used)) static int
FUNC_17(struct cdev *VAR_9, u_long VAR_10, caddr_t VAR_11, int VAR_12, struct thread *VAR_13)
{
 char VAR_14[VAR_5];
 device_t VAR_15;
 struct smbcmd *VAR_16 = (struct smbcmd *)VAR_11;
 struct smb_softc *VAR_17 = VAR_9->si_drv1;
 device_t VAR_18 = VAR_17->sc_dev;
 int VAR_19;
 int VAR_20;
 u_char VAR_21;





 VAR_20 = FUNC_2(VAR_9);
 if (VAR_20 & 0x0400)
  VAR_16->slave = VAR_20 & 0x03ff;

 VAR_15 = FUNC_3(VAR_18);


 if (VAR_16->slave & 0x1)
  return (VAR_0);


 if ((VAR_19 = FUNC_13(VAR_15, VAR_18,
   (VAR_12 & VAR_2) ? VAR_3 : (VAR_8 | VAR_4))))
  return (VAR_19);

 switch (VAR_10) {
 case 134:
  VAR_19 = FUNC_6(FUNC_8(VAR_15, VAR_16->slave, VAR_7));
  break;

 case 135:
  VAR_19 = FUNC_6(FUNC_8(VAR_15, VAR_16->slave, VAR_6));
  break;

 case 130:
  VAR_19 = FUNC_6(FUNC_14(VAR_15, VAR_16->slave, VAR_16->cmd));
  break;

 case 131:
  VAR_19 = FUNC_6(FUNC_11(VAR_15, VAR_16->slave, &VAR_16->cmd));
  break;

 case 129:
  VAR_19 = FUNC_6(FUNC_15(VAR_15, VAR_16->slave, VAR_16->cmd,
      VAR_16->wdata.byte));
  break;

 case 128:
  VAR_19 = FUNC_6(FUNC_16(VAR_15, VAR_16->slave,
      VAR_16->cmd, VAR_16->wdata.word));
  break;

 case 138:
 case 133:

  VAR_19 = FUNC_6(FUNC_9(VAR_15, VAR_16->slave, VAR_16->cmd,
      &VAR_16->rdata.byte));
  if (VAR_19)
   break;
  if (VAR_16->rbuf && VAR_16->rcount >= 1) {
   VAR_19 = FUNC_1(&VAR_16->rdata.byte, VAR_16->rbuf, 1);
   VAR_16->rcount = 1;
  }
  break;

 case 137:
 case 132:

  VAR_19 = FUNC_6(FUNC_10(VAR_15, VAR_16->slave, VAR_16->cmd,
      &VAR_16->rdata.word));
  if (VAR_19)
   break;
  if (VAR_16->rbuf && VAR_16->rcount >= 2) {
   VAR_14[0] = (u_char)VAR_16->rdata.word;
   VAR_14[1] = (u_char)(VAR_16->rdata.word >> 8);
   VAR_19 = FUNC_1(VAR_14, VAR_16->rbuf, 2);
   VAR_16->rcount = 2;
  }
  break;

 case 139:
 case 136:

  VAR_19 = FUNC_6(FUNC_7(VAR_15, VAR_16->slave, VAR_16->cmd,
      VAR_16->wdata.word, &VAR_16->rdata.word));
  if (VAR_19)
   break;
  if (VAR_16->rbuf && VAR_16->rcount >= 2) {
   VAR_14[0] = (u_char)VAR_16->rdata.word;
   VAR_14[1] = (u_char)(VAR_16->rdata.word >> 8);
   VAR_19 = FUNC_1(VAR_14, VAR_16->rbuf, 2);
   VAR_16->rcount = 2;
  }

  break;

 case 140:
  if (VAR_16->wcount < 0) {
   VAR_19 = VAR_0;
   break;
  }
  if (VAR_16->wcount > VAR_5)
   VAR_16->wcount = VAR_5;
  if (VAR_16->wcount)
   VAR_19 = FUNC_0(VAR_16->wbuf, VAR_14, VAR_16->wcount);
  if (VAR_19)
   break;
  VAR_19 = FUNC_6(FUNC_5(VAR_15, VAR_16->slave, VAR_16->cmd,
      VAR_16->wcount, VAR_14));
  break;

 case 141:
  if (VAR_16->rcount < 0) {
   VAR_19 = VAR_0;
   break;
  }
  if (VAR_16->rcount > VAR_5)
   VAR_16->rcount = VAR_5;
  VAR_19 = FUNC_6(FUNC_4(VAR_15, VAR_16->slave, VAR_16->cmd,
      &VAR_21, VAR_14));
  if (VAR_19)
   break;
  if (VAR_16->rcount > VAR_21)
   VAR_16->rcount = VAR_21;
  VAR_19 = FUNC_1(VAR_14, VAR_16->rbuf, VAR_16->rcount);
  break;

 default:
  VAR_19 = VAR_1;
 }

 FUNC_12(VAR_15, VAR_18);

 return (VAR_19);
}
