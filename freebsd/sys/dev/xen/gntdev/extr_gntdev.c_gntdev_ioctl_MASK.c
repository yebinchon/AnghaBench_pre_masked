
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_long ;
struct thread {int dummy; } ;
struct ioctl_gntdev_unmap_notify {int dummy; } ;
struct ioctl_gntdev_unmap_grant_ref {int dummy; } ;
struct ioctl_gntdev_map_grant_ref {int dummy; } ;
struct ioctl_gntdev_get_offset_for_vaddr {int dummy; } ;
struct ioctl_gntdev_dealloc_gref {int dummy; } ;
struct ioctl_gntdev_alloc_gref {int dummy; } ;
struct cdev {int dummy; } ;
typedef scalar_t__ caddr_t ;


 int VAR_0 ;






 int FUNC_0 (struct ioctl_gntdev_alloc_gref*) ;
 int FUNC_1 (struct ioctl_gntdev_dealloc_gref*) ;
 int FUNC_2 (struct ioctl_gntdev_get_offset_for_vaddr*,struct thread*) ;
 int FUNC_3 (struct ioctl_gntdev_map_grant_ref*) ;
 int FUNC_4 (struct ioctl_gntdev_unmap_notify*) ;
 int FUNC_5 (struct ioctl_gntdev_unmap_grant_ref*) ;

__attribute__((used)) static int
FUNC_6(struct cdev *VAR_1, u_long VAR_2, caddr_t VAR_3,
 int VAR_4, struct thread *VAR_5)
{
 int VAR_6;

 switch (VAR_2) {
 case 129:
  VAR_6 = FUNC_4(
      (struct ioctl_gntdev_unmap_notify*) VAR_3);
  break;
 case 133:
  VAR_6 = FUNC_0(
      (struct ioctl_gntdev_alloc_gref*) VAR_3);
  break;
 case 132:
  VAR_6 = FUNC_1(
      (struct ioctl_gntdev_dealloc_gref*) VAR_3);
  break;
 case 130:
  VAR_6 = FUNC_3(
      (struct ioctl_gntdev_map_grant_ref*) VAR_3);
  break;
 case 128:
  VAR_6 = FUNC_5(
      (struct ioctl_gntdev_unmap_grant_ref*) VAR_3);
  break;
 case 131:
  VAR_6 = FUNC_2(
      (struct ioctl_gntdev_get_offset_for_vaddr*) VAR_3, VAR_5);
  break;
 default:
  VAR_6 = VAR_0;
  break;
 }

 return (VAR_6);
}
