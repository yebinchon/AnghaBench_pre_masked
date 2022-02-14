
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int cpu; } ;
struct TYPE_4__ {TYPE_1__ spawn_op; } ;
struct fsocket_ioctl_arg {int fd; TYPE_2__ op; } ;
struct file {int f_mode; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,...) ;
 int VAR_1 ;
 int FUNC_1 (int ,char*,int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct file* FUNC_2 (int,int*) ;
 int FUNC_3 (struct file*,int) ;
 int FUNC_4 (struct file*,int,int) ;

__attribute__((used)) static int FUNC_5(struct fsocket_ioctl_arg *VAR_5)
{
 struct file *VAR_6;
 int VAR_7, VAR_8, VAR_9, VAR_10;

 FUNC_0(VAR_0, "Listen spawn listen fd %d\n", VAR_5->fd);

 VAR_7 = VAR_5->fd;
 VAR_8 = VAR_5->op.spawn_op.cpu;

 VAR_6 = FUNC_2(VAR_7, &VAR_10);
 if (VAR_6 == ((void*)0)) {
  FUNC_1(VAR_2, "fd [%d] doesn't exist!\n", VAR_7);
  return -VAR_1;
 }

 if (VAR_6->f_mode & VAR_3)
  VAR_9 = FUNC_4(VAR_6, VAR_7, VAR_8);
 else {
  FUNC_0(VAR_4, "Spawn non fastsocket\n");
  return -VAR_1;
 }

 FUNC_3(VAR_6, VAR_10);

 return VAR_9;
}
