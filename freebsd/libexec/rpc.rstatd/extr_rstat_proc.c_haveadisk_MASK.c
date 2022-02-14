
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct statinfo {struct devinfo* dinfo; } ;
struct devinfo {int numdevs; struct devinfo* mem_ptr; TYPE_1__* devices; } ;
struct TYPE_2__ {int device_type; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct devinfo*,int) ;
 scalar_t__ FUNC_1 (int *) ;
 int VAR_4 ;
 int FUNC_2 (int *,struct statinfo*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int) ;
 int FUNC_5 (struct devinfo*) ;
 scalar_t__ FUNC_6 (int) ;
 int FUNC_7 (int ,char*,int ) ;

int
FUNC_8(void)
{
 register int VAR_5;
 struct statinfo VAR_6;
 int VAR_7, VAR_8 = 0;

 if ((VAR_7 = FUNC_3(((void*)0))) < 0) {
  FUNC_7(VAR_3, "rstatd: can't get number of devices: %s",
         VAR_4);
  FUNC_4(1);
 }

 if (FUNC_1(((void*)0)) < 0) {
  FUNC_7(VAR_3, "rstatd: %s", VAR_4);
  FUNC_4(1);
 }

 VAR_6.dinfo = (struct devinfo *)FUNC_6(sizeof(struct devinfo));
 FUNC_0(VAR_6.dinfo, sizeof(struct devinfo));

 if (FUNC_2(((void*)0), &VAR_6) == -1) {
  FUNC_7(VAR_3, "rstatd: can't get device list: %s",
         VAR_4);
  FUNC_4(1);
 }
 for (VAR_5 = 0; VAR_5 < VAR_6.dinfo->numdevs; VAR_5++) {
  if (((VAR_6.dinfo->devices[VAR_5].device_type
        & VAR_1) == VAR_0)
   && ((VAR_6.dinfo->devices[VAR_5].device_type
        & VAR_2) == 0)) {
   VAR_8 = 1;
   break;
  }
 }

 if (VAR_6.dinfo->mem_ptr)
  FUNC_5(VAR_6.dinfo->mem_ptr);

 FUNC_5(VAR_6.dinfo);
 return(VAR_8);
}
