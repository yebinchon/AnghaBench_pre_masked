
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct terasic_mtl_softc {int mtl_reg_res; int mtl_reg_rid; int mtl_pixel_res; int mtl_pixel_rid; int mtl_text_res; int mtl_text_rid; } ;
typedef int device_t ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int ,int ) ;
 struct terasic_mtl_softc* FUNC_1 (int ) ;
 int FUNC_2 (struct terasic_mtl_softc*) ;

__attribute__((used)) static int
FUNC_3(device_t VAR_1)
{
 struct terasic_mtl_softc *VAR_2;

 VAR_2 = FUNC_1(VAR_1);
 FUNC_2(VAR_2);
 FUNC_0(VAR_1, VAR_0, VAR_2->mtl_text_rid,
     VAR_2->mtl_text_res);
 FUNC_0(VAR_1, VAR_0, VAR_2->mtl_pixel_rid,
     VAR_2->mtl_pixel_res);
 FUNC_0(VAR_1, VAR_0, VAR_2->mtl_reg_rid,
     VAR_2->mtl_reg_res);
 return (0);
}
