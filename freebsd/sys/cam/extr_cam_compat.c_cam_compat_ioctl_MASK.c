
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_long ;
struct thread {int dummy; } ;
struct cdev {int dummy; } ;
struct ccb_hdr_0x17 {int flags; } ;
typedef int d_ioctl_t ;
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
 int FUNC_0 (struct cdev*,int,scalar_t__,int,struct thread*,int *) ;
 int FUNC_1 (struct cdev*,int,scalar_t__,int,struct thread*,int *) ;

int
FUNC_2(struct cdev *VAR_9, u_long VAR_10, caddr_t VAR_11, int VAR_12,
    struct thread *VAR_13, d_ioctl_t *VAR_14)
{
 int VAR_15;

 switch (VAR_10) {
 case 130:
 {
  struct ccb_hdr_0x17 *VAR_16;

  VAR_16 = (struct ccb_hdr_0x17 *)VAR_11;
  if (VAR_16->flags & VAR_7) {
   VAR_16->flags &= ~VAR_7;
   VAR_16->flags |= VAR_5;
  }
  if (VAR_16->flags & VAR_3) {
   VAR_16->flags &= ~VAR_3;
   VAR_16->flags |= VAR_2;
  }
  if (VAR_16->flags & VAR_6) {
   VAR_16->flags &= VAR_6;
   VAR_16->flags |= VAR_4;
  }
  VAR_10 = VAR_1;
  VAR_15 = FUNC_0(VAR_9, VAR_10, VAR_11, VAR_12, VAR_13, VAR_14);
  break;
 }
 case 133:
  VAR_10 = VAR_0;
  VAR_15 = FUNC_0(VAR_9, VAR_10, VAR_11, VAR_12, VAR_13, VAR_14);
  break;
 case 129:
  VAR_10 = VAR_1;
  VAR_15 = FUNC_0(VAR_9, VAR_10, VAR_11, VAR_12, VAR_13, VAR_14);
  break;
 case 132:
  VAR_10 = VAR_0;
  VAR_15 = FUNC_0(VAR_9, VAR_10, VAR_11, VAR_12, VAR_13, VAR_14);
  break;
 case 128:
  VAR_10 = VAR_1;
  VAR_15 = FUNC_1(VAR_9, VAR_10, VAR_11, VAR_12, VAR_13, VAR_14);
  break;
 case 131:
  VAR_10 = VAR_0;
  VAR_15 = FUNC_1(VAR_9, VAR_10, VAR_11, VAR_12, VAR_13, VAR_14);
  break;
 default:
  VAR_15 = VAR_8;
 }

 return (VAR_15);
}
