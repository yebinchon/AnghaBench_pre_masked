
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fb_info {int dummy; } ;
struct terasic_mtl_softc {struct fb_info mtl_fb_info; } ;
typedef int device_t ;


 struct terasic_mtl_softc* FUNC_0 (int ) ;

__attribute__((used)) static struct fb_info *
FUNC_1(device_t VAR_0)
{
        struct terasic_mtl_softc *VAR_1;

        VAR_1 = FUNC_0(VAR_0);
        return (&VAR_1->mtl_fb_info);
}
