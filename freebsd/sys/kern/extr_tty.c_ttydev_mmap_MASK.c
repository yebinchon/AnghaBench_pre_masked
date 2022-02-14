
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vm_paddr_t ;
typedef int vm_ooffset_t ;
typedef int vm_memattr_t ;
struct tty {int dummy; } ;
struct cdev {struct tty* si_drv1; } ;


 int FUNC_0 (struct tty*) ;
 int FUNC_1 (struct tty*) ;
 int FUNC_2 (struct tty*,int ,int *,int,int *) ;

__attribute__((used)) static int
FUNC_3(struct cdev *VAR_0, vm_ooffset_t VAR_1, vm_paddr_t *VAR_2,
    int VAR_3, vm_memattr_t *VAR_4)
{
 struct tty *VAR_5 = VAR_0->si_drv1;
 int VAR_6;



 VAR_6 = FUNC_1(VAR_5);
 if (VAR_6)
  return (-1);
 VAR_6 = FUNC_2(VAR_5, VAR_1, VAR_2, VAR_3, VAR_4);
 FUNC_0(VAR_5);

 return (VAR_6);
}
