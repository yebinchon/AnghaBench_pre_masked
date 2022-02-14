
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct thread {int dummy; } ;
struct cuse_client_command {int dummy; } ;
struct cuse_client {int fflags; TYPE_1__* server; struct cuse_client_command* cmds; } ;
struct cdev {int dummy; } ;
struct TYPE_2__ {int selinfo; } ;


 size_t VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long VAR_2 ;
 unsigned long VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (struct cuse_client**) ;
 int FUNC_1 (struct cuse_client_command*,int ,int ) ;
 int FUNC_2 (struct cuse_client_command*,int ,unsigned long,int ,int ) ;
 int FUNC_3 (struct cuse_client_command*) ;
 int FUNC_4 (struct cuse_client_command*) ;
 int FUNC_5 () ;
 int FUNC_6 () ;
 int FUNC_7 (struct thread*,int *) ;

__attribute__((used)) static int
FUNC_8(struct cdev *VAR_11, int VAR_12, struct thread *VAR_13)
{
 struct cuse_client_command *VAR_14;
 struct cuse_client *VAR_15;
 unsigned long VAR_16;
 int VAR_17;
 int VAR_18;

 VAR_17 = FUNC_0(&VAR_15);
 if (VAR_17 != 0)
  goto pollnval;

 VAR_16 = 0;

 if (VAR_12 & (VAR_8 | VAR_6 | VAR_9))
  VAR_16 |= VAR_2;

 if (VAR_12 & (VAR_7 | VAR_10))
  VAR_16 |= VAR_3;

 if (VAR_12 & VAR_5)
  VAR_16 |= VAR_1;

 VAR_14 = &VAR_15->cmds[VAR_0];

 FUNC_3(VAR_14);


 if (VAR_16 != 0 && VAR_13 != ((void*)0))
  FUNC_7(VAR_13, &VAR_15->server->selinfo);

 FUNC_5();
 FUNC_2(VAR_14,
     0, VAR_16, VAR_15->fflags, VAR_4);

 VAR_17 = FUNC_1(VAR_14, 0, 0);
 FUNC_6();

 FUNC_4(VAR_14);

 if (VAR_17 < 0) {
  goto pollnval;
 } else {
  VAR_18 = 0;
  if (VAR_17 & VAR_2)
   VAR_18 |= (VAR_12 & (VAR_8 | VAR_6 | VAR_9));
  if (VAR_17 & VAR_3)
   VAR_18 |= (VAR_12 & (VAR_7 | VAR_10));
  if (VAR_17 & VAR_1)
   VAR_18 |= (VAR_12 & VAR_5);
 }
 return (VAR_18);

pollnval:

 return (VAR_12 & (VAR_5 | VAR_8 | VAR_6 |
     VAR_9 | VAR_7 | VAR_10));
}
