
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int is_exiting; int devq; int tmo; int * cdev; } ;
struct TYPE_8__ {int isp_nchan; TYPE_1__ isp_osinfo; } ;
typedef TYPE_2__ ispsoftc_t ;


 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (TYPE_2__*,int) ;

int
FUNC_6(ispsoftc_t *VAR_0)
{
 int VAR_1;

 if (VAR_0->isp_osinfo.cdev) {
  FUNC_4(VAR_0->isp_osinfo.cdev);
  VAR_0->isp_osinfo.cdev = ((void*)0);
 }
 FUNC_0(VAR_0);

 VAR_0->isp_osinfo.is_exiting = 1;
 for (VAR_1 = VAR_0->isp_nchan - 1; VAR_1 >= 0; VAR_1 -= 1)
  FUNC_5(VAR_0, VAR_1);
 FUNC_1(VAR_0);
 FUNC_2(&VAR_0->isp_osinfo.tmo);
 FUNC_3(VAR_0->isp_osinfo.devq);
 return (0);
}
