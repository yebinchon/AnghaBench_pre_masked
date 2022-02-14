
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fsocket_ioctl_arg {int fd; int backlog; } ;
struct file {int f_mode; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,int) ;
 int VAR_1 ;
 int FUNC_1 (int ,char*,int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 struct file* FUNC_2 (int,int*) ;
 int FUNC_3 (struct file*,int) ;
 int FUNC_4 (struct file*,int) ;
 int FUNC_5 (int,int) ;

__attribute__((used)) static int FUNC_6(struct fsocket_ioctl_arg *VAR_8)
{
 struct file *VAR_9;
 int VAR_10, VAR_11, VAR_12, VAR_13;

 VAR_10 = VAR_8->fd;
 VAR_11 = VAR_8->backlog;

 VAR_9 = FUNC_2(VAR_10, &VAR_13);
 if (VAR_9 == ((void*)0)) {
  FUNC_1(VAR_2, "fd [%d] file doesn't exist!\n", VAR_10);
  return -VAR_1;
 }

 if (VAR_9->f_mode & VAR_4) {
  FUNC_0(VAR_0,"Listen fastsocket %d\n", VAR_10);
  if (VAR_7) {

   VAR_9->f_mode |= VAR_5;
   VAR_9->f_mode &= ~VAR_3;
  }
  VAR_12 = FUNC_4(VAR_9, VAR_11);
 } else {
  FUNC_0(VAR_6, "Listen non-fastsocket %d\n", VAR_10);
  VAR_12 = FUNC_5(VAR_10, VAR_11);
 }

 FUNC_3(VAR_9, VAR_13);

 return VAR_12;
}
