
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct cam_sim {int dummy; } ;
struct cam_path {int dummy; } ;
struct ahc_softc {int dummy; } ;
struct ahc_devinfo {int dummy; } ;



 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct ahc_softc*,struct cam_sim*) ;
 int FUNC_1 (struct ahc_softc*,struct cam_sim*) ;
 int FUNC_2 (struct ahc_devinfo*,int ,int ,int ,int ,int ) ;
 int FUNC_3 (struct ahc_softc*,struct ahc_devinfo*,int *,int ,int ,int ,int,int ) ;
 int FUNC_4 (struct ahc_softc*,struct ahc_devinfo*,int ,int,int ) ;
 scalar_t__ FUNC_5 (struct cam_sim*) ;
 int FUNC_6 (struct cam_path*) ;
 int FUNC_7 (struct cam_path*) ;

__attribute__((used)) static void
FUNC_8(void *VAR_5, uint32_t VAR_6, struct cam_path *VAR_7, void *VAR_8)
{
 struct ahc_softc *VAR_9;
 struct cam_sim *VAR_10;

 VAR_10 = (struct cam_sim *)VAR_5;
 VAR_9 = (struct ahc_softc *)FUNC_5(VAR_10);
 switch (VAR_6) {
 case 128:
 {
  struct ahc_devinfo VAR_11;

  FUNC_2(&VAR_11, FUNC_1(VAR_9, VAR_10),
        FUNC_7(VAR_7),
        FUNC_6(VAR_7),
        FUNC_0(VAR_9, VAR_10),
        VAR_4);





  FUNC_4(VAR_9, &VAR_11, VAR_3,
         VAR_1|VAR_0, VAR_2);
  FUNC_3(VAR_9, &VAR_11, ((void*)0),
               0, 0, 0,
     VAR_1|VAR_0,
               VAR_2);
  break;
 }
 default:
  break;
 }
}
