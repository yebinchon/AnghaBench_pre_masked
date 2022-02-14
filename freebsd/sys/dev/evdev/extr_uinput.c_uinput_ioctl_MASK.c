
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_long ;
struct uinput_cdev_state {int dummy; } ;
struct thread {int dummy; } ;
struct cdev {int dummy; } ;
typedef int caddr_t ;


 int FUNC_0 (struct uinput_cdev_state*) ;
 int FUNC_1 (struct uinput_cdev_state*) ;
 int FUNC_2 (struct uinput_cdev_state*,char*,int ,int ) ;
 int FUNC_3 (void**) ;
 int FUNC_4 (struct uinput_cdev_state*,int ,int ) ;

__attribute__((used)) static int
FUNC_5(struct cdev *VAR_0, u_long VAR_1, caddr_t VAR_2, int VAR_3,
    struct thread *VAR_4)
{
 struct uinput_cdev_state *VAR_5;
 int VAR_6;

 VAR_6 = FUNC_3((void **)&VAR_5);
 if (VAR_6 != 0)
  return (VAR_6);

 FUNC_2(VAR_5, "ioctl called: cmd=0x%08lx, data=%p", VAR_1, VAR_2);

 FUNC_0(VAR_5);
 VAR_6 = FUNC_4(VAR_5, VAR_1, VAR_2);
 FUNC_1(VAR_5);

 return (VAR_6);
}
