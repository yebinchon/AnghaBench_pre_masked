
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_long ;
struct thread {int dummy; } ;
struct cdev {int dummy; } ;
typedef int mouse_info_t ;
typedef scalar_t__ caddr_t ;




 int VAR_0 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (char*,char,int ) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static int
FUNC_4(struct cdev *VAR_1, u_long VAR_2, caddr_t VAR_3, int VAR_4,
    struct thread *VAR_5)
{

 switch (VAR_2) {
 case 129:
  *(int*)VAR_3 = 0x200;
  return 0;
 case 128: {
  mouse_info_t *VAR_6 = (mouse_info_t*)VAR_3;

  FUNC_3(VAR_6);
  return (0);
 }
 default:




  return (VAR_0);
 }
}
