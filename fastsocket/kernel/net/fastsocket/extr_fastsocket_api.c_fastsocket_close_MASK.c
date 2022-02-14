
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fsocket_ioctl_arg {int fd; } ;
struct file {int f_mode; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,int ) ;
 int VAR_1 ;
 int FUNC_1 (int ,char*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct file* FUNC_2 (int ,int*) ;
 int FUNC_3 (struct file*,int) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;

__attribute__((used)) static int FUNC_6(struct fsocket_ioctl_arg * VAR_5)
{
 int VAR_6;
 struct file *VAR_7;
 int VAR_8;

 FUNC_0(VAR_0,"Close fastsocket %d\n", VAR_5->fd);

 VAR_7 = FUNC_2(VAR_5->fd, &VAR_8);
 if (VAR_7 == ((void*)0)) {
  FUNC_1(VAR_2, "Close file don't exist!\n");
  return -VAR_1;
 }

 if (VAR_7->f_mode & VAR_3) {
  FUNC_3(VAR_7, VAR_8);
  VAR_6 = FUNC_4(VAR_5->fd);
 } else {
  FUNC_3(VAR_7, VAR_8);
  FUNC_0(VAR_4, "Close non fastsocket %d\n", VAR_5->fd);
  VAR_6 = FUNC_5(VAR_5->fd);
 }

 return VAR_6;
}
