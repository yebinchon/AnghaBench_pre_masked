
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct cam_sim {int dummy; } ;
typedef struct cam_sim cam_path ;
struct TYPE_10__ {int * devq; TYPE_3__* cdev; int tmo; int dev; } ;
struct TYPE_11__ {int isp_nchan; TYPE_1__ isp_osinfo; int isp_lock; int isp_maxcmds; int isp_dev; } ;
typedef TYPE_2__ ispsoftc_t ;
struct TYPE_12__ {TYPE_2__* si_drv1; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_2__*,int,struct cam_sim*,struct cam_sim*) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (TYPE_2__*) ;
 int VAR_3 ;
 int FUNC_3 (int *,int *,int ) ;
 int FUNC_4 (int *,int,int ,TYPE_2__*) ;
 int FUNC_5 (struct cam_sim*,int ) ;
 int FUNC_6 (struct cam_sim*) ;
 int * FUNC_7 (int ) ;
 int FUNC_8 (int *) ;
 char* FUNC_9 (int ) ;
 int FUNC_10 (int ) ;
 int VAR_4 ;
 scalar_t__ FUNC_11 (TYPE_2__*,int *,int) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 TYPE_3__* FUNC_12 (int *,int,int ,int ,int,char*,char const*) ;
 int FUNC_13 (int ) ;
 int FUNC_14 (struct cam_sim*) ;

int
FUNC_15(ispsoftc_t *VAR_8)
{
 const char *VAR_9 = FUNC_9(VAR_8->isp_osinfo.dev);
 int VAR_10 = FUNC_10(VAR_8->isp_dev);
 int VAR_11;




 VAR_8->isp_osinfo.devq = FUNC_7(VAR_8->isp_maxcmds);
 if (VAR_8->isp_osinfo.devq == ((void*)0)) {
  return (VAR_0);
 }

 for (VAR_11 = 0; VAR_11 < VAR_8->isp_nchan; VAR_11++) {
  if (FUNC_11(VAR_8, VAR_8->isp_osinfo.devq, VAR_11)) {
   goto unwind;
  }
 }

 FUNC_3(&VAR_8->isp_osinfo.tmo, &VAR_8->isp_lock, 0);
 VAR_7 = VAR_4 >> 2;
 FUNC_4(&VAR_8->isp_osinfo.tmo, VAR_7, VAR_6, VAR_8);

 VAR_8->isp_osinfo.cdev = FUNC_12(&VAR_5, VAR_10, VAR_3, VAR_2, 0600, "%s", VAR_9);
 if (VAR_8->isp_osinfo.cdev) {
  VAR_8->isp_osinfo.cdev->si_drv1 = VAR_8;
 }
 return (0);

unwind:
 while (--VAR_11 >= 0) {
  struct cam_sim *VAR_12;
  struct cam_path *VAR_13;

  FUNC_0(VAR_8, VAR_11, VAR_12, VAR_12);
  FUNC_0(VAR_8, VAR_11, VAR_13, VAR_13);
  FUNC_14(VAR_13);
  FUNC_1(VAR_8);
  FUNC_13(FUNC_6(VAR_12));
  FUNC_2(VAR_8);
  FUNC_5(VAR_12, VAR_1);
 }
 FUNC_8(VAR_8->isp_osinfo.devq);
 VAR_8->isp_osinfo.devq = ((void*)0);
 return (-1);
}
