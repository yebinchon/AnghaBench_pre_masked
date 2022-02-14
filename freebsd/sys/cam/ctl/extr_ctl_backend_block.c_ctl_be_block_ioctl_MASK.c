
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_long ;
struct thread {int dummy; } ;
struct ctl_lun_req {int reqtype; int error_str; int status; } ;
struct ctl_be_block_softc {int dummy; } ;
struct cdev {int dummy; } ;
typedef scalar_t__ caddr_t ;





 int VAR_0 ;

 int VAR_1 ;
 struct ctl_be_block_softc VAR_2 ;
 int FUNC_0 (struct ctl_be_block_softc*,struct ctl_lun_req*) ;
 int FUNC_1 (struct ctl_be_block_softc*,struct ctl_lun_req*) ;
 int FUNC_2 (struct ctl_be_block_softc*,struct ctl_lun_req*) ;
 int FUNC_3 (int ,int,char*,int) ;

__attribute__((used)) static int
FUNC_4(struct cdev *VAR_3, u_long VAR_4, caddr_t VAR_5,
   int VAR_6, struct thread *VAR_7)
{
 struct ctl_be_block_softc *VAR_8;
 int VAR_9;

 VAR_8 = &VAR_2;

 VAR_9 = 0;

 switch (VAR_4) {
 case 128: {
  struct ctl_lun_req *VAR_10;

  VAR_10 = (struct ctl_lun_req *)VAR_5;

  switch (VAR_10->reqtype) {
  case 131:
   VAR_9 = FUNC_0(VAR_8, VAR_10);
   break;
  case 129:
   VAR_9 = FUNC_2(VAR_8, VAR_10);
   break;
  case 130:
   VAR_9 = FUNC_1(VAR_8, VAR_10);
   break;
  default:
   VAR_10->status = VAR_0;
   FUNC_3(VAR_10->error_str, sizeof(VAR_10->error_str),
     "invalid LUN request type %d",
     VAR_10->reqtype);
   break;
  }
  break;
 }
 default:
  VAR_9 = VAR_1;
  break;
 }

 return (VAR_9);
}
