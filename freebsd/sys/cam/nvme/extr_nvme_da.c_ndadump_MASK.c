
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int vm_offset_t ;
typedef union ccb {int dummy; } ccb ;
typedef size_t uint64_t ;
typedef size_t uint32_t ;
typedef size_t u_int ;
struct nda_softc {TYPE_1__* disk; } ;
struct disk {struct cam_periph* d_drv1; } ;
struct ccb_nvmeio {void* ccb_state; int ccb_h; } ;
struct cam_periph {int flags; int path; scalar_t__ softc; } ;
typedef size_t off_t ;
typedef int nvmeio ;
struct TYPE_2__ {size_t d_sectorsize; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 void* VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (union ccb*,int ,int ,int,int *) ;
 int FUNC_1 (struct ccb_nvmeio*,int ,int) ;
 int FUNC_2 (struct nda_softc*,struct ccb_nvmeio*) ;
 int FUNC_3 (struct nda_softc*,struct ccb_nvmeio*,void*,size_t,size_t,size_t) ;
 int FUNC_4 (char*,int) ;
 int FUNC_5 (int ,char*) ;
 int FUNC_6 (int *,int ,int ) ;

__attribute__((used)) static int
FUNC_7(void *VAR_7, void *VAR_8, vm_offset_t VAR_9, off_t VAR_10, size_t VAR_11)
{
 struct cam_periph *VAR_12;
 struct nda_softc *VAR_13;
 u_int VAR_14;
 struct ccb_nvmeio VAR_15;
 struct disk *VAR_16;
 uint64_t VAR_17;
 uint32_t VAR_18;
 int VAR_19 = 0;

 VAR_16 = VAR_7;
 VAR_12 = VAR_16->d_drv1;
 VAR_13 = (struct nda_softc *)VAR_12->softc;
 VAR_14 = VAR_13->disk->d_sectorsize;
 VAR_17 = VAR_10 / VAR_14;
 VAR_18 = VAR_11 / VAR_14;

 if ((VAR_12->flags & VAR_0) != 0)
  return (VAR_2);


 FUNC_1(&VAR_15, 0, sizeof(VAR_15));
 if (VAR_11 > 0) {
  FUNC_6(&VAR_15.ccb_h, VAR_12->path, VAR_1);
  VAR_15.ccb_state = VAR_3;
  FUNC_3(VAR_13, &VAR_15, VAR_8, VAR_17, VAR_11, VAR_18);
  VAR_19 = FUNC_0((union ccb *)&VAR_15, VAR_6,
      0, VAR_4 | VAR_5, ((void*)0));
  if (VAR_19 != 0)
   FUNC_4("Aborting dump due to I/O error %d.\n", VAR_19);

  return (VAR_19);
 }


 FUNC_6(&VAR_15.ccb_h, VAR_12->path, VAR_1);

 VAR_15.ccb_state = VAR_3;
 FUNC_2(VAR_13, &VAR_15);
 VAR_19 = FUNC_0((union ccb *)&VAR_15, VAR_6,
     0, VAR_4 | VAR_5, ((void*)0));
 if (VAR_19 != 0)
  FUNC_5(VAR_12->path, "flush cmd failed\n");
 return (VAR_19);
}
