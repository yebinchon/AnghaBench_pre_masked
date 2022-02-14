
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int * csw; int dev_ref; struct cdev* cdev; } ;
struct TYPE_5__ {TYPE_1__ dev; } ;
struct xbb_softc {int dev_name; int dev; int media_size; int sector_size; TYPE_3__* vn; TYPE_2__ backend; int dispatch_io; int device_type; } ;
struct vattr {int dummy; } ;
struct cdevsw {int (* d_ioctl ) (struct cdev*,int ,int ,int ,int ) ;} ;
struct cdev {struct cdevsw* si_devsw; } ;
typedef int caddr_t ;
struct TYPE_6__ {struct cdev* v_rdev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (TYPE_3__*,struct vattr*,int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int * FUNC_1 (struct cdev*,int *) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (struct cdev*,int ,int ,int ,int ) ;
 int FUNC_4 (struct cdev*,int ,int ,int ,int ) ;
 int VAR_7 ;
 int FUNC_5 (int ,int,char*,int ) ;

__attribute__((used)) static int
FUNC_6(struct xbb_softc *VAR_8)
{
 struct vattr VAR_9;
 struct cdev *VAR_10;
 struct cdevsw *VAR_11;
 int VAR_12;

 VAR_8->device_type = VAR_5;
 VAR_8->dispatch_io = VAR_7;
 VAR_8->backend.dev.cdev = VAR_8->vn->v_rdev;
 VAR_8->backend.dev.csw = FUNC_1(VAR_8->backend.dev.cdev,
          &VAR_8->backend.dev.dev_ref);
 if (VAR_8->backend.dev.csw == ((void*)0))
  FUNC_2("Unable to retrieve device switch");

 VAR_12 = FUNC_0(VAR_8->vn, &VAR_9, VAR_4);
 if (VAR_12) {
  FUNC_5(VAR_8->dev, VAR_12, "error getting "
     "vnode attributes for device %s",
     VAR_8->dev_name);
  return (VAR_12);
 }


 VAR_10 = VAR_8->vn->v_rdev;
 VAR_11 = VAR_10->si_devsw;
 if (!VAR_11->d_ioctl) {
  FUNC_5(VAR_8->dev, VAR_2, "no d_ioctl for "
     "device %s!", VAR_8->dev_name);
  return (VAR_2);
 }

 VAR_12 = VAR_11->d_ioctl(VAR_10, VAR_1,
          (caddr_t)&VAR_8->sector_size, VAR_3,
          VAR_6);
 if (VAR_12) {
  FUNC_5(VAR_8->dev, VAR_12,
     "error calling ioctl DIOCGSECTORSIZE "
     "for device %s", VAR_8->dev_name);
  return (VAR_12);
 }

 VAR_12 = VAR_11->d_ioctl(VAR_10, VAR_0,
          (caddr_t)&VAR_8->media_size, VAR_3,
          VAR_6);
 if (VAR_12) {
  FUNC_5(VAR_8->dev, VAR_12,
     "error calling ioctl DIOCGMEDIASIZE "
     "for device %s", VAR_8->dev_name);
  return (VAR_12);
 }

 return (0);
}
