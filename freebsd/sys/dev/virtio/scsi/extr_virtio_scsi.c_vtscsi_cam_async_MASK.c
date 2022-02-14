
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct vtscsi_softc {int dummy; } ;
struct cam_sim {int dummy; } ;
struct cam_path {int dummy; } ;




 int VAR_0 ;
 struct vtscsi_softc* FUNC_0 (struct cam_sim*) ;
 int FUNC_1 (struct vtscsi_softc*,int ,char*,int) ;

__attribute__((used)) static void
FUNC_2(void *VAR_1, uint32_t VAR_2, struct cam_path *VAR_3, void *VAR_4)
{
 struct cam_sim *VAR_5;
 struct vtscsi_softc *VAR_6;

 VAR_5 = VAR_1;
 VAR_6 = FUNC_0(VAR_5);

 FUNC_1(VAR_6, VAR_0, "code=%u\n", VAR_2);





 switch (VAR_2) {
 case 129:
  break;
 case 128:
  break;
 }
}
