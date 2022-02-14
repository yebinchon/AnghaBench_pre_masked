
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thread {int dummy; } ;
struct cuse_client_command {int dummy; } ;
struct cuse_client {scalar_t__ ioctl_buffer; int fflags; struct cuse_client_command* cmds; } ;
struct cdev {int dummy; } ;
typedef scalar_t__ caddr_t ;


 int VAR_0 ;
 long VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (unsigned long) ;
 unsigned long VAR_5 ;
 unsigned long VAR_6 ;
 unsigned long VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_1 (struct cuse_client**) ;
 int FUNC_2 (struct cdev*,struct cuse_client*) ;
 int FUNC_3 (struct cuse_client_command*,scalar_t__,int) ;
 int FUNC_4 (struct cuse_client_command*,long,unsigned long,int ,int ) ;
 int FUNC_5 (struct cuse_client_command*) ;
 int FUNC_6 (struct cuse_client_command*) ;
 int FUNC_7 (int) ;
 int FUNC_8 () ;
 int FUNC_9 () ;
 int FUNC_10 (scalar_t__,scalar_t__,int) ;

int
FUNC_11(struct cdev *VAR_10, unsigned long VAR_11,
    caddr_t VAR_12, int VAR_13, struct thread *VAR_14)
{
 struct cuse_client_command *VAR_15;
 struct cuse_client *VAR_16;
 int VAR_17;
 int VAR_18;

 VAR_17 = FUNC_1(&VAR_16);
 if (VAR_17 != 0)
  return (VAR_17);

 VAR_18 = FUNC_0(VAR_11);
 if (VAR_18 > VAR_0)
  return (VAR_3);

 VAR_15 = &VAR_16->cmds[VAR_2];

 FUNC_5(VAR_15);

 if (VAR_11 & (VAR_5 | VAR_7))
  FUNC_10(VAR_16->ioctl_buffer, VAR_12, VAR_18);







 FUNC_8();
 FUNC_4(VAR_15,
     (VAR_18 == 0) ? *(long *)VAR_12 : VAR_1,
     (unsigned long)VAR_11, VAR_16->fflags,
     (VAR_13 & VAR_9) ? VAR_8 : 0);

 VAR_17 = FUNC_3(VAR_15, VAR_12, VAR_18);
 FUNC_9();

 if (VAR_17 < 0) {
  VAR_17 = FUNC_7(VAR_17);
 } else {
  VAR_17 = 0;
 }

 if (VAR_11 & VAR_6)
  FUNC_10(VAR_12, VAR_16->ioctl_buffer, VAR_18);

 FUNC_6(VAR_15);

 if (VAR_17 == VAR_4)
  FUNC_2(VAR_10, VAR_16);

 return (VAR_17);
}
