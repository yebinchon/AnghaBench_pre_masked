
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uinput_cdev_state {int dummy; } ;
struct knote {scalar_t__ kn_hook; } ;


 int FUNC_0 (struct uinput_cdev_state*) ;
 int FUNC_1 (struct uinput_cdev_state*) ;

__attribute__((used)) static int
FUNC_2(struct knote *VAR_0, long VAR_1)
{
 struct uinput_cdev_state *VAR_2;
 int VAR_3;

 VAR_2 = (struct uinput_cdev_state *)VAR_0->kn_hook;

 FUNC_1(VAR_2);

 VAR_3 = !FUNC_0(VAR_2);
 return (VAR_3);
}
