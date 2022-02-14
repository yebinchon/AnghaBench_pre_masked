
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int32_t ;
struct nda_softc {int disk; } ;
struct ccb_getdev {int protocol; } ;
struct cam_periph {struct nda_softc* softc; } ;
struct cam_path {int dummy; } ;
typedef int cam_status ;





 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 uintptr_t VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,int ,int ,int ,char*,int ,struct cam_path*,void (*) (void*,int,struct cam_path*,void*),int const,struct ccb_getdev*) ;
 int FUNC_1 (struct cam_periph*,int,struct cam_path*,void*) ;
 int FUNC_2 (int ,char*,int ) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_3 (char*,int) ;

__attribute__((used)) static void
FUNC_4(void *VAR_10, u_int32_t VAR_11,
 struct cam_path *VAR_12, void *VAR_13)
{
 struct cam_periph *VAR_14;

 VAR_14 = (struct cam_periph *)VAR_10;
 switch (VAR_11) {
 case 129:
 {
  struct ccb_getdev *VAR_15;
  cam_status VAR_16;

  VAR_15 = (struct ccb_getdev *)VAR_13;
  if (VAR_15 == ((void*)0))
   break;

  if (VAR_15->protocol != VAR_5)
   break;






  VAR_16 = FUNC_0(VAR_8, VAR_7,
       VAR_6, VAR_9,
       "nda", VAR_0,
       VAR_12, FUNC_4,
       129, VAR_15);

  if (VAR_16 != VAR_1
   && VAR_16 != VAR_2)
   FUNC_3("ndaasync: Unable to attach to new device "
    "due to status 0x%x\n", VAR_16);
  break;
 }
 case 130:
 {
  uintptr_t VAR_17;

  VAR_17 = (uintptr_t)VAR_13;
  if (VAR_17 == VAR_3) {
   struct nda_softc *VAR_18;

   VAR_18 = VAR_14->softc;
   FUNC_2(VAR_18->disk, "GEOM::physpath",
       VAR_4);
  }
  break;
 }
 case 128:
 default:
  FUNC_1(VAR_14, VAR_11, VAR_12, VAR_13);
  break;
 }
}
