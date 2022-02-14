
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef union ccb {int dummy; } ccb ;
struct sg_softc {int device_stats; int maxio; } ;
struct cam_periph_map_info {int dummy; } ;
struct cam_periph {struct sg_softc* softc; } ;
typedef int mapinfo ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct cam_periph_map_info*,int) ;
 int FUNC_1 (struct cam_periph*) ;
 int FUNC_2 (union ccb*,struct cam_periph_map_info*,int ) ;
 int FUNC_3 (union ccb*,int ,int ,int ,int ) ;
 int FUNC_4 (struct cam_periph*) ;
 int FUNC_5 (union ccb*,struct cam_periph_map_info*) ;
 int VAR_2 ;

__attribute__((used)) static int
FUNC_6(struct cam_periph *VAR_3, union ccb *VAR_4)
{
 struct sg_softc *VAR_5;
 struct cam_periph_map_info VAR_6;
 int VAR_7;

 VAR_5 = VAR_3->softc;
 FUNC_0(&VAR_6, sizeof(VAR_6));
 FUNC_4(VAR_3);
 VAR_7 = FUNC_2(VAR_4, &VAR_6, VAR_5->maxio);
 FUNC_1(VAR_3);
 if (VAR_7)
  return (VAR_7);

 VAR_7 = FUNC_3(VAR_4,
      VAR_2,
      VAR_0,
      VAR_1,
      VAR_5->device_stats);

 FUNC_4(VAR_3);
 FUNC_5(VAR_4, &VAR_6);
 FUNC_1(VAR_3);

 return (VAR_7);
}
