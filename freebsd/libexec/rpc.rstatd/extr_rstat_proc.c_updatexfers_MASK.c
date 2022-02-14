
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u_int64_t ;
struct statinfo {struct devinfo* dinfo; } ;
struct devinfo {int numdevs; struct devinfo* mem_ptr; TYPE_1__* devices; } ;
struct TYPE_2__ {int device_type; scalar_t__* operations; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct devinfo*,int) ;
 scalar_t__ FUNC_1 (int *) ;
 int VAR_6 ;
 int FUNC_2 (int *,struct statinfo*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int) ;
 int FUNC_5 (struct devinfo*) ;
 scalar_t__ FUNC_6 (int) ;
 int FUNC_7 (int ,char*,int ) ;

void
FUNC_8(int VAR_7, int *VAR_8)
{
 register int VAR_9, VAR_10, VAR_11, VAR_12;
 struct statinfo VAR_13;
 int VAR_14 = 0;
 u_int64_t VAR_15;

 if ((VAR_14 = FUNC_3(((void*)0))) < 0) {
  FUNC_7(VAR_5, "rstatd: can't get number of devices: %s",
         VAR_6);
  FUNC_4(1);
 }

 if (FUNC_1(((void*)0)) < 0) {
  FUNC_7(VAR_5, "rstatd: %s", VAR_6);
  FUNC_4(1);
 }

 VAR_13.dinfo = (struct devinfo *)FUNC_6(sizeof(struct devinfo));
 FUNC_0(VAR_13.dinfo, sizeof(struct devinfo));

 if (FUNC_2(((void*)0), &VAR_13) == -1) {
  FUNC_7(VAR_5, "rstatd: can't get device list: %s",
         VAR_6);
  FUNC_4(1);
 }

 for (VAR_9 = 0, VAR_10 = 0; VAR_9 < VAR_13.dinfo->numdevs && VAR_10 < VAR_7; VAR_9++) {
  if (((VAR_13.dinfo->devices[VAR_9].device_type
        & VAR_2) == VAR_1)
   && ((VAR_13.dinfo->devices[VAR_9].device_type
        & VAR_3) == 0)) {
   VAR_15 = 0;
   for (VAR_11 = 0; VAR_11 < VAR_0; VAR_11++)
    VAR_15 +=
        VAR_13.dinfo->devices[VAR_9].operations[VAR_11];
   if (VAR_15 > VAR_4)
    VAR_12 = VAR_4;
   else
    VAR_12 = VAR_15;
   VAR_8[VAR_10] = VAR_12;
   VAR_10++;
  }
 }

 if (VAR_13.dinfo->mem_ptr)
  FUNC_5(VAR_13.dinfo->mem_ptr);

 FUNC_5(VAR_13.dinfo);
}
